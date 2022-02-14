
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qbman_pull_desc {int verb; int dq_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

void FUNC_1(struct qbman_pull_desc *VAR_3, u32 VAR_4)
{
 VAR_3->verb |= 1 << VAR_0;
 VAR_3->verb |= VAR_2 << VAR_1;
 VAR_3->dq_src = FUNC_0(VAR_4);
}
