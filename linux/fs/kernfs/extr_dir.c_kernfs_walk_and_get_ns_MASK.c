
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int dummy; } ;


 int FUNC_0 (struct kernfs_node*) ;
 int VAR_0 ;
 struct kernfs_node* FUNC_1 (struct kernfs_node*,char const*,void const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct kernfs_node *FUNC_4(struct kernfs_node *VAR_1,
        const char *VAR_2, const void *VAR_3)
{
 struct kernfs_node *VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4);
 FUNC_3(&VAR_0);

 return VAR_4;
}
