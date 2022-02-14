
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int iotag; int bfa; int hcb_qe; TYPE_1__* iosp; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int reqq_wait; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_ioim_s*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_ioim_s *VAR_4, enum bfa_ioim_event VAR_5)
{
 FUNC_7(VAR_4->bfa, VAR_4->iotag);
 FUNC_7(VAR_4->bfa, VAR_5);

 switch (VAR_5) {
 case 128:
  FUNC_6(VAR_4, VAR_2);
  FUNC_3(VAR_4);
  break;

 case 131:
  FUNC_6(VAR_4, VAR_3);
  FUNC_4(&VAR_4->iosp->reqq_wait);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4->bfa, &VAR_4->hcb_qe, VAR_0,
         VAR_4);
  break;

 case 130:
  FUNC_6(VAR_4, VAR_3);
  FUNC_4(&VAR_4->iosp->reqq_wait);
  FUNC_0(VAR_4->bfa, &VAR_4->hcb_qe, VAR_1,
         VAR_4);
  FUNC_2(VAR_4);
  break;

 case 129:
  FUNC_6(VAR_4, VAR_3);
  FUNC_4(&VAR_4->iosp->reqq_wait);
  FUNC_1(VAR_4);
  FUNC_0(VAR_4->bfa, &VAR_4->hcb_qe, VAR_1,
         VAR_4);
  break;

 default:
  FUNC_5(VAR_4->bfa, VAR_5);
 }
}
