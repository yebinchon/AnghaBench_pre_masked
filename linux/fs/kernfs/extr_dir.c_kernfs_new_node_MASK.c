
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kernfs_node {struct kernfs_node* parent; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 struct kernfs_node* FUNC_0 (int ,struct kernfs_node*,char const*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;

struct kernfs_node *FUNC_3(struct kernfs_node *VAR_0,
        const char *VAR_1, umode_t VAR_2,
        kuid_t VAR_3, kgid_t VAR_4,
        unsigned VAR_5)
{
 struct kernfs_node *VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_0), VAR_0,
          VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_0);
  VAR_6->parent = VAR_0;
 }
 return VAR_6;
}
