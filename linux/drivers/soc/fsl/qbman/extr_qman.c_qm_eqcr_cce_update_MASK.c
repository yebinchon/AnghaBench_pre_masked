
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qm_eqcr {int ci; int available; } ;
struct qm_portal {struct qm_eqcr eqcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct qm_portal*,int ) ;
 int FUNC_2 (struct qm_portal*,int ) ;

__attribute__((used)) static inline u8 FUNC_3(struct qm_portal *VAR_2)
{
 struct qm_eqcr *VAR_3 = &VAR_2->eqcr;
 u8 VAR_4, VAR_5 = VAR_3->ci;

 VAR_3->ci = FUNC_1(VAR_2, VAR_0) & (VAR_1 - 1);
 FUNC_2(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3->ci);
 VAR_3->available += VAR_4;
 return VAR_4;
}
