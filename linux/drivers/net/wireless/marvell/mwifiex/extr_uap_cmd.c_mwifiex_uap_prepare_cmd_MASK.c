
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_command {void* size; void* command; } ;


 int VAR_0 ;







 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_private*,void*,void*) ;
 int FUNC_2 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_3 (struct host_cmd_ds_command*,int,int ,void*) ;
 int FUNC_4 (int ,int ,char*,int) ;

int FUNC_5(struct mwifiex_private *VAR_2, u16 VAR_3,
       u16 VAR_4, u32 VAR_5,
       void *VAR_6, void *VAR_7)
{
 struct host_cmd_ds_command *VAR_8 = VAR_7;

 switch (VAR_3) {
 case 128:
  if (FUNC_3(VAR_8, VAR_4, VAR_5, VAR_6))
   return -1;
  break;
 case 131:
 case 130:
 case 133:
 case 134:
  VAR_8->command = FUNC_0(VAR_3);
  VAR_8->size = FUNC_0(VAR_1);
  break;
 case 129:
  if (FUNC_2(VAR_2, VAR_8, VAR_6))
   return -1;
  break;
 case 132:
  if (FUNC_1(VAR_2, VAR_7,
         VAR_6))
   return -1;
  break;
 default:
  FUNC_4(VAR_2->adapter, VAR_0,
       "PREP_CMD: unknown cmd %#x\n", VAR_3);
  return -1;
 }

 return 0;
}
