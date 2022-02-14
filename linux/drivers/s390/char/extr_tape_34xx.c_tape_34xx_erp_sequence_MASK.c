
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {int dummy; } ;
struct tape_device {TYPE_1__* cdev; } ;
struct irb {int* ecw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*,int) ;
 int FUNC_2 (struct tape_request*,int ) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_1,
         struct tape_request *VAR_2, struct irb *VAR_3)
{
 if (VAR_3->ecw[3] == 0x41) {



  FUNC_0 (&VAR_1->cdev->dev, "The block ID sequence on the "
   "tape is incorrect\n");
  return FUNC_2(VAR_2, -VAR_0);
 }




 return FUNC_1(VAR_1, VAR_2, VAR_3, -2);
}
