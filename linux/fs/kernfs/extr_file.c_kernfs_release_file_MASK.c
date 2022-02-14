
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_open_file {int released; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct kernfs_node {TYPE_2__ attr; } ;
struct TYPE_3__ {int (* release ) (struct kernfs_open_file*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kernfs_open_file*) ;

__attribute__((used)) static void FUNC_2(struct kernfs_node *VAR_1,
    struct kernfs_open_file *VAR_2)
{







 FUNC_0(&VAR_0);

 if (!VAR_2->released) {





  VAR_1->attr.ops->release(VAR_2);
  VAR_2->released = 1;
 }
}
