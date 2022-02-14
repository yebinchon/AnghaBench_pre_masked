
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qm_portal {int dummy; } ;
struct qm_dqrr_entry {int stat; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct qm_portal*,struct qm_dqrr_entry const*,int ) ;
 struct qm_dqrr_entry* FUNC_2 (struct qm_portal*) ;
 int FUNC_3 (struct qm_portal*) ;
 int FUNC_4 (struct qm_portal*) ;
 scalar_t__ FUNC_5 (struct qm_dqrr_entry const*) ;

__attribute__((used)) static int FUNC_6(struct qm_portal *VAR_0, u32 VAR_1, int VAR_2,
          bool VAR_3)
{
 const struct qm_dqrr_entry *VAR_4;
 int VAR_5 = 0;

 do {
  FUNC_4(VAR_0);
  VAR_4 = FUNC_2(VAR_0);
  if (!VAR_4)
   FUNC_0();
 } while (VAR_3 && !VAR_4);

 while (VAR_4) {
  if (FUNC_5(VAR_4) == VAR_1 && (VAR_4->stat & VAR_2))
   VAR_5 = 1;
  FUNC_1(VAR_0, VAR_4, 0);
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
  VAR_4 = FUNC_2(VAR_0);
 }
 return VAR_5;
}
