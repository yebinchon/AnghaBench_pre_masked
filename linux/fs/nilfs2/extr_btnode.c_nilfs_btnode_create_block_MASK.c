
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_page; int b_blocknr; int b_bdev; int b_data; } ;
struct address_space {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {int s_bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct inode* FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,int ,int ) ;
 struct buffer_head* FUNC_9 (struct inode*,struct address_space*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;

struct buffer_head *
FUNC_15(struct address_space *VAR_1, __u64 VAR_2)
{
 struct inode *VAR_3 = FUNC_2(VAR_1);
 struct buffer_head *VAR_4;

 VAR_4 = FUNC_9(VAR_3, VAR_1, VAR_2, FUNC_0(VAR_0));
 if (FUNC_13(!VAR_4))
  return ((void*)0);

 if (FUNC_13(FUNC_5(VAR_4) || FUNC_6(VAR_4) ||
       FUNC_4(VAR_4))) {
  FUNC_3(VAR_4);
  FUNC_1();
 }
 FUNC_8(VAR_4->b_data, 0, FUNC_7(VAR_3));
 VAR_4->b_bdev = VAR_3->i_sb->s_bdev;
 VAR_4->b_blocknr = VAR_2;
 FUNC_11(VAR_4);
 FUNC_12(VAR_4);

 FUNC_14(VAR_4->b_page);
 FUNC_10(VAR_4->b_page);
 return VAR_4;
}
