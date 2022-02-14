
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int lock; int adapter_restart; int rf_kill; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 struct ipw_priv *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_4(&VAR_3->lock, VAR_4);

 if (FUNC_1(VAR_3)) {
  FUNC_0("RF Kill active, rescheduling GPIO check\n");
  FUNC_2(&VAR_3->rf_kill, 2 * VAR_0);
  goto exit_unlock;
 }



 if (!(VAR_3->status & VAR_1)) {
  FUNC_0("HW RF Kill no longer active, restarting "
      "device\n");


  FUNC_3(&VAR_3->adapter_restart);
 } else
  FUNC_0("HW RF Kill deactivated.  SW RF Kill still "
      "enabled\n");

      exit_unlock:
 FUNC_5(&VAR_3->lock, VAR_4);
}
