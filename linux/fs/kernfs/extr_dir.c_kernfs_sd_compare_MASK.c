
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int ns; int name; int hash; } ;


 int FUNC_0 (int ,int ,int ,struct kernfs_node const*) ;

__attribute__((used)) static int FUNC_1(const struct kernfs_node *VAR_0,
        const struct kernfs_node *VAR_1)
{
 return FUNC_0(VAR_0->hash, VAR_0->name, VAR_0->ns, VAR_1);
}
