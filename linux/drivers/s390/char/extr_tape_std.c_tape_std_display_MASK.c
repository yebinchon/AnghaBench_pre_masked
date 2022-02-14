
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; scalar_t__ cpdata; int op; } ;
struct tape_device {int dummy; } ;
struct display_struct {unsigned char cntrl; int message2; int message1; } ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct tape_request*) ;
 int VAR_2 ;
 int FUNC_4 (unsigned char*,int ,int) ;
 struct tape_request* FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__,int ,int,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ,int *) ;
 int FUNC_8 (struct tape_device*,struct tape_request*) ;
 int FUNC_9 (struct tape_request*) ;

int
FUNC_10(struct tape_device *VAR_3, struct display_struct *VAR_4)
{
 struct tape_request *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(2, 17);
 if (FUNC_2(VAR_5)) {
  FUNC_1(3, "TAPE: load display failed\n");
  return FUNC_3(VAR_5);
 }
 VAR_5->op = VAR_2;

 *(unsigned char *) VAR_5->cpdata = VAR_4->cntrl;
 FUNC_1(5, "TAPE: display cntrl=%04x\n", VAR_4->cntrl);
 FUNC_4(((unsigned char *) VAR_5->cpdata) + 1, VAR_4->message1, 8);
 FUNC_4(((unsigned char *) VAR_5->cpdata) + 9, VAR_4->message2, 8);
 FUNC_0(((unsigned char*) VAR_5->cpdata) + 1, 16);

 FUNC_6(VAR_5->cpaddr, VAR_0, 17, VAR_5->cpdata);
 FUNC_7(VAR_5->cpaddr + 1, VAR_1, 0, ((void*)0));

 VAR_6 = FUNC_8(VAR_3, VAR_5);
 FUNC_9(VAR_5);
 return VAR_6;
}
