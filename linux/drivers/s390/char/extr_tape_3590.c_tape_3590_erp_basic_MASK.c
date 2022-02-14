
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int dummy; } ;
struct tape_device {int dummy; } ;
struct tape_3590_sense {int bra; } ;
struct irb {scalar_t__ ecw; } ;


 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (struct tape_device*,struct tape_request*,struct irb*,int) ;
 int FUNC_2 (struct tape_device*,struct tape_request*,struct irb*) ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_4(struct tape_device *VAR_1, struct tape_request *VAR_2,
      struct irb *VAR_3, int VAR_4)
{
 struct tape_3590_sense *VAR_5;

 VAR_5 = (struct tape_3590_sense *) VAR_3->ecw;

 switch (VAR_5->bra) {
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 case 131:
  return FUNC_3(VAR_1, VAR_2);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 130:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 default:
  FUNC_0();
  return VAR_0;
 }
}
