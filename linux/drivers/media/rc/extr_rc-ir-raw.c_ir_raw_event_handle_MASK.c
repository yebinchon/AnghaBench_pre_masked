
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct rc_dev *VAR_0)
{
 if (!VAR_0->raw || !VAR_0->raw->thread)
  return;

 FUNC_0(VAR_0->raw->thread);
}
