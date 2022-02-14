
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct metapage {scalar_t__ data; } ;
struct jfs_inode_info {int next_index; struct dir_table_slot* i_dirtable; } ;
struct inode {int i_sb; } ;
struct dir_table_slot {int dummy; } ;
typedef int s64 ;
struct TYPE_2__ {int l2nbperpage; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 struct metapage* FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct metapage*) ;

__attribute__((used)) static struct dir_table_slot *FUNC_7(struct inode *VAR_2, u32 VAR_3,
      struct metapage ** VAR_4, s64 *VAR_5)
{
 struct jfs_inode_info *VAR_6 = FUNC_0(VAR_2);
 s64 VAR_7;
 s64 VAR_8;
 int VAR_9;
 struct dir_table_slot *VAR_10;
 static int VAR_11 = 10;

 if (VAR_3 < 2) {
  if (VAR_11) {
   FUNC_4("find_entry called with index = %d", VAR_3);
   VAR_11--;
  }
  return ((void*)0);
 }

 if (VAR_3 >= VAR_6->next_index) {
  FUNC_4("find_entry called with index >= next_index");
  return ((void*)0);
 }

 if (FUNC_2(VAR_2)) {



  *VAR_4 = ((void*)0);
  VAR_10 = &VAR_6->i_dirtable[VAR_3 - 2];
 } else {
  VAR_8 = (VAR_3 - 2) * sizeof(struct dir_table_slot);
  VAR_9 = VAR_8 & (VAR_1 - 1);
  VAR_7 = ((VAR_8 + 1) >> VAR_0) <<
      FUNC_1(VAR_2->i_sb)->l2nbperpage;

  if (*VAR_4 && (*VAR_5 != VAR_7)) {
   FUNC_6(*VAR_4);
   *VAR_4 = ((void*)0);
  }
  if (!(*VAR_4)) {
   *VAR_5 = VAR_7;
   *VAR_4 = FUNC_5(VAR_2, VAR_7);
  }
  if (!(*VAR_4)) {
   FUNC_3("free_index: error reading directory table");
   return ((void*)0);
  }

  VAR_10 =
      (struct dir_table_slot *) ((char *) (*VAR_4)->data +
            VAR_9);
 }
 return VAR_10;
}
