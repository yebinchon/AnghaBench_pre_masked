
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cramfs_inode {int offset; int mode; int size; } ;




 int VAR_0 ;


__attribute__((used)) static unsigned long FUNC_0(const struct cramfs_inode *VAR_1, unsigned int VAR_2)
{
 if (!VAR_1->offset)
  return VAR_2 + 1;
 if (!VAR_1->size)
  return VAR_2 + 1;






 switch (VAR_1->mode & VAR_0) {
 case 128:
 case 130:
 case 129:
  return VAR_1->offset << 2;
 default:
  break;
 }
 return VAR_2 + 1;
}
