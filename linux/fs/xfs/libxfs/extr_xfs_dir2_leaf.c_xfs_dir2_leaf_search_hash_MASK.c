
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int hashval; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef scalar_t__ xfs_dahash_t ;
struct TYPE_7__ {scalar_t__ hashval; TYPE_2__* dp; } ;
typedef TYPE_3__ xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {int count; } ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_6__ {TYPE_1__* d_ops; } ;
struct TYPE_5__ {int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 struct xfs_dir2_leaf_entry* FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,int *) ;

int
FUNC_3(
 xfs_da_args_t *VAR_0,
 struct xfs_buf *VAR_1)
{
 xfs_dahash_t VAR_2=0;
 xfs_dahash_t VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_dir2_leaf_t *VAR_6;
 xfs_dir2_leaf_entry_t *VAR_7;
 int VAR_8=0;
 struct xfs_dir2_leaf_entry *VAR_9;
 struct xfs_dir3_icleaf_hdr VAR_10;

 VAR_6 = VAR_1->b_addr;
 VAR_9 = VAR_0->dp->d_ops->leaf_ents_p(VAR_6);
 VAR_0->dp->d_ops->leaf_hdr_from_disk(&VAR_10, VAR_6);





 for (VAR_7 = VAR_9, VAR_5 = 0, VAR_4 = VAR_10.count - 1,
  VAR_3 = VAR_0->hashval;
      VAR_5 <= VAR_4; ) {
  VAR_8 = (VAR_5 + VAR_4) >> 1;
  if ((VAR_2 = FUNC_0(VAR_7[VAR_8].hashval)) == VAR_3)
   break;
  if (VAR_2 < VAR_3)
   VAR_5 = VAR_8 + 1;
  else
   VAR_4 = VAR_8 - 1;
 }



 if (VAR_2 == VAR_3) {
  while (VAR_8 > 0 && FUNC_0(VAR_7[VAR_8 - 1].hashval) == VAR_3) {
   VAR_8--;
  }
 }



 else if (VAR_2 < VAR_3)
  VAR_8++;
 return VAR_8;
}
