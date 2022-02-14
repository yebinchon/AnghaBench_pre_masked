
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fc_wka_ports {int as; int ds; int ts; int ms; } ;
struct zfcp_adapter {struct zfcp_fc_wka_ports* gs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct zfcp_fc_wka_ports* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,struct zfcp_adapter*) ;

int FUNC_2(struct zfcp_adapter *VAR_6)
{
 struct zfcp_fc_wka_ports *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct zfcp_fc_wka_ports), VAR_5);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->gs = VAR_7;
 FUNC_1(&VAR_7->ms, VAR_3, VAR_6);
 FUNC_1(&VAR_7->ts, VAR_4, VAR_6);
 FUNC_1(&VAR_7->ds, VAR_2, VAR_6);
 FUNC_1(&VAR_7->as, VAR_1, VAR_6);

 return 0;
}
