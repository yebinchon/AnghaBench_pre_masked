
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int erp_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,struct zfcp_adapter*,int *,int *,char*,int ) ;
 int FUNC_3 (struct zfcp_adapter*,int) ;
 int FUNC_4 (struct zfcp_adapter*) ;

void FUNC_5(struct zfcp_adapter *VAR_1, int VAR_2,
        char *VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_1);

 FUNC_0(&VAR_1->erp_lock, VAR_4);
 FUNC_2(VAR_0, VAR_1,
    ((void*)0), ((void*)0), VAR_3, 0);
 FUNC_1(&VAR_1->erp_lock, VAR_4);
}
