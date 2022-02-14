
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int dummy; } ;
struct nfs_direct_req {int lock; int flags; } ;
struct nfs_commit_info {struct nfs_direct_req* dreq; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_page*,int *,struct nfs_commit_info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfs_commit_info *VAR_1,
  struct nfs_page *VAR_2)
{
 struct nfs_direct_req *VAR_3 = VAR_1->dreq;

 FUNC_1(&VAR_3->lock);
 VAR_3->flags = VAR_0;
 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_2, ((void*)0), VAR_1, 0);
}
