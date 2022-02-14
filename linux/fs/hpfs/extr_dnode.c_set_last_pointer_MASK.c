
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct hpfs_dirent {int down; int length; } ;
struct dnode {int first_free; int self; } ;
typedef scalar_t__ dnode_secno ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct super_block*,char*,int,...) ;
 TYPE_1__* FUNC_5 (struct super_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0, struct dnode *VAR_1, dnode_secno VAR_2)
{
 struct hpfs_dirent *VAR_3;
 if (!(VAR_3 = FUNC_3(VAR_1))) {
  FUNC_4(VAR_0, "set_last_pointer: empty dnode %08x", FUNC_8(VAR_1->self));
  return;
 }
 if (FUNC_5(VAR_0)->sb_chk) {
  if (VAR_3->down) {
   FUNC_4(VAR_0, "set_last_pointer: dnode %08x has already last pointer %08x",
    FUNC_8(VAR_1->self), FUNC_2(VAR_3));
   return;
  }
  if (FUNC_6(VAR_3->length) != 32) {
   FUNC_4(VAR_0, "set_last_pointer: bad last dirent in dnode %08x", FUNC_8(VAR_1->self));
   return;
  }
 }
 if (VAR_2) {
  FUNC_7(&VAR_1->first_free, 4);
  if (FUNC_8(VAR_1->first_free) > 2048) {
   FUNC_4(VAR_0, "set_last_pointer: too long dnode %08x", FUNC_8(VAR_1->self));
   FUNC_7(&VAR_1->first_free, -4);
   return;
  }
  VAR_3->length = FUNC_0(36);
  VAR_3->down = 1;
  *(__le32 *)((char *)VAR_3 + 32) = FUNC_1(VAR_2);
 }
}
