
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_ctx {int link_cleanup; int link_work; int ndev; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct ntb_transport_ctx *VAR_1 = VAR_0;

 if (FUNC_0(VAR_1->ndev, ((void*)0), ((void*)0)) == 1)
  FUNC_1(&VAR_1->link_work, 0);
 else
  FUNC_2(&VAR_1->link_cleanup);
}
