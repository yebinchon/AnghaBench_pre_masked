
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir3_icleaf_hdr {int stale; int count; } ;
struct xfs_dir2_leaf_entry {scalar_t__ address; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int,int*,int*) ;

void
FUNC_3(
 struct xfs_dir3_icleaf_hdr *VAR_1,
 struct xfs_dir2_leaf_entry *VAR_2,
 int *VAR_3,
 int *VAR_4,
 int *VAR_5,
 int *VAR_6,
 int *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13=0;
 int VAR_14;

 FUNC_0(VAR_1->stale > 1);
 VAR_10 = *VAR_3;

 FUNC_2(VAR_1, VAR_2, VAR_10, &VAR_12, &VAR_9);




 if (VAR_12 >= 0 &&
     (VAR_9 == VAR_1->count ||
      VAR_10 - VAR_12 <= VAR_9 - VAR_10))
  VAR_11 = VAR_12;
 else
  VAR_11 = VAR_9;




 for (VAR_8 = VAR_14 = 0; VAR_8 < VAR_1->count; VAR_8++) {



  if (VAR_10 == VAR_8)
   VAR_13 = VAR_14;
  if (VAR_8 != VAR_11 &&
      VAR_2[VAR_8].address == FUNC_1(VAR_0)) {
   if (VAR_8 == VAR_14)
    *VAR_6 = VAR_14;
   continue;
  }



  if (VAR_8 == VAR_11)
   VAR_12 = VAR_9 = VAR_14;



  if (VAR_8 > VAR_14)
   VAR_2[VAR_14] = VAR_2[VAR_8];
  VAR_14++;
 }
 FUNC_0(VAR_8 > VAR_14);




 if (VAR_10 == VAR_8)
  VAR_13 = VAR_14;
 *VAR_3 = VAR_13;



 VAR_1->count -= VAR_8 - VAR_14;
 VAR_1->stale = 1;




 if (VAR_12 >= VAR_13)
  VAR_12 = -1;
 else
  VAR_9 = VAR_1->count;
 *VAR_7 = VAR_1->count - 1;
 *VAR_4 = VAR_12;
 *VAR_5 = VAR_9;
}
