
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;


 int FUNC_0 (struct zfcp_port*,int,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct zfcp_port *VAR_0, int VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct zfcp_adapter *VAR_4 = VAR_0->adapter;

 FUNC_1(&VAR_4->erp_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_4->erp_lock, VAR_3);
}
