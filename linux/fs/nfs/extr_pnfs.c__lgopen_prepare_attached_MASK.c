
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pnfs_layout_range {scalar_t__ iomode; int length; int offset; } ;
struct pnfs_layout_hdr {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct TYPE_8__ {int * lg_res; } ;
struct TYPE_7__ {int fmode; int * lg_args; } ;
struct nfs4_opendata {TYPE_4__ o_res; TYPE_3__ o_arg; struct nfs4_layoutget* lgp; TYPE_1__* dentry; } ;
struct nfs4_layoutget {int res; int args; } ;
struct inode {TYPE_2__* i_mapping; } ;
struct TYPE_6__ {scalar_t__ nrpages; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pnfs_layout_hdr* FUNC_0 (struct inode*,struct nfs_open_context*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct nfs4_layoutget* FUNC_2 (struct inode*,struct nfs_open_context*,int *,struct pnfs_layout_range*,int ) ;
 int FUNC_3 (struct pnfs_layout_hdr*) ;
 int FUNC_4 (struct pnfs_layout_hdr*) ;

__attribute__((used)) static void FUNC_5(struct nfs4_opendata *VAR_6,
         struct nfs_open_context *VAR_7)
{
 struct inode *VAR_8 = VAR_6->dentry->d_inode;
 struct pnfs_layout_range VAR_9 = {
  .iomode = (VAR_6->o_arg.fmode & VAR_0) ?
     VAR_3: VAR_2,
  .offset = 0,
  .length = VAR_4,
 };
 struct nfs4_layoutget *VAR_10;
 struct pnfs_layout_hdr *VAR_11;


 if (VAR_9.iomode == VAR_2 &&
    (FUNC_1(VAR_8) == 0 || VAR_8->i_mapping->nrpages != 0))
  return;

 VAR_11 = FUNC_0(VAR_8, VAR_7);
 if (!VAR_11)
  return;
 VAR_10 = FUNC_2(VAR_8, VAR_7, &VAR_5,
          &VAR_9, VAR_1);
 if (!VAR_10) {
  FUNC_3(VAR_11);
  FUNC_4(VAR_11);
  return;
 }
 VAR_6->lgp = VAR_10;
 VAR_6->o_arg.lg_args = &VAR_10->args;
 VAR_6->o_res.lg_res = &VAR_10->res;
}
