
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfa_fcs_vport_s {int lport; int fdisc_retries; TYPE_1__* lps; } ;
struct TYPE_2__ {int lsrjt_rsn; int lsrjt_expl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_vport_s *VAR_7)
{
 u8 VAR_8 = VAR_7->lps->lsrjt_rsn;
 u8 VAR_9 = VAR_7->lps->lsrjt_expl;

 FUNC_3(FUNC_0(VAR_7), VAR_8);
 FUNC_3(FUNC_0(VAR_7), VAR_9);


 switch (VAR_7->lps->lsrjt_expl) {
 case 128:
 case 129:
  if (VAR_7->fdisc_retries < VAR_0)
   FUNC_2(VAR_7, VAR_3);
  else {
   FUNC_1(&VAR_7->lport,
     VAR_4);
   FUNC_2(VAR_7, VAR_2);
  }
  break;

 case 130:




  if (VAR_7->fdisc_retries < VAR_0)
   FUNC_2(VAR_7, VAR_3);
  else {
   FUNC_1(&VAR_7->lport,
     VAR_5);
   FUNC_2(VAR_7, VAR_1);
  }
  break;

 default:
  if (VAR_7->fdisc_retries == 0)
   FUNC_1(&VAR_7->lport,
     VAR_6);
  FUNC_2(VAR_7, VAR_3);
 }
}
