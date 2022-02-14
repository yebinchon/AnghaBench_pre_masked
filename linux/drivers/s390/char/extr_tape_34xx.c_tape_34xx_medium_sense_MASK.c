
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int cpdata; int cpaddr; int op; } ;
struct tape_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct tape_request*) ;
 struct tape_request* FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int FUNC_7(struct tape_device *VAR_2)
{
 struct tape_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(1, 32);
 if (FUNC_1(VAR_3)) {
  FUNC_0(6, "MSEN fail\n");
  return FUNC_2(VAR_3);
 }

 VAR_3->op = VAR_1;
 FUNC_5(VAR_3->cpaddr, VAR_0, 32, VAR_3->cpdata);
 VAR_4 = FUNC_6(VAR_2, VAR_3);
 FUNC_3(VAR_3);
 return VAR_4;
}
