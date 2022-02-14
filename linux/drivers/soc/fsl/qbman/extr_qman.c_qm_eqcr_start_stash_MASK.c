
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {int busy; int available; int ci; struct qm_eqcr_entry* cursor; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;
struct qm_eqcr_entry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct qm_eqcr_entry*) ;
 int FUNC_3 (struct qm_portal*,int ) ;

__attribute__((used)) static inline struct qm_eqcr_entry *FUNC_4(struct qm_portal
        *VAR_2)
{
 struct qm_eqcr *VAR_3 = &VAR_2->eqcr;
 u8 VAR_4, VAR_5;

 FUNC_0(!VAR_3->busy);
 if (!VAR_3->available) {
  VAR_5 = VAR_3->ci;
  VAR_3->ci = FUNC_3(VAR_2, VAR_0) &
      (VAR_1 - 1);
  VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_3->ci);
  VAR_3->available += VAR_4;
  if (!VAR_4)
   return ((void*)0);
 }



 FUNC_2(VAR_3->cursor);
 return VAR_3->cursor;
}
