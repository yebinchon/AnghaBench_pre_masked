
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_6)
{
 u32 VAR_7, VAR_8 = FUNC_5(VAR_6, VAR_0);

 if (VAR_8 & VAR_4) {
  FUNC_2(VAR_6->pdev_dev,
     "MA parity error, parity status %#x\n",
     FUNC_5(VAR_6, VAR_2));
  if (FUNC_3(VAR_6->params.chip))
   FUNC_2(VAR_6->pdev_dev,
      "MA parity error, parity status %#x\n",
      FUNC_5(VAR_6,
           VAR_3));
 }
 if (VAR_8 & VAR_5) {
  VAR_7 = FUNC_5(VAR_6, VAR_1);
  FUNC_2(VAR_6->pdev_dev, "MA address wrap-around error by "
     "client %u to address %#x\n",
     FUNC_1(VAR_7),
     FUNC_0(VAR_7) << 4);
 }
 FUNC_6(VAR_6, VAR_0, VAR_8);
 FUNC_4(VAR_6);
}
