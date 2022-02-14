
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct uni_data_desc {int size; int findex; } ;
struct netxen_adapter {scalar_t__ fw_type; struct firmware* fw; } ;
struct firmware {int * data; } ;
typedef int __le32 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct uni_data_desc* FUNC_1 (struct netxen_adapter*,int ,int ) ;
 int FUNC_2 (int const*,char*,int*,int*,int*) ;
 int FUNC_3 (int const*,char*,int) ;

__attribute__((used)) static __le32
FUNC_4(struct netxen_adapter *VAR_4)
{
 struct uni_data_desc *VAR_5;
 const struct firmware *VAR_6 = VAR_4->fw;
 __le32 VAR_7, VAR_8, VAR_9;
 const u8 *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (VAR_4->fw_type == VAR_1) {

  VAR_5 = FUNC_1(VAR_4,
    VAR_2, VAR_3);
  VAR_10 = VAR_6->data + FUNC_0(VAR_5->findex) +
    FUNC_0(VAR_5->size) - 17;

  for (VAR_11 = 0; VAR_11 < 12; VAR_11++) {
   if (!FUNC_3(&VAR_10[VAR_11], "REV=", 4)) {
    VAR_12 = FUNC_2(&VAR_10[VAR_11+4], "%u.%u.%u ",
       &VAR_7, &VAR_8, &VAR_9);
    break;
   }
  }

  if (VAR_12 != 3)
   return 0;

  return VAR_7 + (VAR_8 << 8) + (VAR_9 << 16);

 } else
  return FUNC_0(*(u32 *)&VAR_6->data[VAR_0]);
}
