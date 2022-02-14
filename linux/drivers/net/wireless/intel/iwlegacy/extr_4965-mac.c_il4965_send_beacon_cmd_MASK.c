
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int dummy; } ;
struct TYPE_2__ {int * cmd; } ;
struct il_frame {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,struct il_frame*) ;
 struct il_frame* FUNC_2 (struct il_priv*) ;
 unsigned int FUNC_3 (struct il_priv*,struct il_frame*) ;
 int FUNC_4 (struct il_priv*,int ,unsigned int,int *) ;

int
FUNC_5(struct il_priv *VAR_3)
{
 struct il_frame *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) {
  FUNC_0("Could not obtain free frame buffer for beacon "
         "command.\n");
  return -VAR_2;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_0("Error configuring the beacon command\n");
  FUNC_1(VAR_3, VAR_4);
  return -VAR_1;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_0, VAR_5, &VAR_4->u.cmd[0]);

 FUNC_1(VAR_3, VAR_4);

 return VAR_6;
}
