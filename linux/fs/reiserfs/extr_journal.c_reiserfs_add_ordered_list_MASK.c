
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct buffer_head*,int ) ;

int FUNC_2(struct inode *VAR_0, struct buffer_head *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0->i_sb), VAR_1, 0);
}
