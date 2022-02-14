
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {int device_family; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*,int) ;
 int FUNC_2 (struct iwl_trans*,int,int) ;

__attribute__((used)) static int FUNC_3(struct iwl_trans *VAR_6)
{
 u32 VAR_7, VAR_8;

 switch (VAR_6->trans_cfg->device_family) {
 case 128:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 default:
  return 0;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 != 0xa5a5a5a0 && (VAR_7 & VAR_2)) {
  u32 VAR_9 = FUNC_1(VAR_6, VAR_8);

  if (VAR_9 & VAR_5) {
   FUNC_0(VAR_6,
    "Error, can not clear persistence bit\n");
   return -VAR_0;
  }
  FUNC_2(VAR_6, VAR_1,
         VAR_7 & ~VAR_2);
 }

 return 0;
}
