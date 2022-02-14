
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicpti {int swsreg; int qpti_id; scalar_t__ differential; int sreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct qlogicpti *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3->sreg);

 VAR_4 &= 0xf0;
 if (!(VAR_4 & VAR_1) && (VAR_3->swsreg & VAR_1))
  FUNC_0("qlogicpti%d: Fuse returned to normal state.\n", VAR_3->qpti_id);
 if (!(VAR_4 & VAR_2) && (VAR_3->swsreg & VAR_2))
  FUNC_0("qlogicpti%d: termpwr back to normal state.\n", VAR_3->qpti_id);
 if (VAR_4 != VAR_3->swsreg) {
  int VAR_5 = 0;
  if (VAR_4 & VAR_1) {
   VAR_5++;
   FUNC_0("qlogicpti%d: Fuse is open!\n", VAR_3->qpti_id);
  }
  if (VAR_4 & VAR_2) {
   VAR_5++;
   FUNC_0("qlogicpti%d: termpwr failure\n", VAR_3->qpti_id);
  }
  if (VAR_3->differential &&
      (VAR_4 & VAR_0) != VAR_0) {
   VAR_5++;
   FUNC_0("qlogicpti%d: You have a single ended device on a "
          "differential bus!  Please fix!\n", VAR_3->qpti_id);
  }
  VAR_3->swsreg = VAR_4;
  return VAR_5;
 }
 return 0;
}
