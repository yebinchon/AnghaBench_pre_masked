
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct omapfb_platform_data {int dummy; } ;
struct omapfb_mem_desc {int dummy; } ;
struct omapfb_device {int dev; TYPE_1__* panel; TYPE_4__* int_ctrl; TYPE_3__* ext_if; } ;
struct TYPE_12__ {int entry; } ;
struct TYPE_8__ {scalar_t__ format; int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_11__ {int te_connected; int prev_color_mode; TYPE_4__* int_ctrl; TYPE_3__* extif; int sys_ck; int req_sema; int free_req_list; TYPE_6__* req_pool; int pending_req_list; struct omapfb_device* fbdev; scalar_t__ prev_flags; int auto_update_timer; TYPE_2__ auto_update_window; int update_mode; int max_transmit_size; int reg_timings; int req_lock; } ;
struct TYPE_10__ {int (* init ) (struct omapfb_device*,int,struct omapfb_mem_desc*) ;int (* cleanup ) () ;} ;
struct TYPE_9__ {int (* init ) (struct omapfb_device*) ;int (* cleanup ) () ;int max_transmit_size; int (* set_timings ) (int *) ;} ;
struct TYPE_7__ {int y_res; int x_res; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (unsigned long,int*) ;
 int FUNC_4 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 struct omapfb_platform_data* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int,int) ;
 TYPE_5__ VAR_6 ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (unsigned long,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct omapfb_device*,int,struct omapfb_mem_desc*) ;
 int FUNC_18 (struct omapfb_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_24(struct omapfb_device *VAR_8, int VAR_9,
         struct omapfb_mem_desc *VAR_10)
{
 int VAR_11 = 0, VAR_12;
 u8 VAR_13, VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16, VAR_17;
 int VAR_18;
 struct omapfb_platform_data *VAR_19;

 FUNC_1(!VAR_8->ext_if || !VAR_8->int_ctrl);

 VAR_6 = VAR_8;
 VAR_6 = VAR_8->ext_if;
 VAR_6 = VAR_8->int_ctrl;

 VAR_19 = FUNC_10(VAR_8->dev);

 VAR_6 = FUNC_7(((void*)0), "hwa_sys_ck");

 FUNC_16(&VAR_6);

 if ((VAR_11 = VAR_6->init(VAR_8, 1, VAR_10)) < 0)
  goto err1;

 if ((VAR_11 = VAR_6->init(VAR_8)) < 0)
  goto err2;

 VAR_15 = FUNC_8(VAR_6);
 if ((VAR_11 = FUNC_3(VAR_15, &VAR_18)) < 0)
  goto err3;
 VAR_6->set_timings(&VAR_6);
 FUNC_6(VAR_6);

 FUNC_4(VAR_15, &VAR_16, &VAR_17);
 if ((VAR_11 = FUNC_3(VAR_16, &VAR_18)) < 0)
  goto err4;
 VAR_6->set_timings(&VAR_6);

 VAR_13 = FUNC_12(VAR_3);
 if ((VAR_13 & 0xfc) != 0x80) {
  FUNC_9(VAR_8->dev, "HWA742: invalid revision %02x\n", VAR_13);
  VAR_11 = -VAR_0;
  goto err4;
 }


 if (!(FUNC_12(VAR_2) & 0x80)) {
  FUNC_9(VAR_8->dev,
        "HWA742: controller not initialized by the bootloader\n");
  VAR_11 = -VAR_0;
  goto err4;
 }

 if ((VAR_11 = FUNC_15(VAR_17, VAR_18)) < 0) {
  FUNC_9(VAR_6->dev,
   "HWA742: can't setup tearing synchronization\n");
  goto err4;
 }
 VAR_6 = 1;

 VAR_6 = VAR_6->max_transmit_size;

 VAR_6 = VAR_5;

 VAR_6 = 0;
 VAR_6 = 0;
 VAR_6 = VAR_8->panel->x_res;
 VAR_6 = VAR_8->panel->y_res;
 VAR_6 = 0;

 FUNC_23(&VAR_6, VAR_7, 0);

 VAR_6 = -1;
 VAR_6 = 0;

 VAR_6 = VAR_8;

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_6);
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++)
  FUNC_13(&VAR_6[VAR_12].entry, &VAR_6);
 FUNC_1(VAR_12 <= VAR_4);
 FUNC_14(&VAR_6, VAR_12 - VAR_4);

 VAR_14 = FUNC_12(VAR_1);
 FUNC_11(VAR_8->dev, ": Epson HWA742 LCD controller rev %d "
   "initialized (CNF pins %x)\n", VAR_13 & 0x03, VAR_14 & 0x07);

 return 0;
err4:
 FUNC_5(VAR_6);
err3:
 VAR_6->cleanup();
err2:
 VAR_6->cleanup();
err1:
 return VAR_11;
}
