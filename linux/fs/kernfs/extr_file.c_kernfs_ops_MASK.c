
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_ops {int dummy; } ;
struct TYPE_2__ {struct kernfs_ops const* ops; } ;
struct kernfs_node {int flags; TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_node*) ;

__attribute__((used)) static const struct kernfs_ops *FUNC_1(struct kernfs_node *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1);
 return VAR_1->attr.ops;
}
