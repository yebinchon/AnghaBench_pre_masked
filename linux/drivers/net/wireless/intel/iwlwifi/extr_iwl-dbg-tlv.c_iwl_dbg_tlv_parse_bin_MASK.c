
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct iwl_ucode_tlv {int length; } ;
struct iwl_trans {int dummy; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*,size_t,size_t) ;
 int FUNC_2 (struct iwl_trans*,struct iwl_ucode_tlv*,int) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_trans *VAR_1, const u8 *VAR_2,
     size_t VAR_3)
{
 struct iwl_ucode_tlv *VAR_4;
 u32 VAR_5;

 while (VAR_3 >= sizeof(*VAR_4)) {
  VAR_3 -= sizeof(*VAR_4);
  VAR_4 = (void *)VAR_2;

  VAR_5 = FUNC_3(VAR_4->length);

  if (VAR_3 < VAR_5) {
   FUNC_1(VAR_1, "invalid TLV len: %zd/%u\n",
    VAR_3, VAR_5);
   return -VAR_0;
  }
  VAR_3 -= FUNC_0(VAR_5, 4);
  VAR_2 += sizeof(*VAR_4) + FUNC_0(VAR_5, 4);

  FUNC_2(VAR_1, VAR_4, 1);
 }

 return 0;
}
