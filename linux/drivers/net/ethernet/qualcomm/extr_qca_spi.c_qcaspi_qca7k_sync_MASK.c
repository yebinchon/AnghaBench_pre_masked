
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int reset_timeout; int trig_reset; } ;
struct qcaspi {int sync; int net_dev; TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct qcaspi*,int ,scalar_t__*) ;
 int FUNC_2 (struct qcaspi*,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(struct qcaspi *VAR_8, int VAR_9)
{
 u16 VAR_10 = 0;
 u16 VAR_11;
 u16 VAR_12 = 0;
 static u16 VAR_13;

 if (VAR_9 == VAR_0) {



  FUNC_1(VAR_8, VAR_5, &VAR_10);
  FUNC_1(VAR_8, VAR_5, &VAR_10);
  if (VAR_10 != VAR_1) {
   VAR_8->sync = 128;
   FUNC_0(VAR_8->net_dev, "sync: got CPU on, but signature was invalid, restart\n");
  } else {

   FUNC_1(VAR_8, VAR_7,
          &VAR_12);
   if (VAR_12 != VAR_2) {
    FUNC_0(VAR_8->net_dev, "sync: got CPU on, but wrbuf not empty. reset!\n");
    VAR_8->sync = 128;
   } else {
    FUNC_0(VAR_8->net_dev, "sync: got CPU on, now in sync\n");
    VAR_8->sync = 130;
    return;
   }
  }
 }

 switch (VAR_8->sync) {
 case 130:

  FUNC_1(VAR_8, VAR_5, &VAR_10);
  if (VAR_10 != VAR_1) {
   VAR_8->sync = 128;
   FUNC_0(VAR_8->net_dev, "sync: bad signature, restart\n");

   return;
  }
  break;
 case 128:

  FUNC_1(VAR_8, VAR_5, &VAR_10);
  if (VAR_10 != VAR_1) {
   FUNC_0(VAR_8->net_dev, "sync: could not read signature to reset device, retry.\n");
   return;
  }


  FUNC_0(VAR_8->net_dev, "sync: resetting device.\n");
  FUNC_1(VAR_8, VAR_6, &VAR_11);
  VAR_11 |= VAR_4;
  FUNC_2(VAR_8, VAR_6, VAR_11, 0);

  VAR_8->sync = 129;
  VAR_8->stats.trig_reset++;
  VAR_13 = 0;
  break;
 case 129:
  VAR_13++;
  FUNC_0(VAR_8->net_dev, "sync: waiting for CPU on, count %u.\n",
      VAR_13);
  if (VAR_13 >= VAR_3) {

   VAR_8->sync = 128;
   VAR_8->stats.reset_timeout++;
   FUNC_0(VAR_8->net_dev, "sync: reset timeout, restarting process.\n");
  }
  break;
 }
}
