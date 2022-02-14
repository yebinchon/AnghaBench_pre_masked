
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_attr_leafblock {int dummy; } ;
typedef struct xfs_attr_leafblock xfs_attr_leafblock_t ;
struct TYPE_5__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_2__ i_d; TYPE_1__* i_mount; } ;
struct xfs_da_args {size_t namelen; int flags; int hashval; int valuelen; int * value; int * name; int op_flags; int trans; int whichfork; int total; struct xfs_inode* dp; TYPE_3__* geo; } ;
struct xfs_buf {char* b_addr; } ;
struct xfs_attr_leaf_name_local {size_t namelen; int valuelen; int * nameval; } ;
struct xfs_attr_leaf_entry {int flags; int hashval; int nameidx; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;
typedef int nargs ;
struct TYPE_6__ {int blksize; } ;
struct TYPE_4__ {int m_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_entry* FUNC_9 (struct xfs_attr_leafblock*) ;
 int FUNC_10 (TYPE_3__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 struct xfs_attr_leaf_name_local* FUNC_11 (struct xfs_attr_leafblock*,int) ;
 int FUNC_12 (struct xfs_inode*,int ) ;
 int FUNC_13 (struct xfs_da_args*,int) ;
 int FUNC_14 (struct xfs_da_args*) ;
 int FUNC_15 (struct xfs_da_args*,int ,struct xfs_buf*) ;

int
FUNC_16(
 struct xfs_buf *VAR_7,
 struct xfs_da_args *VAR_8,
 int VAR_9)
{
 struct xfs_attr_leafblock *VAR_10;
 struct xfs_attr3_icleaf_hdr VAR_11;
 struct xfs_attr_leaf_entry *VAR_12;
 struct xfs_attr_leaf_name_local *VAR_13;
 struct xfs_da_args VAR_14;
 struct xfs_inode *VAR_15 = VAR_8->dp;
 char *VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_8(VAR_8);

 VAR_16 = FUNC_4(VAR_8->geo->blksize, 0);
 if (!VAR_16)
  return -VAR_0;

 FUNC_6(VAR_16, VAR_7->b_addr, VAR_8->geo->blksize);

 VAR_10 = (xfs_attr_leafblock_t *)VAR_16;
 FUNC_10(VAR_8->geo, &VAR_11, VAR_10);
 VAR_12 = FUNC_9(VAR_10);


 FUNC_7(VAR_7->b_addr, 0, VAR_8->geo->blksize);




 VAR_17 = FUNC_15(VAR_8, 0, VAR_7);
 if (VAR_17)
  goto out;

 if (VAR_9 == -1) {
  FUNC_0(VAR_15->i_mount->m_flags & VAR_6);
  FUNC_0(VAR_15->i_d.di_format != VAR_5);
  FUNC_12(VAR_15, VAR_8->trans);
  goto out;
 }

 FUNC_14(VAR_8);




 FUNC_7((char *)&VAR_14, 0, sizeof(VAR_14));
 VAR_14.geo = VAR_8->geo;
 VAR_14.dp = VAR_15;
 VAR_14.total = VAR_8->total;
 VAR_14.whichfork = VAR_1;
 VAR_14.trans = VAR_8->trans;
 VAR_14.op_flags = VAR_4;

 for (VAR_18 = 0; VAR_18 < VAR_11.count; VAR_12++, VAR_18++) {
  if (VAR_12->flags & VAR_2)
   continue;
  if (!VAR_12->nameidx)
   continue;
  FUNC_0(VAR_12->flags & VAR_3);
  VAR_13 = FUNC_11(VAR_10, VAR_18);
  VAR_14.name = VAR_13->nameval;
  VAR_14.namelen = VAR_13->namelen;
  VAR_14.value = &VAR_13->nameval[VAR_14.namelen];
  VAR_14.valuelen = FUNC_2(VAR_13->valuelen);
  VAR_14.hashval = FUNC_3(VAR_12->hashval);
  VAR_14.flags = FUNC_1(VAR_12->flags);
  FUNC_13(&VAR_14, VAR_9);
 }
 VAR_17 = 0;

out:
 FUNC_5(VAR_16);
 return VAR_17;
}
