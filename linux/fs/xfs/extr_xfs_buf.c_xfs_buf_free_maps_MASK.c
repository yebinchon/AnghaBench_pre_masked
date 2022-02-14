
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int * b_maps; int __b_map; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_buf *VAR_0)
{
 if (VAR_0->b_maps != &VAR_0->__b_map) {
  FUNC_0(VAR_0->b_maps);
  VAR_0->b_maps = ((void*)0);
 }
}
