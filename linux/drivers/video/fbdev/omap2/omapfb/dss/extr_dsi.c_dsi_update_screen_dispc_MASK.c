
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct platform_device {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct TYPE_4__ {unsigned int x_res; unsigned int y_res; } ;
struct TYPE_3__ {struct omap_overlay_manager* manager; } ;
struct dsi_data {unsigned int update_channel; unsigned int line_buffer_size; int te_timer; scalar_t__ te_enabled; TYPE_2__ timings; int framedone_timeout_work; int pix_fmt; TYPE_1__ output; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int const) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (unsigned int,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct platform_device*,int ,int ,int,int) ;
 int FUNC_6 () ;
 struct dsi_data* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,unsigned int const,int ) ;
 int FUNC_11 (struct platform_device*,unsigned int const) ;
 int FUNC_12 (struct platform_device*,unsigned int const,int ,unsigned int,int ) ;
 int FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct omap_overlay_manager*,TYPE_2__*) ;
 int FUNC_15 (struct omap_overlay_manager*) ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct platform_device *VAR_4)
{
 struct dsi_data *VAR_5 = FUNC_7(VAR_4);
 struct omap_overlay_manager *VAR_6 = VAR_5->output.manager;
 unsigned VAR_7;
 unsigned VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 u32 VAR_13;
 int VAR_14;
 const unsigned VAR_15 = VAR_5->update_channel;
 const unsigned VAR_16 = VAR_5->line_buffer_size;
 u16 VAR_17 = VAR_5->timings.x_res;
 u16 VAR_18 = VAR_5->timings.y_res;

 FUNC_2("dsi_update_screen_dispc(%dx%d)\n", VAR_17, VAR_18);

 FUNC_10(VAR_4, VAR_15, VAR_1);

 VAR_7 = FUNC_8(VAR_5->pix_fmt) / 8;
 VAR_8 = VAR_17 * VAR_7;
 VAR_9 = VAR_8 * VAR_18;




 if (VAR_9 < VAR_16)
  VAR_11 = VAR_9;
 else
  VAR_11 = (VAR_16) / VAR_8 * VAR_8;

 VAR_12 = VAR_11 + 1;
 VAR_10 = (VAR_9 / VAR_11) * VAR_12;

 if (VAR_9 % VAR_11)
  VAR_10 += (VAR_9 % VAR_11) + 1;

 VAR_13 = FUNC_4(VAR_10, 23, 0);
 FUNC_13(VAR_4, FUNC_1(VAR_15), VAR_13);

 FUNC_12(VAR_4, VAR_15, VAR_2,
  VAR_12, 0);

 if (VAR_5->te_enabled)
  VAR_13 = FUNC_3(VAR_13, 1, 30, 30);
 else
  VAR_13 = FUNC_3(VAR_13, 1, 31, 31);
 FUNC_13(VAR_4, FUNC_1(VAR_15), VAR_13);







 FUNC_6();

 FUNC_9(VAR_4);

 VAR_14 = FUNC_18(&VAR_5->framedone_timeout_work,
  FUNC_17(250));
 FUNC_0(VAR_14 == 0);

 FUNC_14(VAR_6, &VAR_5->timings);

 FUNC_15(VAR_6);

 if (VAR_5->te_enabled) {


  FUNC_5(VAR_4, VAR_0, 0, 15, 15);

  FUNC_11(VAR_4, VAR_15);




 }
}
