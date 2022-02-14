
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_lps_s {int bfa_tag; int bfa; } ;
typedef enum bfa_lps_event { ____Placeholder_bfa_lps_event } bfa_lps_event ;





 int FUNC_0 (struct bfa_lps_s*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_lps_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_lps_s *VAR_1, enum bfa_lps_event VAR_2)
{
 FUNC_3(VAR_1->bfa, VAR_1->bfa_tag);
 FUNC_3(VAR_1->bfa, VAR_2);

 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_2(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  break;

 case 130:
  FUNC_2(VAR_1, VAR_0);
  break;

 default:
  FUNC_1(VAR_1->bfa, VAR_2);
 }
}
