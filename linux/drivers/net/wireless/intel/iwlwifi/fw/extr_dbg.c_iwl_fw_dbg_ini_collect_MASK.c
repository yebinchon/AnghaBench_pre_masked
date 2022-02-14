
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_fw_runtime {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_fw_runtime*,int) ;

int FUNC_1(struct iwl_fw_runtime *VAR_3, u32 VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 129:
 case 131:
 case 130:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_3, VAR_5);
}
