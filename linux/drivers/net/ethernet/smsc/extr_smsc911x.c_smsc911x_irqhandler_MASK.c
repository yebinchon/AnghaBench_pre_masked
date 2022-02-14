
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc911x_data {int software_irq_signal; int napi; scalar_t__ multicast_update_pending; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 struct smsc911x_data* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_14 ;
 int FUNC_7 () ;
 int FUNC_8 (struct smsc911x_data*,int ) ;
 int FUNC_9 (struct smsc911x_data*,int ,int) ;
 int FUNC_10 (struct smsc911x_data*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = VAR_16;
 struct smsc911x_data *VAR_18 = FUNC_5(VAR_17);
 u32 VAR_19 = FUNC_8(VAR_18, VAR_5);
 u32 VAR_20 = FUNC_8(VAR_18, VAR_2);
 int VAR_21 = VAR_12;
 u32 VAR_22;

 if (FUNC_11(VAR_19 & VAR_20 & VAR_9)) {
  VAR_22 = FUNC_8(VAR_18, VAR_2);
  VAR_22 &= (~VAR_4);
  FUNC_9(VAR_18, VAR_2, VAR_22);
  FUNC_9(VAR_18, VAR_5, VAR_9);
  VAR_18->software_irq_signal = 1;
  FUNC_7();
  VAR_21 = VAR_11;
 }

 if (FUNC_11(VAR_19 & VAR_20 & VAR_8)) {


  FUNC_0(VAR_18, VAR_13, "RX Stop interrupt");
  FUNC_9(VAR_18, VAR_5, VAR_8);
  if (VAR_18->multicast_update_pending)
   FUNC_10(VAR_18);
  VAR_21 = VAR_11;
 }

 if (VAR_19 & VAR_20 & VAR_10) {
  VAR_22 = FUNC_8(VAR_18, VAR_0);
  VAR_22 |= VAR_1;
  FUNC_9(VAR_18, VAR_0, VAR_22);
  FUNC_9(VAR_18, VAR_5, VAR_10);
  FUNC_6(VAR_17);
  VAR_21 = VAR_11;
 }

 if (FUNC_11(VAR_19 & VAR_20 & VAR_7)) {
  FUNC_0(VAR_18, VAR_13, "RX Error interrupt");
  FUNC_9(VAR_18, VAR_5, VAR_7);
  VAR_21 = VAR_11;
 }

 if (FUNC_3(VAR_19 & VAR_20 & VAR_6)) {
  if (FUNC_3(FUNC_4(&VAR_18->napi))) {

   VAR_22 = FUNC_8(VAR_18, VAR_2);
   VAR_22 &= (~VAR_3);
   FUNC_9(VAR_18, VAR_2, VAR_22);

   FUNC_2(&VAR_18->napi);
  } else {
   FUNC_1(VAR_18, VAR_14, "napi_schedule_prep failed");
  }
  VAR_21 = VAR_11;
 }

 return VAR_21;
}
