
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int dummy; } ;
struct tape_device {int cdev; } ;


 int FUNC_0 (struct tape_device*,struct tape_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct tape_device *VAR_0, struct tape_request *VAR_1)
{
 int VAR_2;

 FUNC_2(FUNC_1(VAR_0->cdev));
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(FUNC_1(VAR_0->cdev));
 return VAR_2;
}
