
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {int root; } ;
struct kernfs_node {void* priv; void const* ns; TYPE_1__ dir; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_2 (struct kernfs_node*,char const*,int,int ,int ,int ) ;
 int FUNC_3 (struct kernfs_node*) ;

struct kernfs_node *FUNC_4(struct kernfs_node *VAR_3,
      const char *VAR_4, umode_t VAR_5,
      kuid_t VAR_6, kgid_t VAR_7,
      void *VAR_8, const void *VAR_9)
{
 struct kernfs_node *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5 | VAR_2,
        VAR_6, VAR_7, VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->dir.root = VAR_3->dir.root;
 VAR_10->ns = VAR_9;
 VAR_10->priv = VAR_8;


 VAR_11 = FUNC_1(VAR_10);
 if (!VAR_11)
  return VAR_10;

 FUNC_3(VAR_10);
 return FUNC_0(VAR_11);
}
