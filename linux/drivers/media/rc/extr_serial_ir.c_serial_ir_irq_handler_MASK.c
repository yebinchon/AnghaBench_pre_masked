
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int ktime_t ;
typedef int irqreturn_t ;
struct TYPE_8__ {int signal_pin_change; int signal_pin; } ;
struct TYPE_7__ {int timeout; } ;
struct TYPE_6__ {TYPE_3__* rcdev; int timeout_timer; int lastkt; TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (unsigned int,int) ;
 TYPE_4__* VAR_7 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_10 (int ) ;
 size_t VAR_11 ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_12, void *VAR_13)
{
 ktime_t VAR_14;
 int VAR_15, VAR_16;
 u8 VAR_17;
 ktime_t VAR_18;
 unsigned int VAR_19;
 static int VAR_20 = -1;

 if ((FUNC_10(VAR_4) & VAR_5)) {

  return VAR_1;
 }

 VAR_15 = 0;
 do {
  VAR_15++;
  VAR_17 = FUNC_10(VAR_6);
  if (VAR_15 > VAR_3) {
   FUNC_0(&VAR_10.pdev->dev, "Trapped in interrupt");
   break;
  }
  if ((VAR_17 & VAR_7[VAR_11].signal_pin_change) &&
      VAR_9 != -1) {

   VAR_14 = FUNC_4();
   VAR_16 = (VAR_17 & VAR_7[VAR_11].signal_pin) ? 1 : 0;

   if (VAR_16 == VAR_20) {
    FUNC_0(&VAR_10.pdev->dev,
     "ignoring spike: %d %d %lldns %lldns\n",
     VAR_16, VAR_9, FUNC_7(VAR_14),
     FUNC_7(VAR_10.lastkt));
    continue;
   }

   VAR_18 = FUNC_6(VAR_14, VAR_10.lastkt);
   if (FUNC_3(VAR_18, FUNC_5(15, 0)) > 0) {
    VAR_19 = VAR_2;
    if (!(VAR_16 ^ VAR_9)) {

     FUNC_0(&VAR_10.pdev->dev,
      "dcd unexpected: %d %d %lldns %lldns\n",
      VAR_16, VAR_9, FUNC_7(VAR_14),
      FUNC_7(VAR_10.lastkt));




     VAR_9 = VAR_9 ? 0 : 1;
    }
   } else {
    VAR_19 = FUNC_7(VAR_18);
   }
   FUNC_1(VAR_19, !(VAR_16 ^ VAR_9));
   VAR_10.lastkt = VAR_14;
   VAR_20 = VAR_16;
  }
 } while (!(FUNC_10(VAR_4) & VAR_5));

 FUNC_8(&VAR_10.timeout_timer,
    VAR_8 + FUNC_9(VAR_10.rcdev->timeout));

 FUNC_2(VAR_10.rcdev);

 return VAR_0;
}
