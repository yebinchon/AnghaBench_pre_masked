
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int op; } ;
struct tape_device {int modeset_byte; } ;


 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_2 ;
 struct tape_request* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int *) ;
 int FUNC_5 (struct tape_device*,struct tape_request*) ;

int
FUNC_6(struct tape_device *VAR_3, int VAR_4)
{
 struct tape_request *VAR_5;

 VAR_5 = FUNC_2(2, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_5->op = VAR_2;

 FUNC_3(VAR_5->cpaddr, VAR_0, 1, VAR_3->modeset_byte);
 FUNC_4(VAR_5->cpaddr + 1, VAR_1, 0, ((void*)0));

 return FUNC_5(VAR_3, VAR_5);
}
