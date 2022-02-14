
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_iext_node {scalar_t__* keys; } ;



__attribute__((used)) static inline int
FUNC_0(
 struct xfs_iext_node *VAR_0,
 int VAR_1,
 xfs_fileoff_t VAR_2)
{
 if (VAR_0->keys[VAR_1] > VAR_2)
  return 1;
 if (VAR_0->keys[VAR_1] < VAR_2)
  return -1;
 return 0;
}
