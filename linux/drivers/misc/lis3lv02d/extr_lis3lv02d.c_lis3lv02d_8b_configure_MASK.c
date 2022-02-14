
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lis3lv02d_platform_data {int hipass_ctrl; int click_flags; int click_time_limit; int click_latency; int click_window; int click_thresh_z; int click_thresh_x; int click_thresh_y; int wakeup_flags; int wakeup_thresh; int duration1; int wakeup_flags2; int wakeup_thresh2; int duration2; int irq_flags2; scalar_t__ irq2; } ;
struct lis3lv02d {int (* write ) (struct lis3lv02d*,int ,int) ;TYPE_1__* idev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int VAR_23 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int *,int ,int,int ,struct lis3lv02d*) ;
 int FUNC_3 (struct lis3lv02d*,int ,int) ;
 int FUNC_4 (struct lis3lv02d*,int ,int) ;
 int FUNC_5 (struct lis3lv02d*,int ,int) ;
 int FUNC_6 (struct lis3lv02d*,int ,int) ;
 int FUNC_7 (struct lis3lv02d*,int ,int) ;
 int FUNC_8 (struct lis3lv02d*,int ,int) ;
 int FUNC_9 (struct lis3lv02d*,int ,int) ;
 int FUNC_10 (struct lis3lv02d*,int ,int) ;
 int FUNC_11 (struct lis3lv02d*,int ,int) ;
 int FUNC_12 (struct lis3lv02d*,int ,int) ;
 int FUNC_13 (struct lis3lv02d*,int ,int) ;
 int FUNC_14 (struct lis3lv02d*,int ,int) ;
 int FUNC_15 (struct lis3lv02d*,int ,int) ;

__attribute__((used)) static void FUNC_16(struct lis3lv02d *VAR_24,
    struct lis3lv02d_platform_data *VAR_25)
{
 int VAR_26;
 int VAR_27 = VAR_25->hipass_ctrl;

 if (VAR_25->click_flags) {
  VAR_24->write(VAR_24, VAR_3, VAR_25->click_flags);
  VAR_24->write(VAR_24, VAR_7, VAR_25->click_time_limit);
  VAR_24->write(VAR_24, VAR_4, VAR_25->click_latency);
  VAR_24->write(VAR_24, VAR_8, VAR_25->click_window);
  VAR_24->write(VAR_24, VAR_6, VAR_25->click_thresh_z & 0xf);
  VAR_24->write(VAR_24, VAR_5,
   (VAR_25->click_thresh_x & 0xf) |
   (VAR_25->click_thresh_y << 4));

  if (VAR_24->idev) {
   struct input_dev *VAR_28 = VAR_24->idev->input;
   FUNC_0(VAR_28, VAR_11, VAR_0);
   FUNC_0(VAR_28, VAR_11, VAR_1);
   FUNC_0(VAR_28, VAR_11, VAR_2);
  }
 }

 if (VAR_25->wakeup_flags) {
  VAR_24->write(VAR_24, VAR_12, VAR_25->wakeup_flags);
  VAR_24->write(VAR_24, VAR_16, VAR_25->wakeup_thresh & 0x7f);

  VAR_24->write(VAR_24, VAR_14, VAR_25->duration1 + 1);
  VAR_27 ^= VAR_18;
 }

 if (VAR_25->wakeup_flags2) {
  VAR_24->write(VAR_24, VAR_13, VAR_25->wakeup_flags2);
  VAR_24->write(VAR_24, VAR_17, VAR_25->wakeup_thresh2 & 0x7f);

  VAR_24->write(VAR_24, VAR_15, VAR_25->duration2 + 1);
  VAR_27 ^= VAR_19;
 }

 VAR_24->write(VAR_24, VAR_9, VAR_27);

 if (VAR_25->irq2) {
  VAR_26 = FUNC_2(VAR_25->irq2,
     ((void*)0),
     VAR_23,
     VAR_22 | VAR_20 |
     (VAR_25->irq_flags2 & VAR_21),
     VAR_10, VAR_24);
  if (VAR_26 < 0)
   FUNC_1("No second IRQ. Limited functionality\n");
 }
}
