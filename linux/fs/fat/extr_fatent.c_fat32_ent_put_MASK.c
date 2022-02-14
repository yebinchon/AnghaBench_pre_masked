
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ent32_p; } ;
struct fat_entry {int fat_inode; int * bhs; TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fat_entry *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 & 0xf0000000);
 VAR_1 |= FUNC_2(*VAR_0->u.ent32_p) & ~0x0fffffff;
 *VAR_0->u.ent32_p = FUNC_1(VAR_1);
 FUNC_3(VAR_0->bhs[0], VAR_0->fat_inode);
}
