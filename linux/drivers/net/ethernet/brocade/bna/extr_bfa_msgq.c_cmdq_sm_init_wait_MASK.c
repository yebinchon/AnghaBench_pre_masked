
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_cmdq {int flags; } ;
typedef enum cmdq_event { ____Placeholder_cmdq_event } cmdq_event ;


 int VAR_0 ;




 int FUNC_0 (struct bfa_msgq_cmdq*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct bfa_msgq_cmdq *VAR_4, enum cmdq_event VAR_5)
{
 switch (VAR_5) {
 case 128:
 case 131:
  FUNC_0(VAR_4, VAR_3);
  break;

 case 129:
  VAR_4->flags |= VAR_0;
  break;

 case 130:
  if (VAR_4->flags & VAR_0) {
   VAR_4->flags &= ~VAR_0;
   FUNC_0(VAR_4, VAR_1);
  } else
   FUNC_0(VAR_4, VAR_2);
  break;

 default:
  FUNC_1(VAR_5);
 }
}
