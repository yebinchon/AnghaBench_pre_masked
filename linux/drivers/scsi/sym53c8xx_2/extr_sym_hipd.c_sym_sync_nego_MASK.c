
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_tcb {int dummy; } ;
struct sym_hcb {int dummy; } ;
struct sym_ccb {scalar_t__ nego_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sym_hcb*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sym_hcb*,int ,int ) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 int FUNC_4 (struct sym_hcb*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct sym_hcb*,int,struct sym_ccb*) ;

__attribute__((used)) static void FUNC_6(struct sym_hcb *VAR_7, struct sym_tcb *VAR_8, struct sym_ccb *VAR_9)
{
 int VAR_10 = 1;
 int VAR_11;




 if (FUNC_0(VAR_7, VAR_2) == VAR_1) {
  FUNC_1(VAR_7, VAR_2, VAR_0);
  if (VAR_9->nego_status && VAR_9->nego_status != VAR_3)
   goto reject_it;
  VAR_10 = 0;
 }




 VAR_11 = FUNC_5(VAR_7, VAR_10, VAR_9);
 if (VAR_11)
  goto reject_it;
 if (VAR_10) {
  VAR_9->nego_status = VAR_3;
  FUNC_2(VAR_7, FUNC_4(VAR_7, VAR_6));
 }
 else
  FUNC_2(VAR_7, FUNC_3(VAR_7, VAR_4));
 return;

reject_it:
 FUNC_2(VAR_7, FUNC_4(VAR_7, VAR_5));
}
