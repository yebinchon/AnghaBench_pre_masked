
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int cpdata; int cpaddr; int op; } ;
struct tape_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tape_request* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static void FUNC_4(struct tape_device *VAR_2)
{
 struct tape_request *VAR_3;

 VAR_3 = FUNC_1(1, 128);
 if (FUNC_0(VAR_3))
  return;
 VAR_3->op = VAR_1;
 FUNC_2(VAR_3->cpaddr, VAR_0, 128, VAR_3->cpdata);
 FUNC_3(VAR_2, VAR_3);
}
