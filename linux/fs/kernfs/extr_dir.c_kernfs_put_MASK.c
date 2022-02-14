
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_root {int ino_idr; } ;
struct TYPE_4__ {int ino; } ;
struct TYPE_3__ {struct kernfs_node* target_kn; } ;
struct kernfs_node {char* name; int count; TYPE_2__ id; struct kernfs_node* iattr; int xattrs; TYPE_1__ symlink; int active; struct kernfs_node* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kernfs_root* FUNC_5 (struct kernfs_node*) ;
 scalar_t__ FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (struct kernfs_root*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct kernfs_node*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct kernfs_node *VAR_5)
{
 struct kernfs_node *VAR_6;
 struct kernfs_root *VAR_7;





 if (!VAR_5 || !FUNC_1(&VAR_5->count))
  return;
 VAR_7 = FUNC_5(VAR_5);
 repeat:




 VAR_6 = VAR_5->parent;

 FUNC_0(FUNC_2(&VAR_5->active) != VAR_1,
    "kernfs_put: %s/%s: released with incorrect active_ref %d\n",
    VAR_6 ? VAR_6->name : "", VAR_5->name, FUNC_2(&VAR_5->active));

 if (FUNC_6(VAR_5) == VAR_0)
  FUNC_13(VAR_5->symlink.target_kn);

 FUNC_8(VAR_5->name);

 if (VAR_5->iattr) {
  FUNC_10(&VAR_5->iattr->xattrs);
  FUNC_9(VAR_2, VAR_5->iattr);
 }
 FUNC_11(&VAR_3);
 FUNC_4(&VAR_7->ino_idr, VAR_5->id.ino);
 FUNC_12(&VAR_3);
 FUNC_9(VAR_4, VAR_5);

 VAR_5 = VAR_6;
 if (VAR_5) {
  if (FUNC_1(&VAR_5->count))
   goto repeat;
 } else {

  FUNC_3(&VAR_7->ino_idr);
  FUNC_7(VAR_7);
 }
}
