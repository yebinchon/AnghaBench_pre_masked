
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cgroup {int subtree_control; TYPE_1__* root; } ;
struct TYPE_2__ {int subsys_mask; } ;


 scalar_t__ FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (struct cgroup*) ;
 struct cgroup* FUNC_2 (struct cgroup*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u16 FUNC_3(struct cgroup *VAR_3)
{
 struct cgroup *VAR_4 = FUNC_2(VAR_3);
 u16 VAR_5 = VAR_3->root->subsys_mask;

 if (VAR_4) {
  u16 VAR_6 = VAR_4->subtree_control;


  if (FUNC_0(VAR_3))
   VAR_6 &= VAR_2;
  return VAR_6;
 }

 if (FUNC_1(VAR_3))
  VAR_5 &= ~(VAR_1 |
      VAR_0);
 return VAR_5;
}
