
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap3isp_hist_config {int num_regions; int hist_bins; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct omap3isp_hist_config *VAR_0)
{
 return FUNC_0(VAR_0->hist_bins) * VAR_0->num_regions;
}
