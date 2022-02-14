
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_arg {scalar_t__ size; } ;



unsigned int FUNC_0(unsigned int VAR_0, struct fuse_arg *VAR_1)
{
 unsigned VAR_2 = 0;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2 += VAR_1[VAR_3].size;

 return VAR_2;
}
