
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fchs_s {scalar_t__ s_id; scalar_t__ d_id; scalar_t__ type; } ;
struct fc_els_cmd_s {scalar_t__ els_code; } ;
struct bfa_fcs_rport_s {int itnim; int fcs; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct fchs_s*,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,struct fchs_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,struct fchs_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,struct fchs_s*,int ) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,struct fchs_s*,int ) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_7 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_9(struct bfa_fcs_rport_s *VAR_9,
   struct fchs_s *VAR_10, u16 VAR_11)
{
 struct bfa_fcs_lport_s *VAR_12 = VAR_9->port;
 struct fc_els_cmd_s *VAR_13;

 FUNC_8(VAR_9->fcs, VAR_10->s_id);
 FUNC_8(VAR_9->fcs, VAR_10->d_id);
 FUNC_8(VAR_9->fcs, VAR_10->type);

 if (VAR_10->type != VAR_2)
  return;

 VAR_13 = (struct fc_els_cmd_s *) (VAR_10 + 1);

 FUNC_8(VAR_9->fcs, VAR_13->els_code);

 switch (VAR_13->els_code) {
 case 131:
  FUNC_7(VAR_12, VAR_4);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 132:
  FUNC_7(VAR_12, VAR_3);
  FUNC_2(VAR_9, VAR_10, VAR_11);
  break;

 case 129:
  FUNC_7(VAR_12, VAR_6);
  if (FUNC_1(VAR_12))
   FUNC_0(VAR_9->itnim, VAR_10, VAR_11);
  break;

 case 130:
  FUNC_7(VAR_12, VAR_5);
  FUNC_4(VAR_9, VAR_10, VAR_11);
  break;

 case 128:
  FUNC_7(VAR_12, VAR_7);
  FUNC_5(VAR_9, VAR_10, VAR_11);
  break;

 default:
  FUNC_7(VAR_12, VAR_8);
  FUNC_6(VAR_9, VAR_10,
       VAR_1,
       VAR_0);
  break;
 }
}
