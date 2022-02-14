
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl_fw {int fw_name; int version; struct rtl_fw_phy_action phy_action; struct firmware* fw; } ;
struct fw_info {int version; int fw_len; int fw_start; int magic; } ;
struct firmware {scalar_t__* data; size_t size; } ;
typedef int __le32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct rtl_fw *VAR_2)
{
 const struct firmware *VAR_3 = VAR_2->fw;
 struct fw_info *VAR_4 = (struct fw_info *)VAR_3->data;
 struct rtl_fw_phy_action *VAR_5 = &VAR_2->phy_action;

 if (VAR_3->size < VAR_0)
  return 0;

 if (!VAR_4->magic) {
  size_t VAR_6, VAR_7, VAR_8;
  u8 VAR_9 = 0;

  if (VAR_3->size < sizeof(*VAR_4))
   return 0;

  for (VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6++)
   VAR_9 += VAR_3->data[VAR_6];
  if (VAR_9 != 0)
   return 0;

  VAR_8 = FUNC_0(VAR_4->fw_start);
  if (VAR_8 > VAR_3->size)
   return 0;

  VAR_7 = FUNC_0(VAR_4->fw_len);
  if (VAR_7 > (VAR_3->size - VAR_8) / VAR_0)
   return 0;

  FUNC_1(VAR_2->version, VAR_4->version, VAR_1);

  VAR_5->code = (__le32 *)(VAR_3->data + VAR_8);
  VAR_5->size = VAR_7;
 } else {
  if (VAR_3->size % VAR_0)
   return 0;

  FUNC_1(VAR_2->version, VAR_2->fw_name, VAR_1);

  VAR_5->code = (__le32 *)VAR_3->data;
  VAR_5->size = VAR_3->size / VAR_0;
 }

 return 1;
}
