
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* block; } ;
struct TYPE_2__ {scalar_t__ request_queue; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct dasd_device*,int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct dasd_device*) ;

void FUNC_5(struct dasd_device *VAR_1)
{

 FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0);
 FUNC_4(VAR_1);
 if (VAR_1->block) {
  FUNC_3(VAR_1->block);
  if (VAR_1->block->request_queue)
   FUNC_0(VAR_1->block->request_queue,
          1);
 }
}
