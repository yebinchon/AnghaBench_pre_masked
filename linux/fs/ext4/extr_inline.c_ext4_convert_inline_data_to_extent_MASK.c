
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_sb; scalar_t__ i_nlink; } ;
struct ext4_iloc {int bh; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *,struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct ext4_iloc*) ;
 int FUNC_10 (struct inode*) ;
 int * FUNC_11 (struct inode*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*) ;
 int FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (struct inode*,struct page*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (int ,int*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *,int ,unsigned int,unsigned int,int *,int ) ;
 int FUNC_21 (struct inode*,int*) ;
 int FUNC_22 (struct inode*,int*) ;
 int FUNC_23 (struct inode*) ;
 struct page* FUNC_24 (struct address_space*,int ,unsigned int) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (struct page*) ;

__attribute__((used)) static int FUNC_28(struct address_space *VAR_8,
           struct inode *VAR_9,
           unsigned VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 handle_t *VAR_14 = ((void*)0);
 int VAR_15 = 0, VAR_16 = 0;
 struct page *VAR_17 = ((void*)0);
 unsigned VAR_18, VAR_19;
 struct ext4_iloc VAR_20;

 if (!FUNC_10(VAR_9)) {




  FUNC_6(VAR_9, VAR_4);
  return 0;
 }

 VAR_12 = FUNC_23(VAR_9);

 VAR_11 = FUNC_9(VAR_9, &VAR_20);
 if (VAR_11)
  return VAR_11;

retry:
 VAR_14 = FUNC_11(VAR_9, VAR_3, VAR_12);
 if (FUNC_0(VAR_14)) {
  VAR_11 = FUNC_1(VAR_14);
  VAR_14 = ((void*)0);
  goto out;
 }



 VAR_10 |= VAR_0;

 VAR_17 = FUNC_24(VAR_8, 0, VAR_10);
 if (!VAR_17) {
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_21(VAR_9, &VAR_13);
 VAR_16 = 1;

 if (!FUNC_10(VAR_9)) {
  VAR_11 = 0;
  goto out;
 }

 VAR_18 = 0;
 VAR_19 = FUNC_8(VAR_9);
 if (!FUNC_2(VAR_17)) {
  VAR_11 = FUNC_15(VAR_9, VAR_17);
  if (VAR_11 < 0)
   goto out;
 }

 VAR_11 = FUNC_7(VAR_14, VAR_9);
 if (VAR_11)
  goto out;

 if (FUNC_16(VAR_9)) {
  VAR_11 = FUNC_3(VAR_17, VAR_18, VAR_19,
       VAR_7);
 } else
  VAR_11 = FUNC_3(VAR_17, VAR_18, VAR_19, VAR_6);

 if (!VAR_11 && FUNC_17(VAR_9)) {
  VAR_11 = FUNC_20(VAR_14, FUNC_25(VAR_17),
          VAR_18, VAR_19, ((void*)0),
          VAR_5);
 }

 if (VAR_11) {
  FUNC_27(VAR_17);
  FUNC_26(VAR_17);
  VAR_17 = ((void*)0);
  FUNC_13(VAR_14, VAR_9);
  FUNC_22(VAR_9, &VAR_13);
  VAR_16 = 0;
  FUNC_12(VAR_14);
  VAR_14 = ((void*)0);
  FUNC_19(VAR_9);






  if (VAR_9->i_nlink)
   FUNC_14(((void*)0), VAR_9);
 }

 if (VAR_11 == -VAR_2 && FUNC_18(VAR_9->i_sb, &VAR_15))
  goto retry;

 if (VAR_17)
  FUNC_4(VAR_17, VAR_18, VAR_19);
out:
 if (VAR_17) {
  FUNC_27(VAR_17);
  FUNC_26(VAR_17);
 }
 if (VAR_16)
  FUNC_22(VAR_9, &VAR_13);
 if (VAR_14)
  FUNC_12(VAR_14);
 FUNC_5(VAR_20.bh);
 return VAR_11;
}
