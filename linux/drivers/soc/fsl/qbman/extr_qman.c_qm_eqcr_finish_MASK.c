
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qm_eqcr {scalar_t__ ci; int cursor; int busy; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct qm_portal*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct qm_portal *VAR_3)
{
 struct qm_eqcr *VAR_4 = &VAR_3->eqcr;
 u8 VAR_5 = FUNC_3(VAR_3, VAR_2) & (VAR_0 - 1);
 u8 VAR_6 = FUNC_3(VAR_3, VAR_1) & (VAR_0 - 1);

 FUNC_0(!VAR_4->busy);
 if (VAR_5 != FUNC_1(VAR_4->cursor))
  FUNC_2("losing uncommitted EQCR entries\n");
 if (VAR_6 != VAR_4->ci)
  FUNC_2("missing existing EQCR completions\n");
 if (VAR_4->ci != FUNC_1(VAR_4->cursor))
  FUNC_2("EQCR destroyed unquiesced\n");
}
