
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent32_p; } ;
struct fat_entry {int * fat_inode; int ** bhs; TYPE_1__ u; scalar_t__ entry; scalar_t__ nr_bhs; } ;



__attribute__((used)) static inline void FUNC_0(struct fat_entry *VAR_0)
{
 VAR_0->nr_bhs = 0;
 VAR_0->entry = 0;
 VAR_0->u.ent32_p = ((void*)0);
 VAR_0->bhs[0] = VAR_0->bhs[1] = ((void*)0);
 VAR_0->fat_inode = ((void*)0);
}
