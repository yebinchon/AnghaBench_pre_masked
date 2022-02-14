
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_inode {int dummy; } ;
struct f2fs_node {struct f2fs_inode i; } ;


 scalar_t__ FUNC_0 (struct page*) ;

__attribute__((used)) static inline struct f2fs_inode *FUNC_1(struct page *VAR_0)
{
 return &((struct f2fs_node *)FUNC_0(VAR_0))->i;
}
