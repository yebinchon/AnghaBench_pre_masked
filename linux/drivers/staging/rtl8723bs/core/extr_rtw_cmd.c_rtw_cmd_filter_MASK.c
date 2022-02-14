
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cmd_priv {int cmdthd_running; TYPE_1__* padapter; } ;
struct cmd_obj {scalar_t__ cmdcode; } ;
struct TYPE_2__ {int hw_init_completed; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

int FUNC_2(struct cmd_priv *VAR_3, struct cmd_obj *VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_4->cmdcode == FUNC_0(VAR_2))
  VAR_5 = 1;

 if ((VAR_3->padapter->hw_init_completed == 0 && VAR_5 == 0)
  || FUNC_1(&(VAR_3->cmdthd_running)) == 0
 ) {






  return VAR_0;
 }
 return VAR_1;
}
