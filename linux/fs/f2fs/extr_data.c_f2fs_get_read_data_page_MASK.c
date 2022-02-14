
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct extent_info {scalar_t__ blk; scalar_t__ fofs; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct dnode_of_data*,scalar_t__,int ) ;
 struct page* FUNC_5 (struct address_space*,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct inode*,scalar_t__,struct extent_info*) ;
 int FUNC_8 (struct dnode_of_data*) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct inode*,struct page*,scalar_t__) ;
 int FUNC_11 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*,int ,int ) ;

struct page *FUNC_15(struct inode *VAR_9, pgoff_t VAR_10,
      int VAR_11, bool VAR_12)
{
 struct address_space *VAR_13 = VAR_9->i_mapping;
 struct dnode_of_data VAR_14;
 struct page *VAR_15;
 struct extent_info VAR_16 = {0,0,0};
 int VAR_17;

 VAR_15 = FUNC_5(VAR_13, VAR_10, VAR_12);
 if (!VAR_15)
  return FUNC_0(-VAR_4);

 if (FUNC_7(VAR_9, VAR_10, &VAR_16)) {
  VAR_14.data_blkaddr = VAR_16.blk + VAR_10 - VAR_16.fofs;
  if (!FUNC_6(FUNC_1(VAR_9), VAR_14.data_blkaddr,
      VAR_1)) {
   VAR_17 = -VAR_2;
   goto put_err;
  }
  goto got_it;
 }

 FUNC_11(&VAR_14, VAR_9, ((void*)0), ((void*)0), 0);
 VAR_17 = FUNC_4(&VAR_14, VAR_10, VAR_5);
 if (VAR_17)
  goto put_err;
 FUNC_8(&VAR_14);

 if (FUNC_12(VAR_14.data_blkaddr == VAR_7)) {
  VAR_17 = -VAR_3;
  goto put_err;
 }
 if (VAR_14.data_blkaddr != VAR_6 &&
   !FUNC_6(FUNC_1(VAR_9),
      VAR_14.data_blkaddr,
      VAR_0)) {
  VAR_17 = -VAR_2;
  goto put_err;
 }
got_it:
 if (FUNC_2(VAR_15)) {
  FUNC_13(VAR_15);
  return VAR_15;
 }
 if (VAR_14.data_blkaddr == VAR_6) {
  FUNC_14(VAR_15, 0, VAR_8);
  if (!FUNC_2(VAR_15))
   FUNC_3(VAR_15);
  FUNC_13(VAR_15);
  return VAR_15;
 }

 VAR_17 = FUNC_10(VAR_9, VAR_15, VAR_14.data_blkaddr);
 if (VAR_17)
  goto put_err;
 return VAR_15;

put_err:
 FUNC_9(VAR_15, 1);
 return FUNC_0(VAR_17);
}
