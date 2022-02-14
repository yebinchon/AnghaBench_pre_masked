
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,struct page*) ;
 struct page* FUNC_6 (struct inode*,int ,int) ;
 struct page* FUNC_7 (struct address_space*,int ,int) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct dnode_of_data*) ;
 int FUNC_10 (struct page*,int) ;
 int FUNC_11 (struct dnode_of_data*,int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct dnode_of_data*,struct inode*,struct page*,int *,int ) ;
 int FUNC_14 (struct page*,int ,int ) ;

struct page *FUNC_15(struct inode *VAR_4,
  struct page *VAR_5, pgoff_t VAR_6, bool VAR_7)
{
 struct address_space *VAR_8 = VAR_4->i_mapping;
 struct page *VAR_9;
 struct dnode_of_data VAR_10;
 int VAR_11;

 VAR_9 = FUNC_7(VAR_8, VAR_6, 1);
 if (!VAR_9) {




  FUNC_10(VAR_5, 1);
  return FUNC_0(-VAR_0);
 }

 FUNC_13(&VAR_10, VAR_4, VAR_5, ((void*)0), 0);
 VAR_11 = FUNC_11(&VAR_10, VAR_6);
 if (VAR_11) {
  FUNC_10(VAR_9, 1);
  return FUNC_0(VAR_11);
 }
 if (!VAR_5)
  FUNC_9(&VAR_10);

 if (FUNC_3(VAR_9))
  goto got_it;

 if (VAR_10.data_blkaddr == VAR_1) {
  FUNC_14(VAR_9, 0, VAR_3);
  if (!FUNC_3(VAR_9))
   FUNC_4(VAR_9);
 } else {
  FUNC_10(VAR_9, 1);


  FUNC_5(FUNC_1(VAR_4), VAR_5);
  VAR_9 = FUNC_6(VAR_4, VAR_6, 1);
  if (FUNC_2(VAR_9))
   return VAR_9;
 }
got_it:
 if (VAR_7 && FUNC_12(VAR_4) <
    ((loff_t)(VAR_6 + 1) << VAR_2))
  FUNC_8(VAR_4, ((loff_t)(VAR_6 + 1) << VAR_2));
 return VAR_9;
}
