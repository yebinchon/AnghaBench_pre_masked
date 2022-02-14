
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ timers_base; TYPE_2__* memcs; scalar_t__ aon_ctrl_base; } ;
struct TYPE_5__ {scalar_t__ linesz; } ;
struct TYPE_7__ {TYPE_1__ icache; } ;
struct TYPE_6__ {scalar_t__ ddr_phy_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_5[6];


 VAR_5[0] = (u32)VAR_3.aon_ctrl_base;
 VAR_5[1] = (u32)VAR_3.memcs[0].ddr_phy_base;
 VAR_5[2] = (u32)VAR_3.timers_base;
 VAR_5[3] = (u32)VAR_4.icache.linesz;
 VAR_5[4] = (u32)VAR_0;
 VAR_5[5] = (u32)(VAR_2 -
  VAR_1);


 FUNC_0(VAR_5);

 return 0;
}
