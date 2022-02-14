
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qbman_eq_desc {int verb; int qpri; int qdbin; int tgtid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct qbman_eq_desc *VAR_1, u32 VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 VAR_1->verb |= 1 << VAR_0;
 VAR_1->tgtid = FUNC_1(VAR_2);
 VAR_1->qdbin = FUNC_0(VAR_3);
 VAR_1->qpri = VAR_4;
}
