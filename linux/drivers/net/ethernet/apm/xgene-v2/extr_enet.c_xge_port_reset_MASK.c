
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xge_pdata {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct xge_pdata*,int ) ;
 int FUNC_4 (struct xge_pdata*,int ,int) ;

int FUNC_5(struct net_device *VAR_9)
{
 struct xge_pdata *VAR_10 = FUNC_1(VAR_9);
 struct device *VAR_11 = &VAR_10->pdev->dev;
 u32 VAR_12, VAR_13 = 10;

 FUNC_4(VAR_10, VAR_4, 0x3);
 FUNC_4(VAR_10, VAR_6, 0xf);
 FUNC_4(VAR_10, VAR_6, 0);
 FUNC_4(VAR_10, VAR_1, 1);
 FUNC_4(VAR_10, VAR_1, 0);

 do {
  FUNC_2(100, 110);
  VAR_12 = FUNC_3(VAR_10, VAR_0);
 } while (VAR_12 != VAR_8 && VAR_13--);

 if (VAR_12 != VAR_8) {
  FUNC_0(VAR_11, "ECC init failed: %x\n", VAR_12);
  return -VAR_7;
 }

 FUNC_4(VAR_10, VAR_5, VAR_2 | VAR_3);

 return 0;
}
