
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int * raw; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rc_dev *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->raw);
 VAR_0->raw = ((void*)0);
}
