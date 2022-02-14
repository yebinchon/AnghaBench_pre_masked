
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ctrl_lock; int pgrp; } ;
struct pid {int dummy; } ;


 struct pid* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct pid *FUNC_3(struct tty_struct *VAR_0)
{
 unsigned long VAR_1;
 struct pid *VAR_2;

 FUNC_1(&VAR_0->ctrl_lock, VAR_1);
 VAR_2 = FUNC_0(VAR_0->pgrp);
 FUNC_2(&VAR_0->ctrl_lock, VAR_1);

 return VAR_2;
}
