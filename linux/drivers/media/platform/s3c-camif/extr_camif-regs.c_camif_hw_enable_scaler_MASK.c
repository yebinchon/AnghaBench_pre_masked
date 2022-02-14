
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_vp {int camif; int offset; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct camif_vp *VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->id, VAR_1->offset);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_1->camif, VAR_3);
 if (VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_2(VAR_1->camif, VAR_3, VAR_4);
}
