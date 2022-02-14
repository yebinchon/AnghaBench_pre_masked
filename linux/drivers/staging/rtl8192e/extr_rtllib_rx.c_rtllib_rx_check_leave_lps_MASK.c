
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int NumRxUnicastOkInPeriod; int NumTxOkInPeriod; } ;
struct rtllib_device {scalar_t__ state; int last_rx_ps_time; int dev; int (* LeisurePSLeave ) (int ) ;TYPE_1__ LinkDetectInfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rtllib_device *VAR_2, u8 VAR_3,
          u8 VAR_4)
{
 if (VAR_3) {

  if (VAR_2->state == VAR_0) {
   if (((VAR_2->LinkDetectInfo.NumRxUnicastOkInPeriod +
       VAR_2->LinkDetectInfo.NumTxOkInPeriod) > 8) ||
       (VAR_2->LinkDetectInfo.NumRxUnicastOkInPeriod > 2)) {
    if (VAR_2->LeisurePSLeave)
     VAR_2->LeisurePSLeave(VAR_2->dev);
   }
  }
 }
 VAR_2->last_rx_ps_time = VAR_1;
}
