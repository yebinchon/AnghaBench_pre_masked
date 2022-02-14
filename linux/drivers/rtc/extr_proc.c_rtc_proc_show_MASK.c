
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct rtc_device* private; } ;
struct rtc_wkalrm {scalar_t__ pending; scalar_t__ enabled; int time; } ;
struct rtc_time {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct rtc_device {TYPE_2__ dev; int max_user_freq; int irq_freq; scalar_t__ pie_enabled; TYPE_1__ uie_rtctimer; struct rtc_class_ops* ops; } ;
struct rtc_class_ops {int (* proc ) (int ,struct seq_file*) ;} ;


 int FUNC_0 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_1 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (int ,struct seq_file*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct rtc_device *VAR_3 = VAR_0->private;
 const struct rtc_class_ops *VAR_4 = VAR_3->ops;
 struct rtc_wkalrm VAR_5;
 struct rtc_time VAR_6;

 VAR_2 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_2 == 0) {
  FUNC_2(VAR_0,
      "rtc_time\t: %ptRt\n"
      "rtc_date\t: %ptRd\n",
      &VAR_6, &VAR_6);
 }

 VAR_2 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_2 == 0) {
  FUNC_2(VAR_0, "alrm_time\t: %ptRt\n", &VAR_5.time);
  FUNC_2(VAR_0, "alrm_date\t: %ptRd\n", &VAR_5.time);
  FUNC_2(VAR_0, "alarm_IRQ\t: %s\n",
      VAR_5.enabled ? "yes" : "no");
  FUNC_2(VAR_0, "alrm_pending\t: %s\n",
      VAR_5.pending ? "yes" : "no");
  FUNC_2(VAR_0, "update IRQ enabled\t: %s\n",
      (VAR_3->uie_rtctimer.enabled) ? "yes" : "no");
  FUNC_2(VAR_0, "periodic IRQ enabled\t: %s\n",
      (VAR_3->pie_enabled) ? "yes" : "no");
  FUNC_2(VAR_0, "periodic IRQ frequency\t: %d\n",
      VAR_3->irq_freq);
  FUNC_2(VAR_0, "max user IRQ frequency\t: %d\n",
      VAR_3->max_user_freq);
 }

 FUNC_2(VAR_0, "24hr\t\t: yes\n");

 if (VAR_4->proc)
  VAR_4->proc(VAR_3->dev.parent, VAR_0);

 return 0;
}
