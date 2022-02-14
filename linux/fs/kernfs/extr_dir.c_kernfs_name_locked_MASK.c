
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {char* name; scalar_t__ parent; } ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct kernfs_node *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (!VAR_0)
  return FUNC_0(VAR_1, "(null)", VAR_2);

 return FUNC_0(VAR_1, VAR_0->parent ? VAR_0->name : "/", VAR_2);
}
