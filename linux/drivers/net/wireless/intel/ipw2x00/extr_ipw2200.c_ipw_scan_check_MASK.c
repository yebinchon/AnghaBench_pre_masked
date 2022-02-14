
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int scan_check; int adapter_restart; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
 struct ipw_priv *VAR_5 = VAR_4;

 if (VAR_5->status & VAR_3) {
  FUNC_0("Scan completion watchdog resetting "
          "adapter after (%dms).\n",
          FUNC_2(VAR_1));
  FUNC_4(&VAR_5->adapter_restart);
 } else if (VAR_5->status & VAR_2) {
  FUNC_0("Scan completion watchdog aborting scan "
          "after (%dms).\n",
          FUNC_2(VAR_1));
  FUNC_1(VAR_5);
  FUNC_3(&VAR_5->scan_check, VAR_0);
 }
}
