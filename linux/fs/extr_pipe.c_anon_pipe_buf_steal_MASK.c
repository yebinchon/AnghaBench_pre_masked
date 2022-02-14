
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {struct page* page; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct pipe_inode_info *VAR_0,
          struct pipe_buffer *VAR_1)
{
 struct page *VAR_2 = VAR_1->page;

 if (FUNC_2(VAR_2) == 1) {
  FUNC_1(VAR_2, 0);
  FUNC_0(VAR_2);
  return 0;
 }
 return 1;
}
