
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_root {int ino_idr; } ;
struct TYPE_2__ {unsigned int ino; } ;
struct kernfs_node {TYPE_1__ id; int count; } ;


 int FUNC_0 (int *) ;
 struct kernfs_node* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct kernfs_node *FUNC_5(struct kernfs_root *VAR_0,
          unsigned int VAR_1)
{
 struct kernfs_node *VAR_2;

 FUNC_3();
 VAR_2 = FUNC_1(&VAR_0->ino_idr, VAR_1);
 if (!VAR_2)
  goto out;
 if (!FUNC_0(&VAR_2->count)) {
  VAR_2 = ((void*)0);
  goto out;
 }
 if (VAR_2->id.ino != VAR_1)
  goto out;
 FUNC_4();

 return VAR_2;
out:
 FUNC_4();
 FUNC_2(VAR_2);
 return ((void*)0);
}
