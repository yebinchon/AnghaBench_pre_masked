
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kernfs_node* target_kn; } ;
struct kernfs_node {TYPE_1__ symlink; int ns; TYPE_2__* iattr; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_4__ {int ia_gid; int ia_uid; } ;


 int VAR_0 ;
 struct kernfs_node* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct kernfs_node*) ;
 int FUNC_2 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_3 (struct kernfs_node*,char const*,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (struct kernfs_node*) ;

struct kernfs_node *FUNC_6(struct kernfs_node *VAR_6,
           const char *VAR_7,
           struct kernfs_node *VAR_8)
{
 struct kernfs_node *VAR_9;
 int VAR_10;
 kuid_t VAR_11 = VAR_2;
 kgid_t VAR_12 = VAR_1;

 if (VAR_8->iattr) {
  VAR_11 = VAR_8->iattr->ia_uid;
  VAR_12 = VAR_8->iattr->ia_gid;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_4|VAR_5, VAR_11, VAR_12,
        VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 if (FUNC_4(VAR_6))
  VAR_9->ns = VAR_8->ns;
 VAR_9->symlink.target_kn = VAR_8;
 FUNC_2(VAR_8);

 VAR_10 = FUNC_1(VAR_9);
 if (!VAR_10)
  return VAR_9;

 FUNC_5(VAR_9);
 return FUNC_0(VAR_10);
}
