
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_rspq {int flags; } ;
typedef enum rspq_event { ____Placeholder_rspq_event } rspq_event ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_msgq_rspq*,void (*) (struct bfa_msgq_rspq*,int)) ;
 int FUNC_1 (int) ;
 void FUNC_2 (struct bfa_msgq_rspq*,int) ;
 void FUNC_3 (struct bfa_msgq_rspq*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_msgq_rspq *VAR_1, enum rspq_event VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 130:
  FUNC_0(VAR_1, FUNC_3);
  break;

 case 129:
  VAR_1->flags |= VAR_0;
  break;

 case 131:
  if (VAR_1->flags & VAR_0) {
   VAR_1->flags &= ~VAR_0;
   FUNC_0(VAR_1, FUNC_4);
  } else
   FUNC_0(VAR_1, FUNC_2);
  break;

 default:
  FUNC_1(VAR_2);
 }
}
