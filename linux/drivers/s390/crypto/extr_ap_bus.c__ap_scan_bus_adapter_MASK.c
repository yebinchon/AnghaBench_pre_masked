
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {struct device* parent; int * bus; } ;
struct TYPE_3__ {struct device device; } ;
struct ap_queue {scalar_t__ state; TYPE_1__ ap_dev; struct ap_card* card; int lock; } ;
struct TYPE_4__ {struct device device; } ;
struct ap_card {int raw_hwtype; unsigned int functions; TYPE_2__ ap_dev; } ;
typedef scalar_t__ ap_qid_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ap_card* FUNC_2 (int,int,int,int,unsigned int) ;
 int FUNC_3 (scalar_t__,int,unsigned int) ;
 int FUNC_4 (scalar_t__,int*,int*,unsigned int*) ;
 struct ap_queue* FUNC_5 (scalar_t__,int) ;
 struct device* VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct device* FUNC_8 (int *,int *,void*,int ) ;
 int FUNC_9 (int *,int *,void*,int ) ;
 int FUNC_10 (struct device*,char*,int,...) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct ap_card* FUNC_17 (struct device*) ;
 struct ap_queue* FUNC_18 (struct device*) ;

__attribute__((used)) static void FUNC_19(int VAR_10)
{
 ap_qid_t VAR_11;
 unsigned int VAR_12;
 struct ap_card *VAR_13;
 struct device *VAR_14;
 struct ap_queue *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


 VAR_14 = FUNC_8(&VAR_8, ((void*)0),
         (void *)(long) VAR_10,
         VAR_6);
 VAR_13 = VAR_14 ? FUNC_17(VAR_14) : ((void*)0);
 if (!FUNC_6(VAR_10)) {
  if (VAR_14) {

   FUNC_9(&VAR_8, ((void*)0),
      (void *)(long) VAR_10,
      VAR_5);
   FUNC_12(VAR_14);
   FUNC_14(VAR_14);
  }
  return;
 }






 if (VAR_13) {

  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
   VAR_11 = FUNC_1(VAR_10, VAR_17);
   if (FUNC_4(VAR_11, &VAR_18, &VAR_19, &VAR_12) == 0)
    break;
  }
  VAR_21 = 0;
  if (VAR_17 >= VAR_0) {

   VAR_21 = 1;
  } else if (VAR_13->raw_hwtype != VAR_19) {

   FUNC_0(VAR_3, "card=%02x type changed.\n", VAR_10);
   VAR_21 = 1;
  } else if (VAR_13->functions != VAR_12) {

   FUNC_0(VAR_3, "card=%02x functions changed.\n", VAR_10);
   VAR_21 = 1;
  }
  if (VAR_21) {

   FUNC_9(&VAR_8, ((void*)0),
      (void *)(long) VAR_10,
      VAR_5);
   FUNC_12(VAR_14);
   FUNC_14(VAR_14);

   if (VAR_17 >= VAR_0)
    return;
   VAR_13 = ((void*)0);
  }
 }






 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_11 = FUNC_1(VAR_10, VAR_17);
  VAR_14 = FUNC_8(&VAR_8, ((void*)0),
          (void *)(long) VAR_11,
          VAR_7);
  VAR_15 = VAR_14 ? FUNC_18(VAR_14) : ((void*)0);
  if (!FUNC_7(VAR_17)) {
   if (VAR_14) {



    FUNC_12(VAR_14);
    FUNC_14(VAR_14);
   }
   continue;
  }

  VAR_16 = FUNC_4(VAR_11, &VAR_18, &VAR_19, &VAR_12);
  if (VAR_14) {
   if (VAR_16 == -VAR_4)
    VAR_21 = 1;
   else {
    FUNC_15(&VAR_15->lock);
    VAR_21 = VAR_15->state == VAR_1;
    FUNC_16(&VAR_15->lock);
   }
   if (VAR_21) {

    FUNC_0(VAR_2,
           "removing broken queue=%02x.%04x\n",
           VAR_10, VAR_17);
    FUNC_12(VAR_14);
   }
   FUNC_14(VAR_14);
   continue;
  }
  if (VAR_16)
   continue;

  VAR_20 = FUNC_3(VAR_11, VAR_19, VAR_12);
  if (!VAR_20)
   continue;

  if (!VAR_13) {
   VAR_13 = FUNC_2(VAR_10, VAR_18, VAR_19, VAR_20, VAR_12);
   if (!VAR_13)
    continue;
   VAR_13->ap_dev.device.bus = &VAR_8;
   VAR_13->ap_dev.device.parent = VAR_9;
   FUNC_10(&VAR_13->ap_dev.device, "card%02x", VAR_10);

   VAR_16 = FUNC_11(&VAR_13->ap_dev.device);
   if (VAR_16) {
    FUNC_14(&VAR_13->ap_dev.device);
    VAR_13 = ((void*)0);
    break;
   }

   FUNC_13(&VAR_13->ap_dev.device);
  }

  VAR_15 = FUNC_5(VAR_11, VAR_20);
  if (!VAR_15)
   continue;
  VAR_15->card = VAR_13;
  VAR_15->ap_dev.device.bus = &VAR_8;
  VAR_15->ap_dev.device.parent = &VAR_13->ap_dev.device;
  FUNC_10(&VAR_15->ap_dev.device, "%02x.%04x", VAR_10, VAR_17);

  VAR_16 = FUNC_11(&VAR_15->ap_dev.device);
  if (VAR_16) {
   FUNC_14(&VAR_15->ap_dev.device);
   continue;
  }
 }

 if (VAR_13)
  FUNC_14(&VAR_13->ap_dev.device);
}
