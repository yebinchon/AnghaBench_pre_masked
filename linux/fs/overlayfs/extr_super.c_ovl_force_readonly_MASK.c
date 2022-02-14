
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fs {int workdir; int upper_mnt; } ;



__attribute__((used)) static bool FUNC_0(struct ovl_fs *VAR_0)
{
 return (!VAR_0->upper_mnt || !VAR_0->workdir);
}
