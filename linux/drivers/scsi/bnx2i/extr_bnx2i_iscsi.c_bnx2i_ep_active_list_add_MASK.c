
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int ep_rdwr_lock; int ep_active_list; } ;
struct bnx2i_endpoint {int link; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bnx2i_hba *VAR_0,
         struct bnx2i_endpoint *VAR_1)
{
 FUNC_1(&VAR_0->ep_rdwr_lock);
 FUNC_0(&VAR_1->link, &VAR_0->ep_active_list);
 FUNC_2(&VAR_0->ep_rdwr_lock);
}
