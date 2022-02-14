
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct cxacru_data {int poll_state; TYPE_1__ poll_work; int adsl_state_serialize; int poll_state_serialize; int usbatm; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cxacru_data*,int ,int *,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct device*) ;
 struct cxacru_data* FUNC_12 (int ) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_8,
 struct device_attribute *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct cxacru_data *VAR_12 = FUNC_12(
   FUNC_11(VAR_8));
 int VAR_13;
 int VAR_14 = -1;
 char VAR_15[8];
 int VAR_16 = FUNC_10(VAR_10);

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 VAR_13 = FUNC_8(VAR_10, "%7s", VAR_15);
 if (VAR_13 != 1)
  return -VAR_4;
 VAR_13 = 0;

 if (VAR_12 == ((void*)0))
  return -VAR_6;

 if (FUNC_6(&VAR_12->adsl_state_serialize))
  return -VAR_7;

 if (!FUNC_9(VAR_15, "stop") || !FUNC_9(VAR_15, "restart")) {
  VAR_13 = FUNC_2(VAR_12, VAR_2, ((void*)0), 0, ((void*)0), 0);
  if (VAR_13 < 0) {
   FUNC_0(VAR_12->usbatm, "change adsl state:"
    " CHIP_ADSL_LINE_STOP returned %d\n", VAR_13);

   VAR_13 = -VAR_5;
  } else {
   VAR_13 = VAR_16;
   VAR_14 = 129;
  }
 }





 if (!FUNC_9(VAR_15, "restart"))
  FUNC_4(1500);

 if (!FUNC_9(VAR_15, "start") || !FUNC_9(VAR_15, "restart")) {
  VAR_13 = FUNC_2(VAR_12, VAR_1, ((void*)0), 0, ((void*)0), 0);
  if (VAR_13 < 0) {
   FUNC_0(VAR_12->usbatm, "change adsl state:"
    " CHIP_ADSL_LINE_START returned %d\n", VAR_13);

   VAR_13 = -VAR_5;
  } else {
   VAR_13 = VAR_16;
   VAR_14 = 131;
  }
 }

 if (!FUNC_9(VAR_15, "poll")) {
  VAR_13 = VAR_16;
  VAR_14 = 131;
 }

 if (VAR_13 == 0) {
  VAR_13 = -VAR_4;
  VAR_14 = -1;
 }

 if (VAR_14 == 131) {
  FUNC_5(&VAR_12->poll_state_serialize);
  switch (VAR_12->poll_state) {
  case 129:

   VAR_12->poll_state = 131;
   break;

  case 128:

   VAR_12->poll_state = 131;

  case 131:
  case 130:

   VAR_14 = -1;
  }
  FUNC_7(&VAR_12->poll_state_serialize);
 } else if (VAR_14 == 129) {
  FUNC_5(&VAR_12->poll_state_serialize);

  if (VAR_12->poll_state == 131)
   VAR_12->poll_state = 128;
  FUNC_7(&VAR_12->poll_state_serialize);
 }

 FUNC_7(&VAR_12->adsl_state_serialize);

 if (VAR_14 == 131)
  FUNC_3(&VAR_12->poll_work.work);

 return VAR_13;
}
