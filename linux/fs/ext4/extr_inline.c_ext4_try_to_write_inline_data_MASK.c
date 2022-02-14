
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {int xattr_sem; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct address_space*,struct inode*,unsigned int) ;
 int FUNC_7 (struct inode*,struct ext4_iloc*) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (struct inode*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*,unsigned int) ;
 int FUNC_14 (struct inode*,struct page*) ;
 struct page* FUNC_15 (struct address_space*,int ,unsigned int) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct address_space *VAR_4,
      struct inode *VAR_5,
      loff_t VAR_6, unsigned VAR_7,
      unsigned VAR_8,
      struct page **VAR_9)
{
 int VAR_10;
 handle_t *VAR_11;
 struct page *VAR_12;
 struct ext4_iloc VAR_13;

 if (VAR_6 + VAR_7 > FUNC_8(VAR_5))
  goto convert;

 VAR_10 = FUNC_7(VAR_5, &VAR_13);
 if (VAR_10)
  return VAR_10;





 VAR_11 = FUNC_11(VAR_5, VAR_3, 1);
 if (FUNC_1(VAR_11)) {
  VAR_10 = FUNC_2(VAR_11);
  VAR_11 = ((void*)0);
  goto out;
 }

 VAR_10 = FUNC_13(VAR_11, VAR_5, VAR_6 + VAR_7);
 if (VAR_10 && VAR_10 != -VAR_2)
  goto out;


 if (VAR_10 == -VAR_2) {
  FUNC_12(VAR_11);
  FUNC_4(VAR_13.bh);
  goto convert;
 }

 VAR_10 = FUNC_10(VAR_11, VAR_13.bh);
 if (VAR_10)
  goto out;

 VAR_8 |= VAR_0;

 VAR_12 = FUNC_15(VAR_4, 0, VAR_8);
 if (!VAR_12) {
  VAR_10 = -VAR_1;
  goto out;
 }

 *VAR_9 = VAR_12;
 FUNC_5(&FUNC_0(VAR_5)->xattr_sem);
 if (!FUNC_9(VAR_5)) {
  VAR_10 = 0;
  FUNC_17(VAR_12);
  FUNC_16(VAR_12);
  goto out_up_read;
 }

 if (!FUNC_3(VAR_12)) {
  VAR_10 = FUNC_14(VAR_5, VAR_12);
  if (VAR_10 < 0) {
   FUNC_17(VAR_12);
   FUNC_16(VAR_12);
   goto out_up_read;
  }
 }

 VAR_10 = 1;
 VAR_11 = ((void*)0);
out_up_read:
 FUNC_18(&FUNC_0(VAR_5)->xattr_sem);
out:
 if (VAR_11 && (VAR_10 != 1))
  FUNC_12(VAR_11);
 FUNC_4(VAR_13.bh);
 return VAR_10;
convert:
 return FUNC_6(VAR_4,
        VAR_5, VAR_8);
}
