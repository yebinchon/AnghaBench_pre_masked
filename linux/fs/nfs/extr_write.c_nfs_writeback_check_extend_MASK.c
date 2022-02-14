
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfs_pgio_res {scalar_t__ count; } ;
struct nfs_pgio_args {scalar_t__ offset; } ;
struct nfs_pgio_header {int inode; struct nfs_pgio_res res; struct nfs_pgio_args args; } ;
struct nfs_fattr {int valid; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_fattr*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nfs_pgio_header *VAR_1,
  struct nfs_fattr *VAR_2)
{
 struct nfs_pgio_args *VAR_3 = &VAR_1->args;
 struct nfs_pgio_res *VAR_4 = &VAR_1->res;
 u64 VAR_5 = VAR_3->offset + VAR_4->count;

 if (!(VAR_2->valid & VAR_0))
  VAR_2->size = VAR_5;
 if (FUNC_2(VAR_2->size) < FUNC_0(VAR_1->inode)) {
  VAR_2->valid &= ~VAR_0;
  return;
 }
 if (VAR_5 != VAR_2->size)
  return;

 FUNC_1(VAR_2);

 VAR_2->valid |= VAR_0;
}
