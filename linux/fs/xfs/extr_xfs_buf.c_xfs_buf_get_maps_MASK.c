
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf_map {int dummy; } ;
struct xfs_buf {int b_map_count; int * b_maps; int __b_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_buf *VAR_2,
 int VAR_3)
{
 FUNC_0(VAR_2->b_maps == ((void*)0));
 VAR_2->b_map_count = VAR_3;

 if (VAR_3 == 1) {
  VAR_2->b_maps = &VAR_2->__b_map;
  return 0;
 }

 VAR_2->b_maps = FUNC_1(VAR_3 * sizeof(struct xfs_buf_map),
    VAR_1);
 if (!VAR_2->b_maps)
  return -VAR_0;
 return 0;
}
