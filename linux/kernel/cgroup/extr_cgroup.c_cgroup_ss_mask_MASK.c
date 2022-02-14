
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cgroup {TYPE_1__* root; int subtree_ss_mask; } ;
struct TYPE_2__ {int subsys_mask; } ;


 scalar_t__ FUNC_0 (struct cgroup*) ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 int VAR_0 ;

__attribute__((used)) static u16 FUNC_2(struct cgroup *VAR_1)
{
 struct cgroup *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  u16 VAR_3 = VAR_2->subtree_ss_mask;


  if (FUNC_0(VAR_1))
   VAR_3 &= VAR_0;
  return VAR_3;
 }

 return VAR_1->root->subsys_mask;
}
