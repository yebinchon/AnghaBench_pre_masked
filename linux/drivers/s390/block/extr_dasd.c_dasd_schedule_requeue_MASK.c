
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int requeue_requests; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dasd_device *VAR_0)
{
 FUNC_0(VAR_0);

 if (!FUNC_2(&VAR_0->requeue_requests))
  FUNC_1(VAR_0);
}
