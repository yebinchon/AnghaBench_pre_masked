
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mchip_fnum; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(FUNC_0(VAR_0.mchip_fnum), 0);
 VAR_0.mchip_fnum++;
 VAR_0.mchip_fnum %= 4;
}
