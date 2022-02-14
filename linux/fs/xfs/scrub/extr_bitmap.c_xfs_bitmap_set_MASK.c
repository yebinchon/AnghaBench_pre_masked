
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct xfs_bitmap_range {int list; void* len; void* start; } ;
struct xfs_bitmap {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct xfs_bitmap_range* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(
 struct xfs_bitmap *VAR_2,
 uint64_t VAR_3,
 uint64_t VAR_4)
{
 struct xfs_bitmap_range *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct xfs_bitmap_range), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->list);
 VAR_5->start = VAR_3;
 VAR_5->len = VAR_4;
 FUNC_2(&VAR_5->list, &VAR_2->list);

 return 0;
}
