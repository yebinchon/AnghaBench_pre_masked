
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_lps_s {int bfa_tag; TYPE_1__* bfa; int fdisc; int wqe; int reqq; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;
struct TYPE_5__ {int plog; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_lps_s*) ;
 int FUNC_1 (struct bfa_lps_s*) ;
 int FUNC_2 (struct bfa_lps_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct bfa_lps_s*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_9(struct bfa_lps_s *VAR_4, enum bfa_lps_event VAR_5)
{
 FUNC_8(VAR_4->bfa, VAR_4->bfa_tag);
 FUNC_8(VAR_4->bfa, VAR_5);

 switch (VAR_5) {
 case 132:
  if (FUNC_4(VAR_4->bfa, VAR_4->reqq)) {
   FUNC_7(VAR_4, VAR_3);
   FUNC_5(VAR_4->bfa, VAR_4->reqq, &VAR_4->wqe);
  } else {
   FUNC_7(VAR_4, VAR_2);
   FUNC_2(VAR_4);
  }

  if (VAR_4->fdisc)
   FUNC_3(VAR_4->bfa->plog, VAR_1,
    VAR_0, 0, "FDISC Request");
  else
   FUNC_3(VAR_4->bfa->plog, VAR_1,
    VAR_0, 0, "FLOGI Request");
  break;

 case 131:
  FUNC_1(VAR_4);
  break;

 case 134:
  FUNC_0(VAR_4);
  break;

 case 129:
 case 130:
  break;

 case 133:





  break;
 case 128:




  break;

 default:
  FUNC_6(VAR_4->bfa, VAR_5);
 }
}
