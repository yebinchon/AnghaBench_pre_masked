
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dispc_clock_info {int pck_div; int lck_div; } ;
struct TYPE_4__ {struct dispc_clock_info clock_info; } ;
struct TYPE_3__ {int pck_div; int lck_div; } ;
struct dsi_data {TYPE_2__ mgr_config; TYPE_1__ user_dispc_cinfo; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned long,struct dispc_clock_info*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 unsigned long FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_2(VAR_0);
 struct dispc_clock_info VAR_2;
 int VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_3(VAR_0);

 VAR_2.lck_div = VAR_1->user_dispc_cinfo.lck_div;
 VAR_2.pck_div = VAR_1->user_dispc_cinfo.pck_div;

 VAR_3 = FUNC_1(VAR_4, &VAR_2);
 if (VAR_3) {
  FUNC_0("Failed to calc dispc clocks\n");
  return VAR_3;
 }

 VAR_1->mgr_config.clock_info = VAR_2;

 return 0;
}
