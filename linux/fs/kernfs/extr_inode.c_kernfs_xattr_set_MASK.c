
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct kernfs_iattrs {int xattrs; } ;


 int VAR_0 ;
 struct kernfs_iattrs* FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (int *,char const*,void const*,size_t,int) ;

int FUNC_2(struct kernfs_node *VAR_1, const char *VAR_2,
       const void *VAR_3, size_t VAR_4, int VAR_5)
{
 struct kernfs_iattrs *VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(&VAR_6->xattrs, VAR_2, VAR_3, VAR_4, VAR_5);
}
