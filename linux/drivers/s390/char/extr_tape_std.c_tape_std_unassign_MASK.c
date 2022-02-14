
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int cpdata; int op; } ;
struct tape_device {scalar_t__ tape_state; int cdev_id; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_1 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct tape_request* FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int *) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;
 int FUNC_7 (struct tape_request*) ;

int
FUNC_8 (struct tape_device *VAR_5)
{
 int VAR_6;
 struct tape_request *VAR_7;

 if (VAR_5->tape_state == VAR_3) {
  FUNC_0(3, "(%08x): Can't unassign device\n",
   VAR_5->cdev_id);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(2, 11);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_7->op = VAR_2;
 FUNC_4(VAR_7->cpaddr, VAR_4, 11, VAR_7->cpdata);
 FUNC_5(VAR_7->cpaddr + 1, VAR_1, 0, ((void*)0));

 if ((VAR_6 = FUNC_6(VAR_5, VAR_7)) != 0) {
  FUNC_0(3, "%08x: Unassign failed\n", VAR_5->cdev_id);
 } else {
  FUNC_0(3, "%08x: Tape unassigned\n", VAR_5->cdev_id);
 }
 FUNC_7(VAR_7);
 return VAR_6;
}
