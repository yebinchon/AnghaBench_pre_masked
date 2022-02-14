
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_node {struct cgroup* priv; } ;
struct cgroup {int dummy; } ;
struct TYPE_3__ {int kn; } ;
struct TYPE_4__ {TYPE_1__ cgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct cgroup*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (struct kernfs_node*) ;
 scalar_t__ FUNC_3 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct cgroup *FUNC_7(const char *VAR_5)
{
 struct kernfs_node *VAR_6;
 struct cgroup *VAR_7;

 FUNC_5(&VAR_3);

 VAR_6 = FUNC_4(VAR_4.cgrp.kn, VAR_5);
 if (VAR_6) {
  if (FUNC_3(VAR_6) == VAR_2) {
   VAR_7 = VAR_6->priv;
   FUNC_1(VAR_7);
  } else {
   VAR_7 = FUNC_0(-VAR_1);
  }
  FUNC_2(VAR_6);
 } else {
  VAR_7 = FUNC_0(-VAR_0);
 }

 FUNC_6(&VAR_3);
 return VAR_7;
}
