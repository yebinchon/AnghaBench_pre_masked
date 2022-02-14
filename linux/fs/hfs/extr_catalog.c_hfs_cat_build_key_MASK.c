
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct hfs_name {int dummy; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_6__ {TYPE_3__ CName; int ParID; scalar_t__ reserved; } ;
struct TYPE_7__ {int key_len; TYPE_1__ cat; } ;
typedef TYPE_2__ btree_key ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,TYPE_3__*,struct qstr const*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

void FUNC_3(struct super_block *VAR_0, btree_key *VAR_1, u32 VAR_2, const struct qstr *VAR_3)
{
 VAR_1->cat.reserved = 0;
 VAR_1->cat.ParID = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, &VAR_1->cat.CName, VAR_3);
  VAR_1->key_len = 6 + VAR_1->cat.CName.len;
 } else {
  FUNC_2(&VAR_1->cat.CName, 0, sizeof(struct hfs_name));
  VAR_1->key_len = 6;
 }
}
