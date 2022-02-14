
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtsx_usb_ms {int poll_card; int handle_req; int host_mutex; int power_mode; struct platform_device* pdev; struct memstick_host* msh; struct rtsx_ucr* ucr; } ;
struct rtsx_ucr {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct memstick_host {int caps; int set_param; int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct memstick_host*) ;
 struct memstick_host* FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (struct memstick_host*) ;
 struct rtsx_usb_ms* FUNC_6 (struct memstick_host*) ;
 int FUNC_7 (struct rtsx_usb_ms*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct rtsx_usb_ms*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int ) ;
 struct rtsx_ucr* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct memstick_host *VAR_9;
 struct rtsx_usb_ms *VAR_10;
 struct rtsx_ucr *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_17(FUNC_16(VAR_8->dev.parent));
 if (!VAR_11)
  return -VAR_1;

 FUNC_2(&(VAR_8->dev),
   "Realtek USB Memstick controller found\n");

 VAR_9 = FUNC_4(sizeof(*VAR_10), &VAR_8->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_9);
 VAR_10->ucr = VAR_11;
 VAR_10->msh = VAR_9;
 VAR_10->pdev = VAR_8;
 VAR_10->power_mode = VAR_3;
 FUNC_9(VAR_8, VAR_10);

 FUNC_8(&VAR_10->host_mutex);
 FUNC_1(&VAR_10->handle_req, VAR_4);

 FUNC_0(&VAR_10->poll_card, VAR_5);

 VAR_9->request = VAR_6;
 VAR_9->set_param = VAR_7;
 VAR_9->caps = VAR_2;

 FUNC_12(FUNC_7(VAR_10));
 FUNC_15(FUNC_7(VAR_10));
 FUNC_11(FUNC_7(VAR_10));

 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12)
  goto err_out;

 FUNC_13(FUNC_7(VAR_10));

 return 0;
err_out:
 FUNC_5(VAR_9);
 FUNC_10(FUNC_7(VAR_10));
 FUNC_14(FUNC_7(VAR_10));
 return VAR_12;
}
