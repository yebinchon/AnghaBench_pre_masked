
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct bfa_iocfc_s {TYPE_2__* bfa; } ;
typedef enum iocfc_event { ____Placeholder_iocfc_event } iocfc_event ;
struct TYPE_8__ {int stop_hcb_qe; int op_status; } ;
struct TYPE_9__ {TYPE_1__ iocfc; } ;


 int VAR_0 ;




 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_2__*) ;
 int FUNC_1 (struct bfa_iocfc_s*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_iocfc_s *VAR_3, enum iocfc_event VAR_4)
{
 FUNC_5(VAR_3->bfa, VAR_4);

 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_3->bfa);
  FUNC_2(VAR_3->bfa);
  FUNC_1(VAR_3, VAR_1);
  VAR_3->bfa->iocfc.op_status = VAR_0;
  FUNC_0(VAR_3->bfa, &VAR_3->bfa->iocfc.stop_hcb_qe,
        VAR_2, VAR_3->bfa);
  break;

 case 128:
 case 130:
 case 131:
  break;

 default:
  FUNC_4(VAR_3->bfa, VAR_4);
  break;
 }
}
