
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_getfsmap_dev {int dev; } ;



__attribute__((used)) static int
FUNC_0(
 const void *VAR_0,
 const void *VAR_1)
{
 const struct xfs_getfsmap_dev *VAR_2 = VAR_0;
 const struct xfs_getfsmap_dev *VAR_3 = VAR_1;

 return VAR_2->dev - VAR_3->dev;
}
