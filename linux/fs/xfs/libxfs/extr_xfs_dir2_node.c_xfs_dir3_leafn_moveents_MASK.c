
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {int count; int stale; } ;
struct xfs_dir2_leaf_entry {scalar_t__ address; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_dir2_leaf_entry*,struct xfs_dir2_leaf_entry*,int) ;
 int FUNC_2 (struct xfs_dir2_leaf_entry*,struct xfs_dir2_leaf_entry*,int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,struct xfs_buf*,int,int) ;

__attribute__((used)) static void
FUNC_5(
 xfs_da_args_t *VAR_1,
 struct xfs_buf *VAR_2,
 struct xfs_dir3_icleaf_hdr *VAR_3,
 struct xfs_dir2_leaf_entry *VAR_4,
 int VAR_5,
 struct xfs_buf *VAR_6,
 struct xfs_dir3_icleaf_hdr *VAR_7,
 struct xfs_dir2_leaf_entry *VAR_8,
 int VAR_9,
 int VAR_10)
{
 int VAR_11;

 FUNC_3(VAR_1, VAR_5, VAR_9, VAR_10);




 if (VAR_10 == 0)
  return;






 if (VAR_9 < VAR_7->count) {
  FUNC_2(&VAR_8[VAR_9 + VAR_10], &VAR_8[VAR_9],
   (VAR_7->count - VAR_9) * sizeof(xfs_dir2_leaf_entry_t));
  FUNC_4(VAR_1, VAR_6, VAR_9 + VAR_10,
           VAR_10 + VAR_7->count - 1);
 }




 if (VAR_3->stale) {
  int VAR_12;

  for (VAR_12 = VAR_5, VAR_11 = 0; VAR_12 < VAR_5 + VAR_10; VAR_12++) {
   if (VAR_4[VAR_12].address ==
     FUNC_0(VAR_0))
    VAR_11++;
  }
 } else
  VAR_11 = 0;



 FUNC_1(&VAR_8[VAR_9], &VAR_4[VAR_5],
  VAR_10 * sizeof(xfs_dir2_leaf_entry_t));
 FUNC_4(VAR_1, VAR_6, VAR_9, VAR_9 + VAR_10 - 1);





 if (VAR_5 + VAR_10 < VAR_3->count) {
  FUNC_2(&VAR_4[VAR_5], &VAR_4[VAR_5 + VAR_10],
   VAR_10 * sizeof(xfs_dir2_leaf_entry_t));
  FUNC_4(VAR_1, VAR_2, VAR_5, VAR_5 + VAR_10 - 1);
 }




 VAR_3->count -= VAR_10;
 VAR_3->stale -= VAR_11;
 VAR_7->count += VAR_10;
 VAR_7->stale += VAR_11;
}
