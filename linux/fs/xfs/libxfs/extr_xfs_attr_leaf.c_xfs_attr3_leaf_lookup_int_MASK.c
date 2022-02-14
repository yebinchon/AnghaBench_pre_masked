
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_dahash_t ;
struct xfs_da_args {scalar_t__ hashval; int index; int flags; scalar_t__ namelen; scalar_t__ rmtvaluelen; TYPE_1__* dp; int rmtblkcnt; scalar_t__ rmtblkno; int name; TYPE_2__* geo; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_name_remote {scalar_t__ namelen; int valueblk; int valuelen; int name; } ;
struct xfs_attr_leaf_name_local {scalar_t__ namelen; int nameval; } ;
struct xfs_attr_leaf_entry {int flags; int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;
struct TYPE_4__ {int blksize; } ;
struct TYPE_3__ {int i_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct xfs_da_args*) ;
 struct xfs_attr_leaf_entry* FUNC_3 (struct xfs_attr_leafblock*) ;
 int FUNC_4 (TYPE_2__*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 struct xfs_attr_leaf_name_local* FUNC_5 (struct xfs_attr_leafblock*,int) ;
 struct xfs_attr_leaf_name_remote* FUNC_6 (struct xfs_attr_leafblock*,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int,int) ;

int
FUNC_9(
 struct xfs_buf *VAR_5,
 struct xfs_da_args *VAR_6)
{
 struct xfs_attr_leafblock *VAR_7;
 struct xfs_attr3_icleaf_hdr VAR_8;
 struct xfs_attr_leaf_entry *VAR_9;
 struct xfs_attr_leaf_entry *VAR_10;
 struct xfs_attr_leaf_name_local *VAR_11;
 struct xfs_attr_leaf_name_remote *VAR_12;
 xfs_dahash_t VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_2(VAR_6);

 VAR_7 = VAR_5->b_addr;
 FUNC_4(VAR_6->geo, &VAR_8, VAR_7);
 VAR_10 = FUNC_3(VAR_7);
 if (VAR_8.count >= VAR_6->geo->blksize / 8)
  return -VAR_1;




 VAR_13 = VAR_6->hashval;
 VAR_14 = VAR_15 = VAR_8.count / 2;
 for (VAR_9 = &VAR_10[VAR_14]; VAR_15 > 4; VAR_9 = &VAR_10[VAR_14]) {
  VAR_15 /= 2;
  if (FUNC_0(VAR_9->hashval) < VAR_13)
   VAR_14 += VAR_15;
  else if (FUNC_0(VAR_9->hashval) > VAR_13)
   VAR_14 -= VAR_15;
  else
   break;
 }
 if (!(VAR_14 >= 0 && (!VAR_8.count || VAR_14 < VAR_8.count)))
  return -VAR_1;
 if (!(VAR_15 <= 4 || FUNC_0(VAR_9->hashval) == VAR_13))
  return -VAR_1;





 while (VAR_14 > 0 && FUNC_0(VAR_9->hashval) >= VAR_13) {
  VAR_9--;
  VAR_14--;
 }
 while (VAR_14 < VAR_8.count &&
        FUNC_0(VAR_9->hashval) < VAR_13) {
  VAR_9++;
  VAR_14++;
 }
 if (VAR_14 == VAR_8.count || FUNC_0(VAR_9->hashval) != VAR_13) {
  VAR_6->index = VAR_14;
  return -VAR_2;
 }




 for (; VAR_14 < VAR_8.count && (FUNC_0(VAR_9->hashval) == VAR_13);
   VAR_9++, VAR_14++) {







  if ((VAR_6->flags & VAR_3) !=
      (VAR_9->flags & VAR_3)) {
   continue;
  }
  if (VAR_9->flags & VAR_4) {
   VAR_11 = FUNC_5(VAR_7, VAR_14);
   if (VAR_11->namelen != VAR_6->namelen)
    continue;
   if (FUNC_1(VAR_6->name, VAR_11->nameval,
       VAR_6->namelen) != 0)
    continue;
   if (!FUNC_8(VAR_6->flags, VAR_9->flags))
    continue;
   VAR_6->index = VAR_14;
   return -VAR_0;
  } else {
   VAR_12 = FUNC_6(VAR_7, VAR_14);
   if (VAR_12->namelen != VAR_6->namelen)
    continue;
   if (FUNC_1(VAR_6->name, VAR_12->name,
       VAR_6->namelen) != 0)
    continue;
   if (!FUNC_8(VAR_6->flags, VAR_9->flags))
    continue;
   VAR_6->index = VAR_14;
   VAR_6->rmtvaluelen = FUNC_0(VAR_12->valuelen);
   VAR_6->rmtblkno = FUNC_0(VAR_12->valueblk);
   VAR_6->rmtblkcnt = FUNC_7(
       VAR_6->dp->i_mount,
       VAR_6->rmtvaluelen);
   return -VAR_0;
  }
 }
 VAR_6->index = VAR_14;
 return -VAR_2;
}
