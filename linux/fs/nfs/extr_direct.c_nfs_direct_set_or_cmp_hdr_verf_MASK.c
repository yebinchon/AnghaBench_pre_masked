
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_writeverf {scalar_t__ committed; } ;
struct nfs_pgio_header {int verf; int ds_commit_idx; int ds_clp; } ;
struct nfs_direct_req {int dummy; } ;


 int FUNC_0 (struct nfs_writeverf*,int *) ;
 struct nfs_writeverf* FUNC_1 (struct nfs_direct_req*,int ,int ) ;
 int FUNC_2 (struct nfs_direct_req*,struct nfs_pgio_header*) ;

__attribute__((used)) static int FUNC_3(struct nfs_direct_req *VAR_0,
       struct nfs_pgio_header *VAR_1)
{
 struct nfs_writeverf *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->ds_clp, VAR_1->ds_commit_idx);
 if (VAR_2->committed < 0) {
  FUNC_2(VAR_0, VAR_1);
  return 0;
 }
 return FUNC_0(VAR_2, &VAR_1->verf);
}
