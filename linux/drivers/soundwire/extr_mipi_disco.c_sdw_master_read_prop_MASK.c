
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_master_prop {scalar_t__ max_clk_freq; int num_clk_freq; scalar_t__* clk_freq; int num_clk_gears; scalar_t__* clk_gears; scalar_t__ default_frame_rate; scalar_t__ default_row; scalar_t__ default_col; scalar_t__ err_threshold; scalar_t__ dynamic_frame; int clk_stop_modes; int revision; } ;
struct sdw_bus {int link_id; int dev; struct sdw_master_prop prop; } ;
struct fwnode_handle {int dummy; } ;
typedef int name ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;
 struct fwnode_handle* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int *) ;
 void* FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (struct fwnode_handle*,char*) ;
 scalar_t__ FUNC_6 (struct fwnode_handle*,char*) ;
 int FUNC_7 (struct fwnode_handle*,char*,scalar_t__*) ;
 int FUNC_8 (struct fwnode_handle*,char*,scalar_t__*,int) ;
 int FUNC_9 (char*,int,char*,int) ;

int FUNC_10(struct sdw_bus *VAR_5)
{
 struct sdw_master_prop *VAR_6 = &VAR_5->prop;
 struct fwnode_handle *VAR_7;
 char VAR_8[32];
 int VAR_9, VAR_10;

 FUNC_3(VAR_5->dev,
     "mipi-sdw-sw-interface-revision",
     &VAR_6->revision);


 FUNC_9(VAR_8, sizeof(VAR_8),
   "mipi-sdw-link-%d-subproperties", VAR_5->link_id);

 VAR_7 = FUNC_2(VAR_5->dev, VAR_8);
 if (!VAR_7) {
  FUNC_1(VAR_5->dev, "Master node %s not found\n", VAR_8);
  return -VAR_0;
 }

 if (FUNC_6(VAR_7,
          "mipi-sdw-clock-stop-mode0-supported"))
  VAR_6->clk_stop_modes |= FUNC_0(VAR_3);

 if (FUNC_6(VAR_7,
          "mipi-sdw-clock-stop-mode1-supported"))
  VAR_6->clk_stop_modes |= FUNC_0(VAR_4);

 FUNC_7(VAR_7,
     "mipi-sdw-max-clock-frequency",
     &VAR_6->max_clk_freq);

 VAR_9 = FUNC_5(VAR_7, "mipi-sdw-clock-frequencies-supported");
 if (VAR_9 > 0) {
  VAR_6->num_clk_freq = VAR_9;
  VAR_6->clk_freq = FUNC_4(VAR_5->dev, VAR_6->num_clk_freq,
           sizeof(*VAR_6->clk_freq),
           VAR_2);
  if (!VAR_6->clk_freq)
   return -VAR_1;

  FUNC_8(VAR_7,
    "mipi-sdw-clock-frequencies-supported",
    VAR_6->clk_freq, VAR_6->num_clk_freq);
 }





 if (!VAR_6->max_clk_freq && VAR_6->clk_freq) {
  VAR_6->max_clk_freq = VAR_6->clk_freq[0];
  for (VAR_10 = 1; VAR_10 < VAR_6->num_clk_freq; VAR_10++) {
   if (VAR_6->clk_freq[VAR_10] > VAR_6->max_clk_freq)
    VAR_6->max_clk_freq = VAR_6->clk_freq[VAR_10];
  }
 }

 VAR_9 = FUNC_5(VAR_7, "mipi-sdw-supported-clock-gears");
 if (VAR_9 > 0) {
  VAR_6->num_clk_gears = VAR_9;
  VAR_6->clk_gears = FUNC_4(VAR_5->dev, VAR_6->num_clk_gears,
            sizeof(*VAR_6->clk_gears),
            VAR_2);
  if (!VAR_6->clk_gears)
   return -VAR_1;

  FUNC_8(VAR_7,
            "mipi-sdw-supported-clock-gears",
            VAR_6->clk_gears,
            VAR_6->num_clk_gears);
 }

 FUNC_7(VAR_7, "mipi-sdw-default-frame-rate",
     &VAR_6->default_frame_rate);

 FUNC_7(VAR_7, "mipi-sdw-default-frame-row-size",
     &VAR_6->default_row);

 FUNC_7(VAR_7, "mipi-sdw-default-frame-col-size",
     &VAR_6->default_col);

 VAR_6->dynamic_frame = FUNC_6(VAR_7,
   "mipi-sdw-dynamic-frame-shape");

 FUNC_7(VAR_7, "mipi-sdw-command-error-threshold",
     &VAR_6->err_threshold);

 return 0;
}
