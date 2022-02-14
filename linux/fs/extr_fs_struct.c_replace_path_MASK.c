
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {scalar_t__ dentry; scalar_t__ mnt; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct path *VAR_0, const struct path *VAR_1, const struct path *VAR_2)
{
 if (FUNC_0(VAR_0->dentry != VAR_1->dentry || VAR_0->mnt != VAR_1->mnt))
  return 0;
 *VAR_0 = *VAR_2;
 return 1;
}
