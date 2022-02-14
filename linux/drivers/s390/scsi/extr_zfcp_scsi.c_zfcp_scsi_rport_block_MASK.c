
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {struct fc_rport* rport; int adapter; } ;
struct fc_rport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (char*,int ,struct zfcp_port*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct zfcp_port *VAR_1)
{
 struct fc_rport *VAR_2 = VAR_1->rport;

 if (VAR_2) {
  FUNC_1("scpdely", VAR_1->adapter, VAR_1, ((void*)0),
           VAR_0,
           VAR_0);
  FUNC_0(VAR_2);
  VAR_1->rport = ((void*)0);
 }
}
