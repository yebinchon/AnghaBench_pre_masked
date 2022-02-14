
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; struct net_device* netdev; } ;
struct net_device {int dev; } ;
struct TYPE_2__ {scalar_t__ temp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

int FUNC_8(struct qlcnic_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 u32 VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10 = 0;

 if (FUNC_5(VAR_5))
  VAR_9 = FUNC_0(VAR_5->ahw, VAR_4);

 if (FUNC_4(VAR_5))
  VAR_9 = FUNC_1(VAR_5, VAR_0);

 VAR_7 = FUNC_6(VAR_9);
 VAR_8 = FUNC_7(VAR_9);

 if (VAR_7 == VAR_2) {
  FUNC_2(&VAR_6->dev,
         "Device temperature %d degrees C exceeds"
         " maximum allowed. Hardware has been shut down.\n",
         VAR_8);
  VAR_10 = 1;
 } else if (VAR_7 == VAR_3) {
  if (VAR_5->ahw->temp == VAR_1) {
   FUNC_2(&VAR_6->dev,
          "Device temperature %d degrees C "
          "exceeds operating range."
          " Immediate action needed.\n",
          VAR_8);
  }
 } else {
  if (VAR_5->ahw->temp == VAR_3) {
   FUNC_3(&VAR_6->dev,
          "Device temperature is now %d degrees C"
          " in normal range.\n", VAR_8);
  }
 }
 VAR_5->ahw->temp = VAR_7;
 return VAR_10;
}
