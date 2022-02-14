
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int scan_event; int request_scan; int gather_stats; int adhoc_check; int request_passive_scan; int request_direct_scan; int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->net_dev);
 FUNC_4(VAR_1);


 FUNC_0(&VAR_1->request_scan);
 FUNC_0(&VAR_1->request_direct_scan);
 FUNC_0(&VAR_1->request_passive_scan);
 FUNC_0(&VAR_1->adhoc_check);
 FUNC_0(&VAR_1->gather_stats);

 FUNC_2(VAR_1);

 if (!(VAR_1->status & VAR_0)) {

  FUNC_5(&VAR_1->request_scan, 0);
 } else
  FUNC_0(&VAR_1->scan_event);
}
