
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int status; int erp_action; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct zfcp_port *VAR_1)
{
 if (FUNC_2(VAR_0,
           &VAR_1->status))
  FUNC_1("erpubl1", &VAR_1->erp_action);
 FUNC_0(VAR_0, &VAR_1->status);
}
