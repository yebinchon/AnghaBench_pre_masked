
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int flags; void const* ns; char* name; int hash; struct kernfs_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kernfs_node*) ;
 scalar_t__ FUNC_1 (struct kernfs_node*,char const*,void const*) ;
 int FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;
 int VAR_6 ;
 int FUNC_4 (char const*,void const*) ;
 int FUNC_5 (struct kernfs_node*) ;
 int VAR_7 ;
 int FUNC_6 (struct kernfs_node*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char*,char const*) ;

int FUNC_14(struct kernfs_node *VAR_8, struct kernfs_node *VAR_9,
       const char *VAR_10, const void *VAR_11)
{
 struct kernfs_node *VAR_12;
 const char *VAR_13 = ((void*)0);
 int VAR_14;


 if (!VAR_8->parent)
  return -VAR_1;

 FUNC_9(&VAR_6);

 VAR_14 = -VAR_2;
 if (!FUNC_0(VAR_8) || !FUNC_0(VAR_9) ||
     (VAR_9->flags & VAR_5))
  goto out;

 VAR_14 = 0;
 if ((VAR_8->parent == VAR_9) && (VAR_8->ns == VAR_11) &&
     (FUNC_13(VAR_8->name, VAR_10) == 0))
  goto out;

 VAR_14 = -VAR_0;
 if (FUNC_1(VAR_9, VAR_10, VAR_11))
  goto out;


 if (FUNC_13(VAR_8->name, VAR_10) != 0) {
  VAR_14 = -VAR_3;
  VAR_10 = FUNC_8(VAR_10, VAR_4);
  if (!VAR_10)
   goto out;
 } else {
  VAR_10 = ((void*)0);
 }




 FUNC_6(VAR_8);
 FUNC_2(VAR_9);


 FUNC_11(&VAR_7);

 VAR_12 = VAR_8->parent;
 VAR_8->parent = VAR_9;

 VAR_8->ns = VAR_11;
 if (VAR_10) {
  VAR_13 = VAR_8->name;
  VAR_8->name = VAR_10;
 }

 FUNC_12(&VAR_7);

 VAR_8->hash = FUNC_4(VAR_8->name, VAR_8->ns);
 FUNC_3(VAR_8);

 FUNC_5(VAR_12);
 FUNC_7(VAR_13);

 VAR_14 = 0;
 out:
 FUNC_10(&VAR_6);
 return VAR_14;
}
