
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap3isp_h3a_aewb_config {int ver_win_count; int hor_win_count; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct omap3isp_h3a_aewb_config *VAR_1)
{

 u32 VAR_2 = (VAR_1->ver_win_count + 1) * VAR_1->hor_win_count;






 VAR_2 += (VAR_2 + 7) / 8;

 return VAR_2 * VAR_0;
}
