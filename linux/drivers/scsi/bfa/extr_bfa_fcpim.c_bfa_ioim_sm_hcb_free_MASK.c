
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int iotag; int bfa; TYPE_1__* fcpim; int qe; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int ioim_resfree_q; } ;






 int FUNC_0 (struct bfa_ioim_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_ioim_s*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioim_s *VAR_2, enum bfa_ioim_event VAR_3)
{
 FUNC_3(VAR_2->bfa, VAR_2->iotag);
 FUNC_3(VAR_2->bfa, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_2, VAR_1);
  FUNC_5(&VAR_2->qe);
  FUNC_4(&VAR_2->qe, &VAR_2->fcpim->ioim_resfree_q);
  break;

 case 130:
  FUNC_2(VAR_2, VAR_0);
  break;

 case 131:
  FUNC_0(VAR_2);
  break;

 case 128:
  FUNC_2(VAR_2, VAR_0);
  break;

 default:
  FUNC_1(VAR_2->bfa, VAR_3);
 }
}
