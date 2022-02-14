
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_sb; } ;
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
 int FUNC_6 (struct address_space*,struct inode*,unsigned int,void**) ;
 int FUNC_7 (struct inode*,struct ext4_iloc*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (struct inode*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*,unsigned int) ;
 int FUNC_14 (struct inode*,struct page*) ;
 scalar_t__ FUNC_15 (int ,int*) ;
 struct page* FUNC_16 (struct address_space*,int ,unsigned int) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct address_space *VAR_4,
        struct inode *VAR_5,
        loff_t VAR_6, unsigned VAR_7,
        unsigned VAR_8,
        struct page **VAR_9,
        void **VAR_10)
{
 int VAR_11, VAR_12;
 handle_t *VAR_13;
 struct page *VAR_14;
 struct ext4_iloc VAR_15;
 int VAR_16 = 0;

 VAR_11 = FUNC_7(VAR_5, &VAR_15);
 if (VAR_11)
  return VAR_11;

retry_journal:
 VAR_13 = FUNC_11(VAR_5, VAR_3, 1);
 if (FUNC_1(VAR_13)) {
  VAR_11 = FUNC_2(VAR_13);
  goto out;
 }

 VAR_12 = FUNC_8(VAR_5);

 VAR_11 = -VAR_2;
 if (VAR_12 >= VAR_6 + VAR_7) {
  VAR_11 = FUNC_13(VAR_13, VAR_5, VAR_6 + VAR_7);
  if (VAR_11 && VAR_11 != -VAR_2)
   goto out_journal;
 }





 VAR_8 |= VAR_0;

 if (VAR_11 == -VAR_2) {
  FUNC_12(VAR_13);
  VAR_11 = FUNC_6(VAR_4,
           VAR_5,
           VAR_8,
           VAR_10);
  if (VAR_11 == -VAR_2 &&
      FUNC_15(VAR_5->i_sb, &VAR_16))
   goto retry_journal;
  goto out;
 }

 VAR_14 = FUNC_16(VAR_4, 0, VAR_8);
 if (!VAR_14) {
  VAR_11 = -VAR_1;
  goto out_journal;
 }

 FUNC_5(&FUNC_0(VAR_5)->xattr_sem);
 if (!FUNC_9(VAR_5)) {
  VAR_11 = 0;
  goto out_release_page;
 }

 if (!FUNC_3(VAR_14)) {
  VAR_11 = FUNC_14(VAR_5, VAR_14);
  if (VAR_11 < 0)
   goto out_release_page;
 }
 VAR_11 = FUNC_10(VAR_13, VAR_15.bh);
 if (VAR_11)
  goto out_release_page;

 FUNC_19(&FUNC_0(VAR_5)->xattr_sem);
 *VAR_9 = VAR_14;
 FUNC_4(VAR_15.bh);
 return 1;
out_release_page:
 FUNC_19(&FUNC_0(VAR_5)->xattr_sem);
 FUNC_18(VAR_14);
 FUNC_17(VAR_14);
out_journal:
 FUNC_12(VAR_13);
out:
 FUNC_4(VAR_15.bh);
 return VAR_11;
}
