
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; } ;
struct kernfs_node {int * priv; int * ns; TYPE_1__ dir; int flags; } ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,char const*,int,int ,int ,int ) ;
 int FUNC_3 (struct kernfs_node*) ;

struct kernfs_node *FUNC_4(struct kernfs_node *VAR_8,
         const char *VAR_9)
{
 struct kernfs_node *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_6|VAR_7|VAR_5,
        VAR_2, VAR_1, VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->flags |= VAR_4;
 VAR_10->dir.root = VAR_8->dir.root;
 VAR_10->ns = ((void*)0);
 VAR_10->priv = ((void*)0);


 VAR_11 = FUNC_1(VAR_10);
 if (!VAR_11)
  return VAR_10;

 FUNC_3(VAR_10);
 return FUNC_0(VAR_11);
}
