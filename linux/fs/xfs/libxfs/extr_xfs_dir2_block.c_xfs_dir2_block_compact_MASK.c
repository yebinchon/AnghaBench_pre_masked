
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dir2_data_aoff_t ;
struct xfs_dir2_leaf_entry {scalar_t__ address; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_dir2_block_tail {scalar_t__ stale; scalar_t__ count; } ;
struct xfs_da_args {int dp; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,struct xfs_dir2_data_hdr*,int*) ;
 int FUNC_4 (struct xfs_da_args*,struct xfs_buf*,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_da_args *VAR_1,
 struct xfs_buf *VAR_2,
 struct xfs_dir2_data_hdr *VAR_3,
 struct xfs_dir2_block_tail *VAR_4,
 struct xfs_dir2_leaf_entry *VAR_5,
 int *VAR_6,
 int *VAR_7,
 int *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = VAR_10 = FUNC_1(VAR_4->count) - 1;
 VAR_12 = *VAR_7 = -1;
 for (; VAR_9 >= 0; VAR_9--) {
  if (VAR_5[VAR_9].address == FUNC_2(VAR_0)) {
   if (VAR_12 == -1)
    VAR_12 = VAR_10;
   else {
    if (*VAR_7 == -1)
     *VAR_7 = VAR_10;
    continue;
   }
  }
  if (VAR_9 < VAR_10)
   VAR_5[VAR_10] = VAR_5[VAR_9];
  VAR_10--;
 }
 *VAR_8 = VAR_10 + 1 - (FUNC_1(VAR_4->stale) - 1);
 *VAR_7 -= FUNC_1(VAR_4->stale) - 1;
 FUNC_0(&VAR_4->count, -(FUNC_1(VAR_4->stale) - 1));
 FUNC_4(VAR_1, VAR_2,
  (xfs_dir2_data_aoff_t)((char *)VAR_5 - (char *)VAR_3),
  (xfs_dir2_data_aoff_t)((FUNC_1(VAR_4->stale) - 1) * sizeof(*VAR_5)),
  VAR_6, &VAR_11);
 VAR_4->stale = FUNC_2(1);




 if (VAR_11)
  FUNC_3(VAR_1->dp, VAR_3, VAR_6);
}
