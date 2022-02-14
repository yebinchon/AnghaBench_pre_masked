
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq {int rspq; int cmdq; int init_wc; } ;
typedef enum bfa_ioc_event { ____Placeholder_bfa_ioc_event } bfa_ioc_event ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,struct bfa_msgq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7, enum bfa_ioc_event VAR_8)
{
 struct bfa_msgq *VAR_9 = (struct bfa_msgq *)VAR_7;

 switch (VAR_8) {
 case 129:
  FUNC_1(&VAR_9->init_wc, VAR_6, VAR_9);
  FUNC_2(&VAR_9->init_wc);
  FUNC_0(&VAR_9->cmdq, VAR_1);
  FUNC_2(&VAR_9->init_wc);
  FUNC_0(&VAR_9->rspq, VAR_4);
  FUNC_3(&VAR_9->init_wc);
  break;

 case 130:
  FUNC_0(&VAR_9->cmdq, VAR_2);
  FUNC_0(&VAR_9->rspq, VAR_5);
  break;

 case 128:
  FUNC_0(&VAR_9->cmdq, VAR_0);
  FUNC_0(&VAR_9->rspq, VAR_3);
  break;

 default:
  break;
 }
}
