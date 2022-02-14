
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_node {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fs_node*,int) ;

__attribute__((used)) static int FUNC_3(struct fs_node *VAR_1, bool VAR_2)
{
 if (FUNC_1(&VAR_1->refcount) > 1) {
  FUNC_0(&VAR_1->refcount);
  return -VAR_0;
 }
 FUNC_2(VAR_1, VAR_2);
 return 0;
}
