
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,struct inode*) ;

void FUNC_4(struct inode *VAR_0,
     struct buffer_head *VAR_1,
     struct inode *VAR_2,
     struct buffer_head *VAR_3)
{
 FUNC_1(VAR_0, 1);
 FUNC_2(VAR_0, 1);
 FUNC_0(VAR_1);
 if (VAR_0 != VAR_2) {
  FUNC_1(VAR_2, 1);
  FUNC_2(VAR_2, 1);
  FUNC_0(VAR_3);
 }
 FUNC_3(VAR_0, VAR_2);
}
