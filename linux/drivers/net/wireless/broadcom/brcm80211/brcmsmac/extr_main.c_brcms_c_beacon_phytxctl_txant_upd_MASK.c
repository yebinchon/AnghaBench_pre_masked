
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {int hw; int band; TYPE_1__* stf; } ;
struct TYPE_2__ {int phytxant; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct brcms_c_info*,int ) ;

void FUNC_4(struct brcms_c_info *VAR_2,
           u32 VAR_3)
{
 u16 VAR_4;
 u16 VAR_5 = VAR_2->stf->phytxant;
 u16 VAR_6 = VAR_1;


 if (FUNC_0(VAR_2->band))
  VAR_5 = FUNC_3(VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_2->hw, VAR_0);
 VAR_4 = (VAR_4 & ~VAR_6) | VAR_5;
 FUNC_2(VAR_2->hw, VAR_0, VAR_4);
}
