
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
struct TYPE_2__ {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
struct xfs_writepage_ctx {scalar_t__ fork; int data_seq; int cow_seq; TYPE_1__ imap; } ;
struct xfs_inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_inode*,scalar_t__,scalar_t__,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_1(
 struct xfs_writepage_ctx *VAR_1,
 struct xfs_inode *VAR_2,
 xfs_fileoff_t VAR_3)
{
 int VAR_4;







 do {
  VAR_4 = FUNC_0(VAR_2, VAR_1->fork, VAR_3,
    &VAR_1->imap, VAR_1->fork == VAR_0 ?
     &VAR_1->cow_seq : &VAR_1->data_seq);
  if (VAR_4)
   return VAR_4;
 } while (VAR_1->imap.br_startoff + VAR_1->imap.br_blockcount <= VAR_3);

 return 0;
}
