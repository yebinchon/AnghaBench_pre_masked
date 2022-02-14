
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {int band; TYPE_1__* stf; } ;
struct TYPE_2__ {int phytxant; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct brcms_c_info*,int ) ;

u16 FUNC_2(struct brcms_c_info *VAR_2, u32 VAR_3)
{
 u16 VAR_4 = VAR_2->stf->phytxant;
 u16 VAR_5 = VAR_0;


 if (FUNC_0(VAR_2->band)) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  VAR_5 = VAR_1;
 }
 VAR_4 |= VAR_4 & VAR_5;
 return VAR_4;
}
