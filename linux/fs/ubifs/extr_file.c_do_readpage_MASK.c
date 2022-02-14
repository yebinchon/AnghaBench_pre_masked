
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct ubifs_data_node {int size; } ;
struct page {unsigned int index; int flags; TYPE_1__* mapping; } ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
typedef int loff_t ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ubifs_data_node*) ;
 struct ubifs_data_node* FUNC_11 (int ,int ) ;
 void* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (void*,int ,int) ;
 int FUNC_16 (struct inode*,void*,unsigned int,struct ubifs_data_node*) ;
 int FUNC_17 (struct ubifs_info*,int) ;
 int FUNC_18 (struct ubifs_info*,char*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_19(struct page *VAR_9)
{
 void *VAR_10;
 int VAR_11 = 0, VAR_12;
 unsigned int VAR_13, VAR_14;
 struct ubifs_data_node *VAR_15;
 struct inode *VAR_16 = VAR_9->mapping->host;
 struct ubifs_info *VAR_17 = VAR_16->i_sb->s_fs_info;
 loff_t VAR_18 = FUNC_9(VAR_16);

 FUNC_7("ino %lu, pg %lu, i_size %lld, flags %#lx",
  VAR_16->i_ino, VAR_9->index, VAR_18, VAR_9->flags);
 FUNC_17(VAR_17, !FUNC_2(VAR_9));
 FUNC_17(VAR_17, !FUNC_3(VAR_9));

 VAR_10 = FUNC_12(VAR_9);

 VAR_13 = VAR_9->index << VAR_5;
 VAR_14 = (VAR_18 + VAR_7 - 1) >> VAR_6;
 if (VAR_13 >= VAR_14) {

  FUNC_4(VAR_9);
  FUNC_15(VAR_10, 0, VAR_3);
  goto out;
 }

 VAR_15 = FUNC_11(VAR_8, VAR_2);
 if (!VAR_15) {
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_12 = 0;
 while (1) {
  int VAR_19;

  if (VAR_13 >= VAR_14) {

   VAR_11 = -VAR_0;
   FUNC_15(VAR_10, 0, VAR_7);
  } else {
   VAR_19 = FUNC_16(VAR_16, VAR_10, VAR_13, VAR_15);
   if (VAR_19) {
    VAR_11 = VAR_19;
    if (VAR_11 != -VAR_0)
     break;
   } else if (VAR_13 + 1 == VAR_14) {
    int VAR_20 = FUNC_14(VAR_15->size);
    int VAR_21 = VAR_18 & (VAR_7 - 1);

    if (VAR_21 && VAR_21 < VAR_20)
     FUNC_15(VAR_10 + VAR_21, 0, VAR_20 - VAR_21);
   }
  }
  if (++VAR_12 >= VAR_4)
   break;
  VAR_13 += 1;
  VAR_10 += VAR_7;
 }
 if (VAR_11) {
  struct ubifs_info *VAR_22 = VAR_16->i_sb->s_fs_info;
  if (VAR_11 == -VAR_0) {

   FUNC_4(VAR_9);
   FUNC_7("hole");
   goto out_free;
  }
  FUNC_18(VAR_22, "cannot read page %lu of inode %lu, error %d",
     VAR_9->index, VAR_16->i_ino, VAR_11);
  goto error;
 }

out_free:
 FUNC_10(VAR_15);
out:
 FUNC_6(VAR_9);
 FUNC_0(VAR_9);
 FUNC_8(VAR_9);
 FUNC_13(VAR_9);
 return 0;

error:
 FUNC_10(VAR_15);
 FUNC_1(VAR_9);
 FUNC_5(VAR_9);
 FUNC_8(VAR_9);
 FUNC_13(VAR_9);
 return VAR_11;
}
