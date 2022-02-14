
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_device {int upr_list; TYPE_1__* pdev; int napi; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,struct slic_device*) ;
 int FUNC_1 (int *) ;
 struct slic_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct slic_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct slic_device*) ;
 int FUNC_8 (struct slic_device*) ;
 int FUNC_9 (struct slic_device*) ;
 int FUNC_10 (struct slic_device*) ;
 int FUNC_11 (struct slic_device*) ;
 int FUNC_12 (struct slic_device*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_16)
{
 struct slic_device *VAR_17 = FUNC_2(VAR_16);
 u32 VAR_18;

 FUNC_4(VAR_16);


 FUNC_1(&VAR_17->napi);
 FUNC_12(VAR_17, VAR_10, VAR_9);
 FUNC_12(VAR_17, VAR_11, 0);
 FUNC_7(VAR_17);

 FUNC_0(VAR_17->pdev->irq, VAR_17);

 VAR_18 = VAR_8 | VAR_7;
 FUNC_12(VAR_17, VAR_15, VAR_18);

 VAR_18 = VAR_6 | VAR_3 | VAR_2 |
       VAR_4 << VAR_5;
 FUNC_12(VAR_17, VAR_14, VAR_18);

 VAR_18 = VAR_1 << 16 | VAR_0;
 FUNC_12(VAR_17, VAR_13, VAR_18);
 FUNC_7(VAR_17);

 FUNC_6(&VAR_17->upr_list);
 FUNC_12(VAR_17, VAR_12, 0);

 FUNC_10(VAR_17);
 FUNC_11(VAR_17);
 FUNC_8(VAR_17);
 FUNC_9(VAR_17);

 FUNC_5(VAR_17);
 FUNC_3(VAR_16);

 return 0;
}
