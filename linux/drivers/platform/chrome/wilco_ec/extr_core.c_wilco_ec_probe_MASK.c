
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilco_ec_response {int dummy; } ;
struct wilco_ec_device {int data_size; void* debugfs_pdev; void* rtc_pdev; void* telem_pdev; TYPE_1__* io_packet; void* io_command; void* io_data; void* data_buffer; int mailbox_lock; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 void* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (struct device*,char*,int ,struct wilco_ec_device*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct platform_device*,struct wilco_ec_device*) ;
 int FUNC_10 (struct wilco_ec_device*) ;
 int FUNC_11 (struct wilco_ec_device*) ;
 void* FUNC_12 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct wilco_ec_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_9(VAR_5, VAR_7);
 VAR_7->dev = VAR_6;
 FUNC_6(&VAR_7->mailbox_lock);

 VAR_7->data_size = sizeof(struct wilco_ec_response) + VAR_0;
 VAR_7->data_buffer = FUNC_5(VAR_6, VAR_7->data_size, VAR_3);
 if (!VAR_7->data_buffer)
  return -VAR_2;


 VAR_7->io_data = FUNC_12(VAR_5, 0);
 VAR_7->io_command = FUNC_12(VAR_5, 1);
 VAR_7->io_packet = FUNC_12(VAR_5, 2);
 if (!VAR_7->io_data || !VAR_7->io_command || !VAR_7->io_packet)
  return -VAR_1;


 FUNC_3(VAR_7->io_packet->start,
        VAR_7->io_packet->start + VAR_0);





 VAR_7->debugfs_pdev = FUNC_7(VAR_6,
        "wilco-ec-debugfs",
        VAR_4,
        ((void*)0), 0);


 VAR_7->rtc_pdev = FUNC_7(VAR_6, "rtc-wilco-ec",
           VAR_4,
           ((void*)0), 0);
 if (FUNC_0(VAR_7->rtc_pdev)) {
  FUNC_4(VAR_6, "Failed to create RTC platform device\n");
  VAR_8 = FUNC_1(VAR_7->rtc_pdev);
  goto unregister_debugfs;
 }

 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8 < 0) {
  FUNC_4(VAR_6, "Failed to create sysfs entries: %d", VAR_8);
  goto unregister_rtc;
 }


 VAR_7->telem_pdev = FUNC_7(VAR_6, "wilco_telem",
             VAR_4,
             VAR_7, sizeof(*VAR_7));
 if (FUNC_0(VAR_7->telem_pdev)) {
  FUNC_4(VAR_6, "Failed to create telemetry platform device\n");
  VAR_8 = FUNC_1(VAR_7->telem_pdev);
  goto remove_sysfs;
 }

 return 0;

remove_sysfs:
 FUNC_11(VAR_7);
unregister_rtc:
 FUNC_8(VAR_7->rtc_pdev);
unregister_debugfs:
 if (VAR_7->debugfs_pdev)
  FUNC_8(VAR_7->debugfs_pdev);
 FUNC_2();
 return VAR_8;
}
