
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_decompressor {int id; } ;


 struct squashfs_decompressor const** VAR_0 ;

const struct squashfs_decompressor *FUNC_0(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]->id; VAR_2++)
  if (VAR_1 == VAR_0[VAR_2]->id)
   break;

 return VAR_0[VAR_2];
}
