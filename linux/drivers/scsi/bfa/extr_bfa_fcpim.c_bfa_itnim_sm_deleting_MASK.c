
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {int bfa; TYPE_1__* rport; } ;
typedef enum bfa_itnim_event { ____Placeholder_bfa_itnim_event } bfa_itnim_event ;
struct TYPE_2__ {int rport_tag; } ;




 int FUNC_0 (struct bfa_itnim_s*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_itnim_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_itnim_s *VAR_1, enum bfa_itnim_event VAR_2)
{
 FUNC_3(VAR_1->bfa, VAR_1->rport->rport_tag);
 FUNC_3(VAR_1->bfa, VAR_2);

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_2(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  break;

 default:
  FUNC_1(VAR_1->bfa, VAR_2);
 }
}
