
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_delegation {int lock; int flags; } ;
struct nfs_client {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nfs_delegation *VAR_3,
  struct nfs_client *VAR_4)
{

 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_2, &VAR_3->flags);
 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_3(&VAR_3->lock);
 FUNC_1(VAR_0, &VAR_4->cl_state);
}
