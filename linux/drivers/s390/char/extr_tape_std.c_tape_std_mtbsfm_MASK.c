
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int cpaddr; int op; } ;
struct tape_device {int modeset_byte; } ;
struct ccw1 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_3 ;
 struct tape_request* FUNC_2 (int,int ) ;
 struct ccw1* FUNC_3 (int ,int ,int,int ) ;
 struct ccw1* FUNC_4 (struct ccw1*,int ,int ,int *) ;
 struct ccw1* FUNC_5 (struct ccw1*,int ,int) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;

int
FUNC_7(struct tape_device *VAR_4, int VAR_5)
{
 struct tape_request *VAR_6;
 struct ccw1 *VAR_7;

 VAR_6 = FUNC_2(VAR_5 + 2, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_6->op = VAR_3;

 VAR_7 = FUNC_3(VAR_6->cpaddr, VAR_1, 1,
     VAR_4->modeset_byte);
 VAR_7 = FUNC_5(VAR_7, VAR_0, VAR_5);
 VAR_7 = FUNC_4(VAR_7, VAR_2, 0, ((void*)0));


 return FUNC_6(VAR_4, VAR_6);
}
