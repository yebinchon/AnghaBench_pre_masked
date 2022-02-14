
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int h_cnt; int v_cnt; } ;
struct omap3isp_h3a_af_config {TYPE_1__ paxel; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct omap3isp_h3a_af_config *VAR_1)
{
 return VAR_1->paxel.h_cnt * VAR_1->paxel.v_cnt * VAR_0;
}
