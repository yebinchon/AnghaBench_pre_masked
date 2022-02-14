
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {scalar_t__ subtree_control; int dom_cgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cgroup*) ;
 scalar_t__ FUNC_1 (struct cgroup*) ;
 scalar_t__ FUNC_2 (struct cgroup*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cgroup*) ;

int FUNC_5(struct cgroup *VAR_2)
{

 if (!FUNC_4(VAR_2))
  return 0;


 if (!FUNC_3(VAR_2->dom_cgrp))
  return -VAR_1;


 if (FUNC_1(VAR_2))
  return 0;





 if (FUNC_0(VAR_2) || FUNC_2(VAR_2))
  return 0;


 if (VAR_2->subtree_control)
  return -VAR_0;

 return 0;
}
