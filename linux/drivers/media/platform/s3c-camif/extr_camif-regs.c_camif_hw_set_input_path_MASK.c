
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_vp {int id; int camif; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct camif_vp *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1->camif, FUNC_0(VAR_1->id));
 VAR_2 &= ~VAR_0;
 FUNC_2(VAR_1->camif, FUNC_0(VAR_1->id), VAR_2);
}
