
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {struct mount* mnt_parent; } ;



__attribute__((used)) static inline int FUNC_0(struct mount *VAR_0)
{
 return VAR_0 != VAR_0->mnt_parent;
}
