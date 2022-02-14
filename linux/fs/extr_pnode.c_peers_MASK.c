
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {scalar_t__ mnt_group_id; } ;



__attribute__((used)) static inline bool FUNC_0(struct mount *VAR_0, struct mount *VAR_1)
{
 return VAR_0->mnt_group_id == VAR_1->mnt_group_id && VAR_0->mnt_group_id;
}
