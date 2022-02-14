
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {int bfa; int is_online; TYPE_1__* rport; } ;
typedef enum bfa_itnim_event { ____Placeholder_bfa_itnim_event } bfa_itnim_event ;
struct TYPE_2__ {int rport_tag; } ;






 int VAR_0 ;
 int FUNC_0 (struct bfa_itnim_s*) ;
 int FUNC_1 (struct bfa_itnim_s*) ;
 int FUNC_2 (struct bfa_itnim_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_itnim_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_itnim_s *VAR_6, enum bfa_itnim_event VAR_7)
{
 FUNC_5(VAR_6->bfa, VAR_6->rport->rport_tag);
 FUNC_5(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 130:
  FUNC_4(VAR_6, VAR_5);
  VAR_6->is_online = VAR_0;
  FUNC_0(VAR_6);
  FUNC_1(VAR_6);
  break;

 case 131:
  FUNC_4(VAR_6, VAR_1);
  break;

 case 128:
  if (FUNC_2(VAR_6))
   FUNC_4(VAR_6, VAR_2);
  else
   FUNC_4(VAR_6, VAR_3);
  break;

 case 129:
  FUNC_4(VAR_6, VAR_4);
  break;

 default:
  FUNC_3(VAR_6->bfa, VAR_7);
 }
}
