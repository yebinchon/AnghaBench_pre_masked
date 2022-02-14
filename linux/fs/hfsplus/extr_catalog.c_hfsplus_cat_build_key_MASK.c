
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int len; int name; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_5__ {TYPE_4__ name; int parent; } ;
struct TYPE_6__ {int key_len; TYPE_1__ cat; } ;
typedef TYPE_2__ hfsplus_btree_key ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct super_block *VAR_1,
  hfsplus_btree_key *VAR_2, u32 VAR_3, const struct qstr *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_2->cat.parent = FUNC_2(VAR_3);
 VAR_6 = FUNC_3(VAR_1, &VAR_2->cat.name, VAR_0,
   VAR_4->name, VAR_4->len);
 if (FUNC_4(VAR_6 < 0))
  return VAR_6;

 VAR_5 = FUNC_0(VAR_2->cat.name.length);
 VAR_2->key_len = FUNC_1(6 + 2 * VAR_5);
 return 0;
}
