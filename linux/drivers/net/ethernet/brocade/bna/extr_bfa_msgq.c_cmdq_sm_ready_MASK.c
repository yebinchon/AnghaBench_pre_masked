
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_cmdq {int dummy; } ;
typedef enum cmdq_event { ____Placeholder_cmdq_event } cmdq_event ;





 int FUNC_0 (struct bfa_msgq_cmdq*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct bfa_msgq_cmdq *VAR_2, enum cmdq_event VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 130:
  FUNC_0(VAR_2, VAR_1);
  break;

 case 129:
  FUNC_0(VAR_2, VAR_0);
  break;

 default:
  FUNC_1(VAR_3);
 }
}
