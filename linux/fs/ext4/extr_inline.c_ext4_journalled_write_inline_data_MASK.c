
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*,struct ext4_iloc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct inode*,struct ext4_iloc*,void*,int ,unsigned int) ;
 int FUNC_3 (struct inode*,int*) ;
 int FUNC_4 (struct inode*,int*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;

struct buffer_head *
FUNC_7(struct inode *VAR_0,
      unsigned VAR_1,
      struct page *VAR_2)
{
 int VAR_3, VAR_4;
 void *VAR_5;
 struct ext4_iloc VAR_6;

 VAR_3 = FUNC_0(VAR_0, &VAR_6);
 if (VAR_3) {
  FUNC_1(VAR_0->i_sb, VAR_3);
  return ((void*)0);
 }

 FUNC_3(VAR_0, &VAR_4);
 VAR_5 = FUNC_5(VAR_2);
 FUNC_2(VAR_0, &VAR_6, VAR_5, 0, VAR_1);
 FUNC_6(VAR_5);
 FUNC_4(VAR_0, &VAR_4);

 return VAR_6.bh;
}
