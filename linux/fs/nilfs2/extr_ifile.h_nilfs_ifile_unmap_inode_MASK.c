
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ino_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0, ino_t VAR_1,
        struct buffer_head *VAR_2)
{
 FUNC_0(VAR_2->b_page);
}
