
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int mutex; scalar_t__ files; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct pipe_inode_info *VAR_0)
{
 if (VAR_0->files)
  FUNC_0(&VAR_0->mutex);
}
