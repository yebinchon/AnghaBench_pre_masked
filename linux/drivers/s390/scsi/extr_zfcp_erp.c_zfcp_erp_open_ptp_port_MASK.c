
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {scalar_t__ wwpn; int d_id; } ;
struct zfcp_erp_action {struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {scalar_t__ peer_wwpn; int peer_d_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zfcp_erp_action*) ;
 int FUNC_1 (struct zfcp_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct zfcp_erp_action *VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_2->adapter;
 struct zfcp_port *VAR_4 = VAR_2->port;

 if (VAR_4->wwpn != VAR_3->peer_wwpn) {
  FUNC_1(VAR_4, VAR_1);
  return VAR_0;
 }
 VAR_4->d_id = VAR_3->peer_d_id;
 return FUNC_0(VAR_2);
}
