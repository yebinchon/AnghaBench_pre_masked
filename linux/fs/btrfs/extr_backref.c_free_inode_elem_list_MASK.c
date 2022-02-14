
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_inode_elem {struct extent_inode_elem* next; } ;


 int FUNC_0 (struct extent_inode_elem*) ;

__attribute__((used)) static void FUNC_1(struct extent_inode_elem *VAR_0)
{
 struct extent_inode_elem *VAR_1;

 for (; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
 }
}
