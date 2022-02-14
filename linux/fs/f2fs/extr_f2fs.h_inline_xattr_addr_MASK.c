
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_inode {int * i_addr; } ;


 size_t VAR_0 ;
 struct f2fs_inode* FUNC_0 (struct page*) ;
 size_t FUNC_1 (struct inode*) ;

__attribute__((used)) static inline void *FUNC_2(struct inode *VAR_1, struct page *VAR_2)
{
 struct f2fs_inode *VAR_3 = FUNC_0(VAR_2);

 return (void *)&(VAR_3->i_addr[VAR_0 -
     FUNC_1(VAR_1)]);
}
