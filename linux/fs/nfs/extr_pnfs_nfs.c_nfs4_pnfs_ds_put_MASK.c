
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_pnfs_ds {int ds_node; int ds_count; } ;


 int FUNC_0 (struct nfs4_pnfs_ds*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfs4_pnfs_ds *VAR_1)
{
 if (FUNC_2(&VAR_1->ds_count,
    &VAR_0)) {
  FUNC_1(&VAR_1->ds_node);
  FUNC_3(&VAR_0);
  FUNC_0(VAR_1);
 }
}
