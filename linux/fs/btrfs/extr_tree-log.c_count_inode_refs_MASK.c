
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_inode_ref {int dummy; } ;
struct btrfs_inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_inode*) ;
 int FUNC_1 (int ,struct btrfs_inode_ref*) ;
 int FUNC_2 (int ,struct btrfs_key*,scalar_t__) ;
 unsigned long FUNC_3 (int ,scalar_t__) ;
 unsigned long FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct btrfs_root *VAR_1,
   struct btrfs_inode *VAR_2, struct btrfs_path *VAR_3)
{
 int VAR_4;
 struct btrfs_key VAR_5;
 unsigned int VAR_6 = 0;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 u64 VAR_10 = FUNC_0(VAR_2);

 VAR_5.objectid = VAR_10;
 VAR_5.type = VAR_0;
 VAR_5.offset = (u64)-1;

 while (1) {
  VAR_4 = FUNC_6(((void*)0), VAR_1, &VAR_5, VAR_3, 0, 0);
  if (VAR_4 < 0)
   break;
  if (VAR_4 > 0) {
   if (VAR_3->slots[0] == 0)
    break;
   VAR_3->slots[0]--;
  }
process_slot:
  FUNC_2(VAR_3->nodes[0], &VAR_5,
          VAR_3->slots[0]);
  if (VAR_5.objectid != VAR_10 ||
      VAR_5.type != VAR_0)
   break;
  VAR_7 = FUNC_3(VAR_3->nodes[0], VAR_3->slots[0]);
  VAR_8 = VAR_7 + FUNC_4(VAR_3->nodes[0],
         VAR_3->slots[0]);
  while (VAR_7 < VAR_8) {
   struct btrfs_inode_ref *VAR_11;

   VAR_11 = (struct btrfs_inode_ref *)VAR_7;
   VAR_9 = FUNC_1(VAR_3->nodes[0],
           VAR_11);
   VAR_7 = (unsigned long)(VAR_11 + 1) + VAR_9;
   VAR_6++;
  }

  if (VAR_5.offset == 0)
   break;
  if (VAR_3->slots[0] > 0) {
   VAR_3->slots[0]--;
   goto process_slot;
  }
  VAR_5.offset--;
  FUNC_5(VAR_3);
 }
 FUNC_5(VAR_3);

 return VAR_6;
}
