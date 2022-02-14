
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_2__* cdev; TYPE_1__* discipline; } ;
struct ccw_device {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* disable_hpf ) (struct dasd_device*) ;int (* kick_validate ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct dasd_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct dasd_device*,int ) ;
 int FUNC_4 (struct dasd_device*,int *,int ) ;
 int FUNC_5 (struct dasd_device*,int) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (struct dasd_device*) ;
 int FUNC_8 (struct dasd_device*) ;
 int FUNC_9 (struct dasd_device*,int) ;
 int FUNC_10 (struct dasd_device*,int) ;
 int FUNC_11 (struct dasd_device*,int) ;
 int FUNC_12 (struct dasd_device*,int) ;
 int FUNC_13 (struct dasd_device*) ;
 int FUNC_14 (struct dasd_device*) ;
 int FUNC_15 (struct dasd_device*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (struct dasd_device*) ;
 int FUNC_18 (struct dasd_device*) ;

void FUNC_19(struct ccw_device *VAR_7, int *VAR_8)
{
 struct dasd_device *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_2(VAR_7);
 if (FUNC_1(VAR_9))
  return;

 VAR_11 = FUNC_8(VAR_9);
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  if (VAR_8[VAR_10] & VAR_6) {
   FUNC_11(VAR_9, VAR_10);
  }
  if (VAR_8[VAR_10] & VAR_5) {
   FUNC_5(VAR_9, VAR_10);
   FUNC_14(VAR_9);
  }
  if (VAR_8[VAR_10] & VAR_4) {
   if (!FUNC_9(VAR_9, VAR_10) &&
       !FUNC_10(VAR_9, VAR_10)) {





   FUNC_5(VAR_9, VAR_10);
   FUNC_14(VAR_9);
   }
   FUNC_0(VAR_3, VAR_9, "%s",
          "Pathgroup re-established\n");
   if (VAR_9->discipline->kick_validate)
    VAR_9->discipline->kick_validate(VAR_9);
  }
 }
 VAR_12 = FUNC_6(VAR_9);
 VAR_13 = FUNC_7(VAR_9);
 if (!FUNC_8(VAR_9) && VAR_12) {





  if (VAR_9->discipline->disable_hpf)
   VAR_9->discipline->disable_hpf(VAR_9);
  FUNC_3(VAR_9, VAR_2);
  FUNC_12(VAR_9, VAR_12);
  FUNC_14(VAR_9);
  FUNC_15(VAR_9);
 } else if (!FUNC_8(VAR_9) && VAR_13) {





  FUNC_12(VAR_9, VAR_13);
  FUNC_14(VAR_9);
 }
 if (VAR_11 && !FUNC_8(VAR_9) && !VAR_12 && !VAR_13) {
  FUNC_16(&VAR_9->cdev->dev,
    "No verified channel paths remain for the device\n");
  FUNC_0(VAR_3, VAR_9,
         "%s", "last verified path gone");
  FUNC_4(VAR_9, ((void*)0), VAR_0);
  FUNC_3(VAR_9,
       VAR_1);
 }
 FUNC_13(VAR_9);
}
