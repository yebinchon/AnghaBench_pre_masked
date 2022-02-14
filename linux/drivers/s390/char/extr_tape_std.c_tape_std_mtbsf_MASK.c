
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
 int VAR_3 ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_4 ;
 struct tape_request* FUNC_2 (int,int ) ;
 struct ccw1* FUNC_3 (int ,int ,int,int ) ;
 struct ccw1* FUNC_4 (struct ccw1*,int ,int ,int *) ;
 struct ccw1* FUNC_5 (struct ccw1*,int ,int) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;
 int FUNC_7 (struct tape_device*,int ,int) ;

int
FUNC_8(struct tape_device *VAR_5, int VAR_6)
{
 struct tape_request *VAR_7;
 struct ccw1 *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6 + 2, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_7->op = VAR_4;

 VAR_8 = FUNC_3(VAR_7->cpaddr, VAR_1, 1,
     VAR_5->modeset_byte);
 VAR_8 = FUNC_5(VAR_8, VAR_0, VAR_6);
 VAR_8 = FUNC_4(VAR_8, VAR_3, 0, ((void*)0));

 VAR_9 = FUNC_6(VAR_5, VAR_7);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_7(VAR_5, VAR_2, 1);
  if (VAR_9 > 0)
   VAR_9 = 0;
 }
 return VAR_9;
}
