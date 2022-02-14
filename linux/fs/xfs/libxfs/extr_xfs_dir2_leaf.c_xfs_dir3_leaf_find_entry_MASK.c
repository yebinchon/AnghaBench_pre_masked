
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_leaf_entry {scalar_t__ address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
struct xfs_dir3_icleaf_hdr {int count; int stale; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct xfs_dir2_leaf_entry*,struct xfs_dir2_leaf_entry*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int,int*,int*) ;

struct xfs_dir2_leaf_entry *
FUNC_6(
 struct xfs_dir3_icleaf_hdr *VAR_1,
 struct xfs_dir2_leaf_entry *VAR_2,
 int VAR_3,
 int VAR_4,
 int VAR_5,
 int VAR_6,
 int *VAR_7,
 int *VAR_8)
{
 if (!VAR_1->stale) {
  xfs_dir2_leaf_entry_t *VAR_9;






  VAR_9 = &VAR_2[VAR_3];
  if (VAR_3 < VAR_1->count)
   FUNC_3(VAR_9 + 1, VAR_9,
    (VAR_1->count - VAR_3) * sizeof(*VAR_9));




  *VAR_7 = VAR_3;
  *VAR_8 = VAR_1->count++;
  return VAR_9;
 }
 if (VAR_4 == 0)
  FUNC_5(VAR_1, VAR_2, VAR_3,
      &VAR_5, &VAR_6);




 if (VAR_5 >= 0 &&
     (VAR_6 == VAR_1->count ||
      VAR_3 - VAR_5 - 1 < VAR_6 - VAR_3)) {
  FUNC_0(VAR_3 - VAR_5 - 1 >= 0);
  FUNC_0(VAR_2[VAR_5].address ==
         FUNC_1(VAR_0));





  if (VAR_3 - VAR_5 - 1 > 0) {
   FUNC_3(&VAR_2[VAR_5], &VAR_2[VAR_5 + 1],
    (VAR_3 - VAR_5 - 1) *
     sizeof(xfs_dir2_leaf_entry_t));
  }
  *VAR_7 = FUNC_4(VAR_5, *VAR_7);
  *VAR_8 = FUNC_2(VAR_3 - 1, *VAR_8);
  VAR_1->stale--;
  return &VAR_2[VAR_3 - 1];
 }




 FUNC_0(VAR_6 - VAR_3 >= 0);
 FUNC_0(VAR_2[VAR_6].address == FUNC_1(VAR_0));





 if (VAR_6 - VAR_3 > 0) {
  FUNC_3(&VAR_2[VAR_3 + 1], &VAR_2[VAR_3],
   (VAR_6 - VAR_3) * sizeof(xfs_dir2_leaf_entry_t));
 }
 *VAR_7 = FUNC_4(VAR_3, *VAR_7);
 *VAR_8 = FUNC_2(VAR_6, *VAR_8);
 VAR_1->stale--;
 return &VAR_2[VAR_3];
}
