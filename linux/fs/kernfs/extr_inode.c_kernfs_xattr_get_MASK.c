
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;
struct kernfs_iattrs {int xattrs; } ;


 int VAR_0 ;
 struct kernfs_iattrs* FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (int *,char const*,void*,size_t) ;

int FUNC_2(struct kernfs_node *VAR_1, const char *VAR_2,
       void *VAR_3, size_t VAR_4)
{
 struct kernfs_iattrs *VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(&VAR_5->xattrs, VAR_2, VAR_3, VAR_4);
}
