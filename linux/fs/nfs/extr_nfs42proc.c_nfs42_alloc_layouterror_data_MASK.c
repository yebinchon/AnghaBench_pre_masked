
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_segment {TYPE_1__* pls_layout; } ;
struct TYPE_4__ {scalar_t__ inode; } ;
struct nfs42_layouterror_data {scalar_t__ inode; scalar_t__ lseg; TYPE_2__ args; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct inode* plh_inode; } ;


 int FUNC_0 (struct nfs42_layouterror_data*) ;
 struct nfs42_layouterror_data* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct pnfs_layout_segment*) ;

__attribute__((used)) static struct nfs42_layouterror_data *
FUNC_5(struct pnfs_layout_segment *VAR_0, gfp_t VAR_1)
{
 struct nfs42_layouterror_data *VAR_2;
 struct inode *VAR_3 = VAR_0->pls_layout->plh_inode;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (VAR_2) {
  VAR_2->args.inode = VAR_2->inode = FUNC_2(VAR_3);
  if (VAR_2->inode) {
   VAR_2->lseg = FUNC_4(VAR_0);
   if (VAR_2->lseg)
    return VAR_2;
   FUNC_3(VAR_2->inode);
  }
  FUNC_0(VAR_2);
 }
 return ((void*)0);
}
