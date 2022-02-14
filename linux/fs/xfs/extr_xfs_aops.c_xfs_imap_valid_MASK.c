
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
struct TYPE_5__ {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
struct xfs_writepage_ctx {scalar_t__ fork; scalar_t__ data_seq; scalar_t__ cow_seq; TYPE_2__ imap; } ;
struct TYPE_6__ {int if_seq; } ;
struct xfs_inode {TYPE_1__* i_cowfp; TYPE_3__ i_df; } ;
struct TYPE_4__ {int if_seq; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;

__attribute__((used)) static bool
FUNC_2(
 struct xfs_writepage_ctx *VAR_1,
 struct xfs_inode *VAR_2,
 xfs_fileoff_t VAR_3)
{
 if (VAR_3 < VAR_1->imap.br_startoff ||
     VAR_3 >= VAR_1->imap.br_startoff + VAR_1->imap.br_blockcount)
  return 0;





 if (VAR_1->fork == VAR_0)
  return 1;
 if (VAR_1->data_seq != FUNC_0(VAR_2->i_df.if_seq))
  return 0;
 if (FUNC_1(VAR_2) &&
     VAR_1->cow_seq != FUNC_0(VAR_2->i_cowfp->if_seq))
  return 0;
 return 1;
}
