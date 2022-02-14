
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fileoff_t ;
struct xfs_iext_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xfs_iext_node*,int,int ) ;

__attribute__((used)) static int
FUNC_1(
 struct xfs_iext_node *VAR_1,
 xfs_fileoff_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_3, VAR_2) > 0)
   return VAR_3;
 }

 return VAR_0;
}
