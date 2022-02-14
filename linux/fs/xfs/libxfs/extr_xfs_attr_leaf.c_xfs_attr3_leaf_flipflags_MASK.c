
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int namelen; scalar_t__ nameval; } ;
typedef TYPE_1__ xfs_attr_leaf_name_local_t ;
struct xfs_da_args {scalar_t__ blkno; scalar_t__ blkno2; size_t index; size_t index2; int dp; int trans; scalar_t__ rmtvaluelen; scalar_t__ rmtblkno; int geo; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_name_remote {int flags; int namelen; void* valuelen; void* valueblk; int hashval; scalar_t__ name; } ;
struct xfs_attr_leaf_entry {int flags; int namelen; void* valuelen; void* valueblk; int hashval; scalar_t__ name; } ;
struct xfs_attr3_icleaf_hdr {size_t count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_attr_leafblock*,struct xfs_attr_leaf_name_remote*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_name_remote* FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 TYPE_1__* FUNC_8 (struct xfs_attr_leafblock*,size_t) ;
 struct xfs_attr_leaf_name_remote* FUNC_9 (struct xfs_attr_leafblock*,size_t) ;
 int FUNC_10 (int ,int ,scalar_t__,int,struct xfs_buf**) ;
 int FUNC_11 (int ,struct xfs_buf*,int ) ;
 int FUNC_12 (int *,int ) ;

int
FUNC_13(
 struct xfs_da_args *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3;
 struct xfs_attr_leafblock *VAR_4;
 struct xfs_attr_leaf_entry *VAR_5;
 struct xfs_attr_leaf_entry *VAR_6;
 struct xfs_attr_leaf_name_remote *VAR_7;
 struct xfs_buf *VAR_8;
 struct xfs_buf *VAR_9;
 int VAR_10;
 FUNC_5(VAR_2);




 VAR_10 = FUNC_10(VAR_2->trans, VAR_2->dp, VAR_2->blkno, -1, &VAR_8);
 if (VAR_10)
  return VAR_10;




 if (VAR_2->blkno2 != VAR_2->blkno) {
  VAR_10 = FUNC_10(VAR_2->trans, VAR_2->dp, VAR_2->blkno2,
        -1, &VAR_9);
  if (VAR_10)
   return VAR_10;
 } else {
  VAR_9 = VAR_8;
 }

 VAR_3 = VAR_8->b_addr;
 VAR_5 = &FUNC_6(VAR_3)[VAR_2->index];

 VAR_4 = VAR_9->b_addr;
 VAR_6 = &FUNC_6(VAR_4)[VAR_2->index2];
 FUNC_0(VAR_5->flags & VAR_0);
 FUNC_0((VAR_6->flags & VAR_0) == 0);

 VAR_5->flags &= ~VAR_0;
 FUNC_11(VAR_2->trans, VAR_8,
     FUNC_1(VAR_3, VAR_5, sizeof(*VAR_5)));
 if (VAR_2->rmtblkno) {
  FUNC_0((VAR_5->flags & VAR_1) == 0);
  VAR_7 = FUNC_9(VAR_3, VAR_2->index);
  VAR_7->valueblk = FUNC_3(VAR_2->rmtblkno);
  VAR_7->valuelen = FUNC_3(VAR_2->rmtvaluelen);
  FUNC_11(VAR_2->trans, VAR_8,
    FUNC_1(VAR_3, VAR_7, sizeof(*VAR_7)));
 }

 VAR_6->flags |= VAR_0;
 FUNC_11(VAR_2->trans, VAR_9,
     FUNC_1(VAR_4, VAR_6, sizeof(*VAR_6)));
 if ((VAR_6->flags & VAR_1) == 0) {
  VAR_7 = FUNC_9(VAR_4, VAR_2->index2);
  VAR_7->valueblk = 0;
  VAR_7->valuelen = 0;
  FUNC_11(VAR_2->trans, VAR_9,
    FUNC_1(VAR_4, VAR_7, sizeof(*VAR_7)));
 }




 VAR_10 = FUNC_12(&VAR_2->trans, VAR_2->dp);

 return VAR_10;
}
