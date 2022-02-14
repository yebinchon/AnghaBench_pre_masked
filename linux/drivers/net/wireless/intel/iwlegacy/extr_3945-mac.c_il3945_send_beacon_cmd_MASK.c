
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct il_priv {int dummy; } ;
struct TYPE_2__ {int * cmd; } ;
struct il3945_frame {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,struct il3945_frame*) ;
 struct il3945_frame* FUNC_2 (struct il_priv*) ;
 unsigned int FUNC_3 (struct il_priv*,struct il3945_frame*,int ) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,int ,unsigned int,int *) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_2)
{
 struct il3945_frame *VAR_3;
 unsigned int VAR_4;
 int VAR_5;
 u8 VAR_6;

 VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3) {
  FUNC_0("Could not obtain free frame buffer for beacon "
         "command.\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_4(VAR_2);

 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_6);

 VAR_5 = FUNC_5(VAR_2, VAR_0, VAR_4, &VAR_3->u.cmd[0]);

 FUNC_1(VAR_2, VAR_3);

 return VAR_5;
}
