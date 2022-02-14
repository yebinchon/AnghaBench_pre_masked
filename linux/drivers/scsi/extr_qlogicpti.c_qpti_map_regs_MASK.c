
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicpti {void* sreg; scalar_t__ is_pti; void* qregs; struct platform_device* op; } ;
struct platform_device {int * resource; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct qlogicpti *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->op;

 VAR_1->qregs = FUNC_0(&VAR_2->resource[0], 0,
     FUNC_2(&VAR_2->resource[0]),
     "PTI Qlogic/ISP");
 if (!VAR_1->qregs) {
  FUNC_1("PTI: Qlogic/ISP registers are unmappable\n");
  return -VAR_0;
 }
 if (VAR_1->is_pti) {
  VAR_1->sreg = FUNC_0(&VAR_2->resource[0], (16 * 4096),
     sizeof(unsigned char),
     "PTI Qlogic/ISP statreg");
  if (!VAR_1->sreg) {
   FUNC_1("PTI: Qlogic/ISP status register is unmappable\n");
   return -VAR_0;
  }
 }
 return 0;
}
