
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_getfsmap_dev {int gfd_dev; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ext4_getfsmap_dev *VAR_2 = VAR_0;
 const struct ext4_getfsmap_dev *VAR_3 = VAR_1;

 return VAR_2->gfd_dev - VAR_3->gfd_dev;
}
