
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_segment {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int cred; int dentry; } ;
struct nfs_commit_info {int dreq; int completion_ops; } ;
struct TYPE_4__ {int * verf; int * fattr; } ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ offset; int fh; } ;
struct nfs_commit_data {int fattr; int verf; TYPE_2__ res; int context; TYPE_1__ args; struct inode* inode; int dreq; int completion_ops; int * mds_ops; int pages; int lwb; struct pnfs_layout_segment* lseg; int cred; } ;
struct list_head {int next; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_open_context*) ;
 int FUNC_3 (struct list_head*,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct nfs_page* FUNC_6 (int ) ;
 struct nfs_open_context* FUNC_7 (struct nfs_page*) ;

void FUNC_8(struct nfs_commit_data *VAR_1,
       struct list_head *VAR_2,
       struct pnfs_layout_segment *VAR_3,
       struct nfs_commit_info *VAR_4)
{
 struct nfs_page *VAR_5 = FUNC_6(VAR_2->next);
 struct nfs_open_context *VAR_6 = FUNC_7(VAR_5);
 struct inode *VAR_7 = FUNC_1(VAR_6->dentry);




 FUNC_3(VAR_2, &VAR_1->pages);

 VAR_1->inode = VAR_7;
 VAR_1->cred = VAR_6->cred;
 VAR_1->lseg = VAR_3;

 if (VAR_3)
  VAR_1->lwb = FUNC_5(&VAR_1->pages);
 VAR_1->mds_ops = &VAR_0;
 VAR_1->completion_ops = VAR_4->completion_ops;
 VAR_1->dreq = VAR_4->dreq;

 VAR_1->args.fh = FUNC_0(VAR_1->inode);

 VAR_1->args.offset = 0;
 VAR_1->args.count = 0;
 VAR_1->context = FUNC_2(VAR_6);
 VAR_1->res.fattr = &VAR_1->fattr;
 VAR_1->res.verf = &VAR_1->verf;
 FUNC_4(&VAR_1->fattr);
}
