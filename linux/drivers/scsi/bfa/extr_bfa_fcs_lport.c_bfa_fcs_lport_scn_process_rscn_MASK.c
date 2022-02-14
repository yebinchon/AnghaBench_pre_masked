
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fchs_s {int dummy; } ;
struct fc_rscn_pl_s {TYPE_2__* event; int payldlen; } ;
struct TYPE_3__ {int num_portid_rscn; int num_rscn; } ;
struct bfa_fcs_lport_s {TYPE_1__ stats; int fcs; } ;
typedef scalar_t__ bfa_boolean_t ;
struct TYPE_4__ {int portid; int format; int qualifier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcs_lport_s*,int,int) ;
 int FUNC_5 (struct bfa_fcs_lport_s*,int) ;
 int FUNC_6 (struct bfa_fcs_lport_s*,struct fchs_s*) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(struct bfa_fcs_lport_s *VAR_4,
   struct fchs_s *VAR_5, u32 VAR_6)
{
 struct fc_rscn_pl_s *VAR_7 = (struct fc_rscn_pl_s *) (VAR_5 + 1);
 int VAR_8;
 u32 VAR_9;
 bfa_boolean_t VAR_10 = VAR_0, VAR_11;
 int VAR_12 = 0, VAR_13;

 VAR_8 =
  (FUNC_1(VAR_7->payldlen) -
   sizeof(u32)) / sizeof(VAR_7->event[0]);

 FUNC_7(VAR_4->fcs, VAR_8);

 VAR_4->stats.num_rscn++;

 FUNC_6(VAR_4, VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_9 = VAR_7->event[VAR_12].portid;

  FUNC_7(VAR_4->fcs, VAR_7->event[VAR_12].format);
  FUNC_7(VAR_4->fcs, VAR_9);


  VAR_11 = VAR_0;
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   if (VAR_7->event[VAR_13].portid == VAR_9) {
    VAR_11 = VAR_1;
    break;
   }
  }


  if (VAR_11) {
   FUNC_7(VAR_4->fcs, VAR_9);
   continue;
  }

  switch (VAR_7->event[VAR_12].format) {
  case 128:
   if (VAR_7->event[VAR_12].qualifier == VAR_3) {




    FUNC_7(VAR_4->fcs, VAR_9);
   } else {
    VAR_4->stats.num_portid_rscn++;
    FUNC_5(VAR_4, VAR_9);
   }
  break;

  case 129:
   if (VAR_7->event[VAR_12].qualifier ==
     VAR_2) {
    FUNC_2(VAR_4);
    break;
   }


  case 131:
  case 130:
   VAR_10 = VAR_1;
   FUNC_4(VAR_4,
       VAR_7->event[VAR_12].format,
       VAR_9);
   break;


  default:
   FUNC_0(1);
   VAR_10 = VAR_1;
  }
 }





 if (VAR_10)
  FUNC_3(VAR_4);
}
