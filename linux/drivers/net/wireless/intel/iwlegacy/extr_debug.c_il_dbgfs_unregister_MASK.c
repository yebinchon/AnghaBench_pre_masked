
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int * debugfs_dir; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct il_priv *VAR_0)
{
 if (!VAR_0->debugfs_dir)
  return;

 FUNC_0(VAR_0->debugfs_dir);
 VAR_0->debugfs_dir = ((void*)0);
}
