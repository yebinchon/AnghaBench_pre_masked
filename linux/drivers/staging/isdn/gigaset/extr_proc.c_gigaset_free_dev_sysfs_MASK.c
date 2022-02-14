
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int tty_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct cardstate *VAR_2)
{
 if (!VAR_2->tty_dev)
  return;

 FUNC_1(VAR_0, "removing sysfs entries");
 FUNC_0(VAR_2->tty_dev, &VAR_1);
}
