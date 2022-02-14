
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_iloc {int bh; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct inode*,struct ext4_iloc*,void*,int ,unsigned int) ;
 int FUNC_9 (struct inode*,int*) ;
 int FUNC_10 (struct inode*,int*) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2,
          unsigned VAR_3, struct page *VAR_4)
{
 int VAR_5, VAR_6;
 void *VAR_7;
 struct ext4_iloc VAR_8;

 if (FUNC_14(VAR_3 < VAR_2)) {
  if (!FUNC_2(VAR_4)) {
   VAR_3 = 0;
   goto out;
  }
 }

 VAR_5 = FUNC_5(VAR_0, &VAR_8);
 if (VAR_5) {
  FUNC_7(VAR_0->i_sb, VAR_5);
  VAR_3 = 0;
  goto out;
 }

 FUNC_9(VAR_0, &VAR_6);
 FUNC_0(!FUNC_6(VAR_0));

 VAR_7 = FUNC_11(VAR_4);
 FUNC_8(VAR_0, &VAR_8, VAR_7, VAR_1, VAR_2);
 FUNC_12(VAR_7);
 FUNC_3(VAR_4);

 FUNC_1(VAR_4);

 FUNC_10(VAR_0, &VAR_6);
 FUNC_4(VAR_8.bh);
 FUNC_13(VAR_0);
out:
 return VAR_3;
}
