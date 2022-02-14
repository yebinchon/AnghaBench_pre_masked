
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct us_data {int extra_destructor; int extra; TYPE_3__* pusb_dev; } ;
struct sddr09_card_info {int dummy; } ;
struct TYPE_6__ {TYPE_2__* actconfig; } ;
struct TYPE_4__ {int bConfigurationValue; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct us_data*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct us_data *VAR_5) {
 int VAR_6;


 if (VAR_5->pusb_dev->actconfig->desc.bConfigurationValue != 1) {
  FUNC_3(VAR_5, "active config #%d != 1 ??\n",
        VAR_5->pusb_dev->actconfig->desc.bConfigurationValue);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_5->pusb_dev);
 FUNC_3(VAR_5, "Result of usb_reset_configuration is %d\n", VAR_6);
 if (VAR_6 == -VAR_2) {
  FUNC_3(VAR_5, "-- stall on control interface\n");
 } else if (VAR_6 != 0) {

  FUNC_3(VAR_5, "-- Unknown error.  Rejecting device\n");
  return -VAR_0;
 }

 VAR_5->extra = FUNC_0(sizeof(struct sddr09_card_info), VAR_3);
 if (!VAR_5->extra)
  return -VAR_1;
 VAR_5->extra_destructor = VAR_4;

 FUNC_1();
 return 0;
}
