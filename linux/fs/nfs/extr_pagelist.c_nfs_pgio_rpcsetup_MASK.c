
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * verf; scalar_t__ eof; scalar_t__ count; int * fattr; } ;
struct TYPE_5__ {unsigned int count; int stable; int lock_context; int context; int pages; int pgbase; int offset; int fh; } ;
struct TYPE_4__ {int pagevec; } ;
struct nfs_pgio_header {int fattr; int verf; TYPE_3__ res; TYPE_2__ args; TYPE_1__ page_array; int mds_offset; int inode; struct nfs_page* req; } ;
struct nfs_page {int wb_lock_context; int wb_pgbase; } ;
struct nfs_commit_info {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_commit_info*) ;
 int FUNC_5 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_6(struct nfs_pgio_header *VAR_3,
         unsigned int VAR_4,
         int VAR_5, struct nfs_commit_info *VAR_6)
{
 struct nfs_page *VAR_7 = VAR_3->req;




 VAR_3->args.fh = FUNC_0(VAR_3->inode);
 VAR_3->args.offset = FUNC_5(VAR_7);

 VAR_3->mds_offset = VAR_3->args.offset;
 VAR_3->args.pgbase = VAR_7->wb_pgbase;
 VAR_3->args.pages = VAR_3->page_array.pagevec;
 VAR_3->args.count = VAR_4;
 VAR_3->args.context = FUNC_1(FUNC_3(VAR_7));
 VAR_3->args.lock_context = VAR_7->wb_lock_context;
 VAR_3->args.stable = VAR_2;
 switch (VAR_5 & (VAR_0 | 128)) {
 case 0:
  break;
 case 128:
  if (FUNC_4(VAR_6))
   break;

 default:
  VAR_3->args.stable = VAR_1;
 }

 VAR_3->res.fattr = &VAR_3->fattr;
 VAR_3->res.count = 0;
 VAR_3->res.eof = 0;
 VAR_3->res.verf = &VAR_3->verf;
 FUNC_2(&VAR_3->fattr);
}
