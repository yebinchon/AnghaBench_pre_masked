
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_iocfc_s {TYPE_2__* bfa; } ;
typedef enum iocfc_event { ____Placeholder_iocfc_event } iocfc_event ;
struct TYPE_6__ {int cb_reqd; int en_hcb_qe; int op_status; } ;
struct TYPE_7__ {TYPE_1__ iocfc; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (TYPE_2__*,int *,int ,TYPE_2__*) ;
 int FUNC_1 (struct bfa_iocfc_s*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_iocfc_s *VAR_7, enum iocfc_event VAR_8)
{
 FUNC_3(VAR_7->bfa, VAR_8);

 switch (VAR_8) {
 case 130:
  FUNC_1(VAR_7, VAR_3);
  break;

 case 131:
  FUNC_1(VAR_7, VAR_5);
  break;

 case 128:
  FUNC_1(VAR_7, VAR_4);
  break;

 case 129:
  FUNC_1(VAR_7, VAR_6);

  if (VAR_7->bfa->iocfc.cb_reqd == VAR_0)
   break;

  VAR_7->bfa->iocfc.op_status = VAR_1;
  FUNC_0(VAR_7->bfa, &VAR_7->bfa->iocfc.en_hcb_qe,
        VAR_2, VAR_7->bfa);
  VAR_7->bfa->iocfc.cb_reqd = VAR_0;
  break;
 default:
  FUNC_2(VAR_7->bfa, VAR_8);
  break;
 }
}
