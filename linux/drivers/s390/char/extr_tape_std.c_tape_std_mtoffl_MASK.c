
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int op; } ;
struct tape_device {int * modeset_byte; } ;


 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct tape_request* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ,int,int *) ;
 int FUNC_4 (scalar_t__,int ,int ,int *) ;
 int FUNC_5 (struct tape_device*,struct tape_request*) ;

int
FUNC_6(struct tape_device *VAR_4, int VAR_5)
{
 struct tape_request *VAR_6;

 VAR_6 = FUNC_2(3, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_6->op = VAR_3;

 FUNC_3(VAR_6->cpaddr, VAR_0, 1, VAR_4->modeset_byte);
 FUNC_3(VAR_6->cpaddr + 1, VAR_2, 0, ((void*)0));
 FUNC_4(VAR_6->cpaddr + 2, VAR_1, 0, ((void*)0));


 return FUNC_5(VAR_4, VAR_6);
}
