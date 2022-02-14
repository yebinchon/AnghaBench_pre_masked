
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext4_lblk_t ;
typedef int __le32 ;
struct TYPE_7__ {int i_data; } ;
struct TYPE_6__ {int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,struct buffer_head*,int) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct inode*,struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 struct buffer_head* FUNC_7 (struct super_block*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static Indirect *FUNC_9(struct inode *VAR_2, int VAR_3,
     ext4_lblk_t *VAR_4,
     Indirect VAR_5[4], int *VAR_6)
{
 struct super_block *VAR_7 = VAR_2->i_sb;
 Indirect *VAR_8 = VAR_5;
 struct buffer_head *VAR_9;
 int VAR_10 = -VAR_0;

 *VAR_6 = 0;

 FUNC_1(VAR_5, ((void*)0), FUNC_0(VAR_2)->i_data + *VAR_4);
 if (!VAR_8->key)
  goto no_block;
 while (--VAR_3) {
  VAR_9 = FUNC_7(VAR_7, FUNC_5(VAR_8->key));
  if (FUNC_8(!VAR_9)) {
   VAR_10 = -VAR_1;
   goto failure;
  }

  if (!FUNC_3(VAR_9)) {
   if (FUNC_2(VAR_9) < 0) {
    FUNC_6(VAR_9);
    goto failure;
   }

   if (FUNC_4(VAR_2, VAR_9)) {
    FUNC_6(VAR_9);
    goto failure;
   }
  }

  FUNC_1(++VAR_8, VAR_9, *((__le32 *)VAR_9->b_data + *++VAR_4));

  if (!VAR_8->key)
   goto no_block;
 }
 return ((void*)0);

failure:
 *VAR_6 = VAR_10;
no_block:
 return VAR_8;
}
