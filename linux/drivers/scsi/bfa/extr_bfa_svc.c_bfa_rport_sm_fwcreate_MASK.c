
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int rport_tag; int bfa; } ;
typedef enum bfa_rport_event { ____Placeholder_bfa_rport_event } bfa_rport_event ;






 int FUNC_0 (struct bfa_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_rport_s*,int ) ;
 int FUNC_3 (struct bfa_rport_s*,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_5(struct bfa_rport_s *VAR_9, enum bfa_rport_event VAR_10)
{
 FUNC_4(VAR_9->bfa, VAR_9->rport_tag);
 FUNC_4(VAR_9->bfa, VAR_10);

 switch (VAR_10) {
 case 130:
  FUNC_3(VAR_9, VAR_7);
  FUNC_2(VAR_9, VAR_3);
  FUNC_0(VAR_9);
  break;

 case 131:
  FUNC_3(VAR_9, VAR_4);
  FUNC_2(VAR_9, VAR_0);
  break;

 case 128:
  FUNC_3(VAR_9, VAR_6);
  FUNC_2(VAR_9, VAR_2);
  break;

 case 129:
  FUNC_3(VAR_9, VAR_5);
  FUNC_2(VAR_9, VAR_1);
  break;

 default:
  FUNC_3(VAR_9, VAR_8);
  FUNC_1(VAR_9->bfa, VAR_10);
 }
}
