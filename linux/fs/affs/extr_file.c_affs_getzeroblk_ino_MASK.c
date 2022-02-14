
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int b_state; int b_blocknr; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int,struct buffer_head*,int) ;
 struct buffer_head* FUNC_2 (int ,int ) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_3(struct inode *VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3, VAR_4;
 int VAR_5;

 VAR_4.b_state = 0;
 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4, 1);
 if (!VAR_5) {
  VAR_3 = FUNC_2(VAR_1->i_sb, VAR_4.b_blocknr);
  if (VAR_3) {
   VAR_3->b_state |= VAR_4.b_state;
   return VAR_3;
  }
  VAR_5 = -VAR_0;
 }
 return FUNC_0(VAR_5);
}
