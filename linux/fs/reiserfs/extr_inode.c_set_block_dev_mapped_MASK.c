
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (struct buffer_head*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct buffer_head *VAR_0,
     b_blocknr_t VAR_1, struct inode *VAR_2)
{
 FUNC_0(VAR_0, VAR_2->i_sb, VAR_1);
}
