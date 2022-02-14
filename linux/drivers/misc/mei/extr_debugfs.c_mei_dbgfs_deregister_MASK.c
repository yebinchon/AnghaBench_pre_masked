
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int * dbgfs_dir; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mei_device *VAR_0)
{
 if (!VAR_0->dbgfs_dir)
  return;
 FUNC_0(VAR_0->dbgfs_dir);
 VAR_0->dbgfs_dir = ((void*)0);
}
