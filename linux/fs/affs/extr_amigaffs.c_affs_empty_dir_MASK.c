
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {scalar_t__* table; } ;
struct TYPE_3__ {int s_hashsize; } ;


 TYPE_2__* FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->i_sb;
 struct buffer_head *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = -VAR_0;
 VAR_4 = FUNC_2(VAR_3, VAR_2->i_ino);
 if (!VAR_4)
  goto done;

 VAR_5 = -VAR_1;
 for (VAR_6 = FUNC_1(VAR_3)->s_hashsize - 1; VAR_6 >= 0; VAR_6--)
  if (FUNC_0(VAR_4)->table[VAR_6])
   goto not_empty;
 VAR_5 = 0;
not_empty:
 FUNC_3(VAR_4);
done:
 return VAR_5;
}
