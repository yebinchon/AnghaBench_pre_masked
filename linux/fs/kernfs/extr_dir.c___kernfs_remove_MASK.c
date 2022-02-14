
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int flags; TYPE_1__* parent; int active; int name; int rb; } ;
struct kernfs_iattrs {int ia_ctime; int ia_mtime; } ;
struct TYPE_2__ {struct kernfs_iattrs* iattr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (struct kernfs_node*) ;
 int FUNC_6 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_7 (struct kernfs_node*) ;
 int VAR_2 ;
 struct kernfs_node* FUNC_8 (struct kernfs_node*,struct kernfs_node*) ;
 int FUNC_9 (struct kernfs_node*) ;
 scalar_t__ FUNC_10 (struct kernfs_node*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static void FUNC_14(struct kernfs_node *VAR_3)
{
 struct kernfs_node *VAR_4;

 FUNC_12(&VAR_2);






 if (!VAR_3 || (VAR_3->parent && FUNC_0(&VAR_3->rb)))
  return;

 FUNC_13("kernfs %s: removing\n", VAR_3->name);


 VAR_4 = ((void*)0);
 while ((VAR_4 = FUNC_8(VAR_4, VAR_3)))
  if (FUNC_4(VAR_4))
   FUNC_2(VAR_1, &VAR_4->active);


 do {
  VAR_4 = FUNC_7(VAR_3);







  FUNC_6(VAR_4);







  if (VAR_3->flags & VAR_0)
   FUNC_5(VAR_4);
  else
   FUNC_1(FUNC_3(&VAR_3->active) != VAR_1);





  if (!VAR_4->parent || FUNC_10(VAR_4)) {
   struct kernfs_iattrs *VAR_5 =
    VAR_4->parent ? VAR_4->parent->iattr : ((void*)0);


   if (VAR_5) {
    FUNC_11(&VAR_5->ia_ctime);
    VAR_5->ia_mtime = VAR_5->ia_ctime;
   }

   FUNC_9(VAR_4);
  }

  FUNC_9(VAR_4);
 } while (VAR_4 != VAR_3);
}
