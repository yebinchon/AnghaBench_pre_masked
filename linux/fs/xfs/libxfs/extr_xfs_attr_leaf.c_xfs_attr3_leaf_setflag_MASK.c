
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_da_args {size_t index; int dp; int trans; int geo; int blkno; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_name_remote {int flags; scalar_t__ valuelen; scalar_t__ valueblk; } ;
struct xfs_attr_leaf_entry {int flags; scalar_t__ valuelen; scalar_t__ valueblk; } ;
struct xfs_attr3_icleaf_hdr {size_t count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_attr_leafblock*,struct xfs_attr_leaf_name_remote*,int) ;
 int FUNC_2 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_name_remote* FUNC_3 (struct xfs_attr_leafblock*) ;
 int FUNC_4 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 struct xfs_attr_leaf_name_remote* FUNC_5 (struct xfs_attr_leafblock*,size_t) ;
 int FUNC_6 (int ,int ,int ,int,struct xfs_buf**) ;
 int FUNC_7 (int ,struct xfs_buf*,int ) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(
 struct xfs_da_args *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3;
 struct xfs_attr_leaf_entry *VAR_4;
 struct xfs_attr_leaf_name_remote *VAR_5;
 struct xfs_buf *VAR_6;
 int VAR_7;




 FUNC_2(VAR_2);




 VAR_7 = FUNC_6(VAR_2->trans, VAR_2->dp, VAR_2->blkno, -1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3 = VAR_6->b_addr;





 VAR_4 = &FUNC_3(VAR_3)[VAR_2->index];

 FUNC_0((VAR_4->flags & VAR_0) == 0);
 VAR_4->flags |= VAR_0;
 FUNC_7(VAR_2->trans, VAR_6,
   FUNC_1(VAR_3, VAR_4, sizeof(*VAR_4)));
 if ((VAR_4->flags & VAR_1) == 0) {
  VAR_5 = FUNC_5(VAR_3, VAR_2->index);
  VAR_5->valueblk = 0;
  VAR_5->valuelen = 0;
  FUNC_7(VAR_2->trans, VAR_6,
    FUNC_1(VAR_3, VAR_5, sizeof(*VAR_5)));
 }




 return FUNC_8(&VAR_2->trans, VAR_2->dp);
}
