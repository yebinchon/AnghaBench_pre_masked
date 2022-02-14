
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct camif_vp {int offset; int id; int camif; scalar_t__ vflip; scalar_t__ hflip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct camif_vp *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3->camif,
    FUNC_0(VAR_3->id, VAR_3->offset));

 VAR_4 &= ~VAR_0;

 if (VAR_3->hflip)
  VAR_4 |= VAR_2;
 if (VAR_3->vflip)
  VAR_4 |= VAR_1;

 FUNC_2(VAR_3->camif, FUNC_0(VAR_3->id, VAR_3->offset), VAR_4);
}
