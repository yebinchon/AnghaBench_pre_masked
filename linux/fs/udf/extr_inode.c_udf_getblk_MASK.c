
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int udf_pblk_t ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_blocknr; int b_data; scalar_t__ b_state; } ;
struct TYPE_2__ {int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*,struct inode*) ;
 int FUNC_4 (int ,int,int ) ;
 struct buffer_head* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_9(struct inode *VAR_0, udf_pblk_t VAR_1,
          int VAR_2, int *VAR_3)
{
 struct buffer_head *VAR_4;
 struct buffer_head VAR_5;

 VAR_5.b_state = 0;
 VAR_5.b_blocknr = -1000;
 *VAR_3 = FUNC_7(VAR_0, VAR_1, &VAR_5, VAR_2);
 if (!*VAR_3 && FUNC_0(&VAR_5)) {
  VAR_4 = FUNC_5(VAR_0->i_sb, VAR_5.b_blocknr);
  if (FUNC_1(&VAR_5)) {
   FUNC_2(VAR_4);
   FUNC_4(VAR_4->b_data, 0x00, VAR_0->i_sb->s_blocksize);
   FUNC_6(VAR_4);
   FUNC_8(VAR_4);
   FUNC_3(VAR_4, VAR_0);
  }
  return VAR_4;
 }

 return ((void*)0);
}
