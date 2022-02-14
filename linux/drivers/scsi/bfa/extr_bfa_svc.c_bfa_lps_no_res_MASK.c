
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int qe; int status; int bfa_tag; struct bfa_s* bfa; } ;
struct bfa_s {int dummy; } ;
struct bfa_lps_s {int qe; int status; int bfa_tag; struct bfa_s* bfa; } ;
struct bfa_lps_mod_s {int lps_active_q; } ;


 struct bfa_lps_mod_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 struct list_head* FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*,int ) ;
 int FUNC_3 (struct bfa_s*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bfa_lps_s *VAR_1, u8 VAR_2)
{
 struct bfa_s *VAR_3 = VAR_1->bfa;
 struct bfa_lps_mod_s *VAR_4 = FUNC_0(VAR_3);
 struct list_head *VAR_5, *VAR_6;
 struct bfa_lps_s *VAR_7;

 FUNC_3(VAR_3, VAR_2);

 VAR_5 = FUNC_1(VAR_1);

 while (VAR_2 && VAR_5) {
  VAR_6 = FUNC_1(VAR_5);
  VAR_7 = (struct bfa_lps_s *)VAR_5;
  FUNC_3(VAR_3, VAR_7->bfa_tag);
  VAR_7->status = VAR_1->status;
  FUNC_5(&VAR_7->qe);
  FUNC_4(&VAR_7->qe, &VAR_4->lps_active_q);
  FUNC_2(VAR_7, VAR_0);
  VAR_5 = VAR_6;
  VAR_2--;
 }
}
