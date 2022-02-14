
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kernfs_node_id {scalar_t__ generation; int ino; } ;
struct kernfs_root {int dummy; } ;
struct TYPE_2__ {scalar_t__ generation; } ;
struct kernfs_node {TYPE_1__ id; } ;


 struct kernfs_node* FUNC_0 (struct kernfs_root*,int ) ;
 int FUNC_1 (struct kernfs_node*) ;

struct kernfs_node *FUNC_2(struct kernfs_root *VAR_0,
 const union kernfs_node_id *VAR_1)
{
 struct kernfs_node *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->ino);
 if (!VAR_2)
  return ((void*)0);
 if (VAR_2->id.generation != VAR_1->generation) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
