
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_info {int version; } ;
struct inode {size_t i_size; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {size_t ofs_in_node; int data_blkaddr; int node_page; int inode; int nid; } ;
typedef size_t pgoff_t ;
typedef scalar_t__ block_t ;


 scalar_t__ FUNC_0 (int ,struct inode*) ;
 int VAR_0 ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct page*,struct page*) ;
 int FUNC_6 (struct dnode_of_data*,size_t,int ) ;
 struct page* FUNC_7 (struct inode*,size_t,int) ;
 struct page* FUNC_8 (struct inode*,int *,size_t,int) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,struct node_info*) ;
 int FUNC_10 (struct inode*,int,int,int) ;
 int FUNC_11 (struct inode*,size_t) ;
 int FUNC_12 (struct dnode_of_data*) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct f2fs_sb_info*,struct dnode_of_data*,int ,scalar_t__,int ,int,int) ;
 int FUNC_15 (struct dnode_of_data*,int) ;
 int FUNC_16 (struct inode*,size_t,size_t) ;
 size_t FUNC_17 (size_t,size_t) ;
 int FUNC_18 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_19 (struct page*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_3, struct inode *VAR_4,
   block_t *VAR_5, int *VAR_6,
   pgoff_t VAR_7, pgoff_t VAR_8, pgoff_t VAR_9, bool VAR_10)
{
 struct f2fs_sb_info *VAR_11 = FUNC_1(VAR_3);
 pgoff_t VAR_12 = 0;
 int VAR_13;

 while (VAR_12 < VAR_9) {
  if (VAR_5[VAR_12] == VAR_1 && !VAR_10) {
   VAR_12++;
   continue;
  }

  if (VAR_6[VAR_12] || VAR_5[VAR_12] == VAR_1) {
   struct dnode_of_data VAR_14;
   struct node_info VAR_15;
   size_t VAR_16;
   pgoff_t VAR_17;

   FUNC_18(&VAR_14, VAR_4, ((void*)0), ((void*)0), 0);
   VAR_13 = FUNC_6(&VAR_14, VAR_8 + VAR_12, VAR_0);
   if (VAR_13)
    return VAR_13;

   VAR_13 = FUNC_9(VAR_11, VAR_14.nid, &VAR_15);
   if (VAR_13) {
    FUNC_12(&VAR_14);
    return VAR_13;
   }

   VAR_17 = FUNC_17((pgoff_t)
    FUNC_0(VAR_14.node_page, VAR_4) -
      VAR_14.ofs_in_node, VAR_9 - VAR_12);
   do {
    VAR_14.data_blkaddr = FUNC_4(VAR_14.inode,
      VAR_14.node_page, VAR_14.ofs_in_node);
    FUNC_15(&VAR_14, 1);

    if (VAR_6[VAR_12]) {
     FUNC_10(VAR_3,
       1, 0, 0);
     FUNC_10(VAR_4,
       1, 1, 0);
     FUNC_14(VAR_11, &VAR_14, VAR_14.data_blkaddr,
     VAR_5[VAR_12], VAR_15.version, 1, 0);

     VAR_6[VAR_12] = 0;
    }
    VAR_14.ofs_in_node++;
    VAR_12++;
    VAR_16 = (VAR_8 + VAR_12) << VAR_2;
    if (VAR_4->i_size < VAR_16)
     FUNC_11(VAR_4, VAR_16);
   } while (--VAR_17 && (VAR_6[VAR_12] || VAR_5[VAR_12] == VAR_1));

   FUNC_12(&VAR_14);
  } else {
   struct page *VAR_18, *VAR_19;

   VAR_18 = FUNC_7(VAR_3,
       VAR_7 + VAR_12, 1);
   if (FUNC_2(VAR_18))
    return FUNC_3(VAR_18);
   VAR_19 = FUNC_8(VAR_4, ((void*)0), VAR_8 + VAR_12,
        1);
   if (FUNC_2(VAR_19)) {
    FUNC_13(VAR_18, 1);
    return FUNC_3(VAR_19);
   }
   FUNC_5(VAR_18, VAR_19);
   FUNC_19(VAR_19);
   FUNC_13(VAR_19, 1);
   FUNC_13(VAR_18, 1);

   VAR_13 = FUNC_16(VAR_3,
      VAR_7 + VAR_12, VAR_7 + VAR_12 + 1);
   if (VAR_13)
    return VAR_13;
   VAR_12++;
  }
 }
 return 0;
}
