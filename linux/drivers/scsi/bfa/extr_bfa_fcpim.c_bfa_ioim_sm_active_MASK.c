
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int bfa; int hcb_qe; TYPE_1__* iosp; int reqq; int itnim; int io_cbfn; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {int reqq_wait; int abort_explicit; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ,struct bfa_ioim_s*) ;
 int FUNC_1 (struct bfa_ioim_s*) ;
 int FUNC_2 (struct bfa_ioim_s*) ;
 int FUNC_3 (struct bfa_ioim_s*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct bfa_ioim_s*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_8(struct bfa_ioim_s *VAR_14, enum bfa_ioim_event VAR_15)
{
 switch (VAR_15) {
 case 131:
  FUNC_6(VAR_14, VAR_11);
  FUNC_2(VAR_14);
  FUNC_0(VAR_14->bfa, &VAR_14->hcb_qe,
         VAR_5, VAR_14);
  break;

 case 132:
  FUNC_6(VAR_14, VAR_11);
  FUNC_2(VAR_14);
  FUNC_0(VAR_14->bfa, &VAR_14->hcb_qe, VAR_3,
         VAR_14);
  break;

 case 130:
  FUNC_6(VAR_14, VAR_12);
  FUNC_2(VAR_14);
  FUNC_0(VAR_14->bfa, &VAR_14->hcb_qe, VAR_3,
         VAR_14);
  break;

 case 134:
  VAR_14->iosp->abort_explicit = VAR_1;
  VAR_14->io_cbfn = VAR_2;

  if (FUNC_3(VAR_14))
   FUNC_6(VAR_14, VAR_6);
  else {
   FUNC_6(VAR_14, VAR_7);
   FUNC_7(VAR_14->itnim, VAR_13);
   FUNC_4(VAR_14->bfa, VAR_14->reqq,
       &VAR_14->iosp->reqq_wait);
  }
  break;

 case 133:
  VAR_14->iosp->abort_explicit = VAR_0;
  VAR_14->io_cbfn = VAR_4;

  if (FUNC_3(VAR_14))
   FUNC_6(VAR_14, VAR_8);
  else {
   FUNC_6(VAR_14, VAR_9);
   FUNC_7(VAR_14->itnim, VAR_13);
   FUNC_4(VAR_14->bfa, VAR_14->reqq,
       &VAR_14->iosp->reqq_wait);
  }
  break;

 case 129:
  FUNC_6(VAR_14, VAR_11);
  FUNC_2(VAR_14);
  FUNC_0(VAR_14->bfa, &VAR_14->hcb_qe, VAR_4,
         VAR_14);
  break;

 case 128:
  if (FUNC_1(VAR_14)) {

   FUNC_6(VAR_14, VAR_12);
   FUNC_2(VAR_14);
   FUNC_0(VAR_14->bfa, &VAR_14->hcb_qe,
     VAR_4, VAR_14);
   break;
  }

  FUNC_6(VAR_14, VAR_10);
  break;

 default:
  FUNC_5(VAR_14->bfa, VAR_15);
 }
}
