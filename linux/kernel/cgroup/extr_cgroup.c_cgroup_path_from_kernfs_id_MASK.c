
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union kernfs_node_id {int dummy; } kernfs_node_id ;
struct kernfs_node {int dummy; } ;
struct TYPE_2__ {int kf_root; } ;


 TYPE_1__ VAR_0 ;
 struct kernfs_node* FUNC_0 (int ,union kernfs_node_id const*) ;
 int FUNC_1 (struct kernfs_node*,char*,size_t) ;
 int FUNC_2 (struct kernfs_node*) ;

void FUNC_3(const union kernfs_node_id *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 struct kernfs_node *VAR_4;

 VAR_4 = FUNC_0(VAR_0.kf_root, VAR_1);
 if (!VAR_4)
  return;
 FUNC_1(VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_4);
}
