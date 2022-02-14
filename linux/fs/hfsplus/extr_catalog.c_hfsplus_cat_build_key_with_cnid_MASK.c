
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_1__ name; int parent; } ;
struct TYPE_7__ {int key_len; TYPE_2__ cat; } ;
typedef TYPE_3__ hfsplus_btree_key ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct super_block *VAR_0,
   hfsplus_btree_key *VAR_1, u32 VAR_2)
{
 VAR_1->cat.parent = FUNC_1(VAR_2);
 VAR_1->cat.name.length = 0;
 VAR_1->key_len = FUNC_0(6);
}
