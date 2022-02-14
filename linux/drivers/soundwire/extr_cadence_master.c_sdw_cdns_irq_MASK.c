
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdw_cdns {int dev; int tx_complete; TYPE_1__* defer; int link_up; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int complete; int length; int msg; } ;


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
 int FUNC_0 (struct sdw_cdns*,int ,int ,int ) ;
 int FUNC_1 (struct sdw_cdns*) ;
 int FUNC_2 (struct sdw_cdns*,int ) ;
 int FUNC_3 (struct sdw_cdns*,int ,int,int ) ;
 int FUNC_4 (struct sdw_cdns*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;

irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct sdw_cdns *VAR_13 = VAR_12;
 u32 VAR_14;
 int VAR_15 = VAR_8;


 if (!VAR_13->link_up)
  return VAR_9;

 VAR_14 = FUNC_2(VAR_13, VAR_1);

 if (!(VAR_14 & VAR_4))
  return VAR_9;

 if (VAR_14 & VAR_6) {
  FUNC_1(VAR_13);

  if (VAR_13->defer) {
   FUNC_0(VAR_13, VAR_13->defer->msg,
        VAR_13->defer->length, 0);
   FUNC_5(&VAR_13->defer->complete);
   VAR_13->defer = ((void*)0);
  } else {
   FUNC_5(&VAR_13->tx_complete);
  }
 }

 if (VAR_14 & VAR_5) {

  FUNC_6(VAR_13->dev, "Parity error\n");
 }

 if (VAR_14 & VAR_2) {

  FUNC_6(VAR_13->dev, "Bus clash for control word\n");
 }

 if (VAR_14 & VAR_3) {




  FUNC_6(VAR_13->dev, "Bus clash for data word\n");
 }

 if (VAR_14 & VAR_7) {

  FUNC_3(VAR_13, VAR_0,
        VAR_7, 0);

  VAR_14 &= ~VAR_7;
  VAR_15 = VAR_10;
 }

 FUNC_4(VAR_13, VAR_1, VAR_14);
 return VAR_15;
}
