
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int last_seq_num; int last_frag_num; int config; int request_scan; int last_rate; int scan_event; int request_passive_scan; int request_direct_scan; int net_dev; scalar_t__ last_packet_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ipw_priv*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct ipw_priv *VAR_2)
{
 VAR_2->last_seq_num = -1;
 VAR_2->last_frag_num = -1;
 VAR_2->last_packet_time = 0;

 FUNC_5(VAR_2->net_dev);

 FUNC_0(&VAR_2->request_scan);
 FUNC_0(&VAR_2->request_direct_scan);
 FUNC_0(&VAR_2->request_passive_scan);
 FUNC_0(&VAR_2->scan_event);
 FUNC_4(VAR_2);

 VAR_2->last_rate = FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(VAR_2);

 if (VAR_2->config & VAR_0)
  FUNC_7(&VAR_2->request_scan, VAR_1);
}
