
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef unsigned long u32 ;
struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; int type; } ;
struct btrfs_inode_ref {int dummy; } ;
struct btrfs_inode_extref {int name; } ;
struct btrfs_inode {int vfs_inode; } ;
struct btrfs_dir_item {int dummy; } ;


 struct btrfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (struct btrfs_inode_extref*) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_key*,void*,char*,int) ;
 scalar_t__ FUNC_4 (void*,char*,int) ;
 int FUNC_5 (struct btrfs_inode*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 void* FUNC_7 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_inode_ref*) ;
 unsigned long FUNC_9 (struct extent_buffer*,int ) ;
 unsigned long FUNC_10 (struct extent_buffer*,int ) ;
 struct btrfs_dir_item* FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,void*,char*,int,int ) ;
 struct btrfs_dir_item* FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,char*,int,int ) ;
 struct btrfs_inode_extref* FUNC_13 (int *,struct btrfs_root*,struct btrfs_path*,char*,int,void*,void*,int ,int ) ;
 int FUNC_14 (struct btrfs_path*) ;
 int FUNC_15 (struct btrfs_trans_handle*) ;
 int FUNC_16 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_17 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_inode*,struct btrfs_inode*,char*,int) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_inode*,struct btrfs_dir_item*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (char*) ;
 char* FUNC_22 (int,int ) ;
 int FUNC_23 (struct extent_buffer*,char*,unsigned long,int) ;
 struct inode* FUNC_24 (struct btrfs_root*,void*) ;

__attribute__((used)) static inline int FUNC_25(struct btrfs_trans_handle *VAR_5,
      struct btrfs_root *VAR_6,
      struct btrfs_path *VAR_7,
      struct btrfs_root *VAR_8,
      struct btrfs_inode *VAR_9,
      struct btrfs_inode *VAR_10,
      u64 VAR_11, u64 VAR_12,
      u64 VAR_13, char *VAR_14, int VAR_15,
      int *VAR_16)
{
 int VAR_17;
 char *VAR_18;
 int VAR_19;
 struct extent_buffer *VAR_20;
 struct btrfs_dir_item *VAR_21;
 struct btrfs_key VAR_22;
 struct btrfs_inode_extref *VAR_23;

again:

 VAR_22.objectid = VAR_11;
 VAR_22.type = VAR_1;
 VAR_22.offset = VAR_12;
 VAR_17 = FUNC_16(((void*)0), VAR_6, &VAR_22, VAR_7, 0, 0);
 if (VAR_17 == 0) {
  struct btrfs_inode_ref *VAR_24;
  unsigned long VAR_25;
  unsigned long VAR_26;

  VAR_20 = VAR_7->nodes[0];




  if (VAR_22.objectid == VAR_22.offset)
   return 1;





  VAR_25 = FUNC_9(VAR_20, VAR_7->slots[0]);
  VAR_26 = VAR_25 + FUNC_10(VAR_20, VAR_7->slots[0]);
  while (VAR_25 < VAR_26) {
   VAR_24 = (struct btrfs_inode_ref *)VAR_25;
   VAR_19 = FUNC_8(VAR_20,
           VAR_24);
   VAR_18 = FUNC_22(VAR_19, VAR_4);
   if (!VAR_18)
    return -VAR_3;

   FUNC_23(VAR_20, VAR_18,
        (unsigned long)(VAR_24 + 1),
        VAR_19);

   if (!FUNC_3(VAR_8, &VAR_22,
         VAR_12,
         VAR_18,
         VAR_19)) {
    FUNC_19(&VAR_10->vfs_inode);
    FUNC_14(VAR_7);

    VAR_17 = FUNC_17(VAR_5, VAR_6, VAR_9, VAR_10,
      VAR_18, VAR_19);
    FUNC_21(VAR_18);
    if (VAR_17)
     return VAR_17;
    VAR_17 = FUNC_15(VAR_5);
    if (VAR_17)
     return VAR_17;
    *VAR_16 = 1;
    goto again;
   }
   FUNC_21(VAR_18);

   VAR_25 = (unsigned long)(VAR_24 + 1) + VAR_19;
  }





  *VAR_16 = 1;
 }
 FUNC_14(VAR_7);


 VAR_23 = FUNC_13(((void*)0), VAR_6, VAR_7, VAR_14, VAR_15,
        VAR_11, VAR_12, 0,
        0);
 if (!FUNC_2(VAR_23)) {
  u32 VAR_27;
  u32 VAR_28 = 0;
  unsigned long VAR_29;
  struct inode *VAR_30;

  VAR_20 = VAR_7->nodes[0];

  VAR_27 = FUNC_10(VAR_20, VAR_7->slots[0]);
  VAR_29 = FUNC_9(VAR_20, VAR_7->slots[0]);

  while (VAR_28 < VAR_27) {
   VAR_23 = (struct btrfs_inode_extref *)(VAR_29 + VAR_28);

   VAR_19 = FUNC_6(VAR_20, VAR_23);

   if (FUNC_7(VAR_20, VAR_23) != VAR_12)
    goto next;

   VAR_18 = FUNC_22(VAR_19, VAR_4);
   if (!VAR_18)
    return -VAR_3;
   FUNC_23(VAR_20, VAR_18, (unsigned long)&VAR_23->name,
        VAR_19);

   VAR_22.objectid = VAR_11;
   VAR_22.type = VAR_0;
   VAR_22.offset = FUNC_4(VAR_12,
             VAR_18,
             VAR_19);
   VAR_17 = 0;
   if (!FUNC_3(VAR_8, &VAR_22,
         VAR_12, VAR_18,
         VAR_19)) {
    VAR_17 = -VAR_2;
    VAR_30 = FUNC_24(VAR_6,
      VAR_12);
    if (VAR_30) {
     FUNC_19(&VAR_10->vfs_inode);
     FUNC_14(VAR_7);

     VAR_17 = FUNC_17(VAR_5, VAR_6,
       FUNC_0(VAR_30),
       VAR_10,
       VAR_18,
       VAR_19);
     if (!VAR_17)
      VAR_17 = FUNC_15(
          VAR_5);
    }
    FUNC_20(VAR_30);
    FUNC_21(VAR_18);
    if (VAR_17)
     return VAR_17;
    *VAR_16 = 1;
    goto again;
   }
   FUNC_21(VAR_18);
next:
   VAR_28 += VAR_19 + sizeof(*VAR_23);
  }
  *VAR_16 = 1;
 }
 FUNC_14(VAR_7);


 VAR_21 = FUNC_11(VAR_5, VAR_6, VAR_7, FUNC_5(VAR_9),
      VAR_13, VAR_14, VAR_15, 0);
 if (VAR_21 && !FUNC_1(VAR_21)) {
  VAR_17 = FUNC_18(VAR_5, VAR_6, VAR_7, VAR_9, VAR_21);
  if (VAR_17)
   return VAR_17;
 }
 FUNC_14(VAR_7);


 VAR_21 = FUNC_12(VAR_5, VAR_6, VAR_7, FUNC_5(VAR_9),
       VAR_14, VAR_15, 0);
 if (VAR_21 && !FUNC_1(VAR_21)) {
  VAR_17 = FUNC_18(VAR_5, VAR_6, VAR_7, VAR_9, VAR_21);
  if (VAR_17)
   return VAR_17;
 }
 FUNC_14(VAR_7);

 return 0;
}
