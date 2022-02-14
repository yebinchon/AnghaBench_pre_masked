
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int iotag; int bfa; int hcb_qe; TYPE_1__* iosp; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int reqq_wait; int abort_explicit; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_ioim_s*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_ioim_s *VAR_8, enum bfa_ioim_event VAR_9)
{
 FUNC_7(VAR_8->bfa, VAR_8->iotag);
 FUNC_7(VAR_8->bfa, VAR_9);

 switch (VAR_9) {
 case 128:
  FUNC_6(VAR_8, VAR_4);
  FUNC_3(VAR_8);
  break;

 case 133:
  FUNC_0(VAR_8->iosp->abort_explicit != VAR_1);
  VAR_8->iosp->abort_explicit = VAR_0;
  FUNC_6(VAR_8, VAR_5);
  break;

 case 131:
 case 132:
  FUNC_6(VAR_8, VAR_6);
  FUNC_4(&VAR_8->iosp->reqq_wait);
  FUNC_2(VAR_8);
  FUNC_1(VAR_8->bfa, &VAR_8->hcb_qe, VAR_2,
         VAR_8);
  break;

 case 130:
  FUNC_6(VAR_8, VAR_7);
  FUNC_4(&VAR_8->iosp->reqq_wait);
  FUNC_2(VAR_8);
  FUNC_1(VAR_8->bfa, &VAR_8->hcb_qe, VAR_2,
         VAR_8);
  break;

 case 129:
  FUNC_6(VAR_8, VAR_6);
  FUNC_4(&VAR_8->iosp->reqq_wait);
  FUNC_2(VAR_8);
  FUNC_1(VAR_8->bfa, &VAR_8->hcb_qe, VAR_3,
         VAR_8);
  break;

 default:
  FUNC_5(VAR_8->bfa, VAR_9);
 }
}
