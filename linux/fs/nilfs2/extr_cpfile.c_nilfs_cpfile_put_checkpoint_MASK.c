
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct inode *VAR_0, __u64 VAR_1,
     struct buffer_head *VAR_2)
{
 FUNC_1(VAR_2->b_page);
 FUNC_0(VAR_2);
}
