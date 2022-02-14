
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int namelen; scalar_t__ nameval; } ;
typedef TYPE_1__ xfs_attr_leaf_name_local_t ;
struct xfs_da_args {size_t index; scalar_t__ hashval; int namelen; int dp; int trans; scalar_t__ rmtvaluelen; scalar_t__ rmtblkno; int name; int geo; int blkno; } ;
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
 scalar_t__ FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_name_remote* FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 TYPE_1__* FUNC_8 (struct xfs_attr_leafblock*,size_t) ;
 struct xfs_attr_leaf_name_remote* FUNC_9 (struct xfs_attr_leafblock*,size_t) ;
 int FUNC_10 (int ,int ,int ,int,struct xfs_buf**) ;
 int FUNC_11 (int ,struct xfs_buf*,int ) ;
 int FUNC_12 (int *,int ) ;

int
FUNC_13(
 struct xfs_da_args *VAR_2)
{
 struct xfs_attr_leafblock *VAR_3;
 struct xfs_attr_leaf_entry *VAR_4;
 struct xfs_attr_leaf_name_remote *VAR_5;
 struct xfs_buf *VAR_6;
 int VAR_7;







 FUNC_5(VAR_2);



 VAR_7 = FUNC_10(VAR_2->trans, VAR_2->dp, VAR_2->blkno, -1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3 = VAR_6->b_addr;
 VAR_4 = &FUNC_6(VAR_3)[VAR_2->index];
 FUNC_0(VAR_4->flags & VAR_0);
 VAR_4->flags &= ~VAR_0;
 FUNC_11(VAR_2->trans, VAR_6,
    FUNC_1(VAR_3, VAR_4, sizeof(*VAR_4)));

 if (VAR_2->rmtblkno) {
  FUNC_0((VAR_4->flags & VAR_1) == 0);
  VAR_5 = FUNC_9(VAR_3, VAR_2->index);
  VAR_5->valueblk = FUNC_3(VAR_2->rmtblkno);
  VAR_5->valuelen = FUNC_3(VAR_2->rmtvaluelen);
  FUNC_11(VAR_2->trans, VAR_6,
    FUNC_1(VAR_3, VAR_5, sizeof(*VAR_5)));
 }




 return FUNC_12(&VAR_2->trans, VAR_2->dp);
}
