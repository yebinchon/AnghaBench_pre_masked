
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ent16_p; } ;
struct fat_entry {TYPE_2__** bhs; TYPE_1__ u; } ;
typedef int __le16 ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct fat_entry *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 & (2 - 1));
 VAR_0->u.ent16_p = (__le16 *)(VAR_0->bhs[0]->b_data + VAR_1);
}
