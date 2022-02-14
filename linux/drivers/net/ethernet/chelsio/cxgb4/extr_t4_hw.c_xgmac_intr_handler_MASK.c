
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int,int) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;

 if (FUNC_3(VAR_4->params.chip))
  VAR_7 = FUNC_0(VAR_5, VAR_3);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_0);

 VAR_6 = FUNC_5(VAR_4, VAR_7);

 VAR_6 &= VAR_2 | VAR_1;
 if (!VAR_6)
  return;

 if (VAR_6 & VAR_2)
  FUNC_2(VAR_4->pdev_dev, "XGMAC %d Tx FIFO parity error\n",
     VAR_5);
 if (VAR_6 & VAR_1)
  FUNC_2(VAR_4->pdev_dev, "XGMAC %d Rx FIFO parity error\n",
     VAR_5);
 FUNC_6(VAR_4, FUNC_0(VAR_5, VAR_3), VAR_6);
 FUNC_4(VAR_4);
}
