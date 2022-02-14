
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int op; } ;
struct tape_device {int dummy; } ;
struct irb {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct tape_device*,struct tape_request*,struct irb*,int ) ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_3(struct tape_device *VAR_1,
       struct tape_request *VAR_2, struct irb *VAR_3)
{
 switch (VAR_2->op) {
 case 128:




  FUNC_2(VAR_1, VAR_2);
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 129:

  return FUNC_0(VAR_1, VAR_2, VAR_3, -VAR_0);
  break;
 default:
  return FUNC_0(VAR_1, VAR_2, VAR_3, -VAR_0);
 }
}
