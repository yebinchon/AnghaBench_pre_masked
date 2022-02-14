
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_tskim_s {int tsk_tag; int bfa; int reqq_wait; TYPE_1__* itnim; } ;
typedef enum bfa_tskim_event { ____Placeholder_bfa_tskim_event } bfa_tskim_event ;
struct TYPE_2__ {int reqq; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_tskim_s*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_tskim_s*) ;
 int FUNC_6 (struct bfa_tskim_s*) ;
 int FUNC_7 (struct bfa_tskim_s*,int ) ;
 int FUNC_8 (struct bfa_tskim_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct bfa_tskim_s *VAR_6, enum bfa_tskim_event VAR_7)
{
 FUNC_4(VAR_6->bfa, VAR_6->tsk_tag << 16 | VAR_7);

 switch (VAR_7) {
 case 129:
  FUNC_2(VAR_6, VAR_4);
  FUNC_5(VAR_6);
  break;

 case 130:
  FUNC_2(VAR_6, VAR_1);
  if (!FUNC_8(VAR_6)) {
   FUNC_2(VAR_6, VAR_2);
   FUNC_3(VAR_6->itnim, VAR_5);
   FUNC_0(VAR_6->bfa, VAR_6->itnim->reqq,
    &VAR_6->reqq_wait);
  }
  break;

 case 128:
  FUNC_2(VAR_6, VAR_3);
  FUNC_6(VAR_6);
  FUNC_7(VAR_6, VAR_0);
  break;

 default:
  FUNC_1(VAR_6->bfa, VAR_7);
 }
}
