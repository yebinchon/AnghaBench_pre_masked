
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int b_state; int b_blocknr; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 struct buffer_head* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*,int,struct buffer_head*,int) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_3(struct inode *VAR_1, int VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4, VAR_5;
 int VAR_6;

 VAR_5.b_state = 0;
 VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_5, VAR_3);
 if (!VAR_6) {
  VAR_4 = FUNC_1(VAR_1->i_sb, VAR_5.b_blocknr);
  if (VAR_4) {
   VAR_4->b_state |= VAR_5.b_state;
   return VAR_4;
  }
  VAR_6 = -VAR_0;
 }
 return FUNC_0(VAR_6);
}
