
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsi108_prv_data {int rxfree; int rxhead; TYPE_2__* rxring; TYPE_1__* pdev; struct sk_buff** rxskbs; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int misc; int blen; int buf0; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (struct net_device*,int ) ;
 struct tsi108_prv_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct tsi108_prv_data*,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8, int VAR_9)
{
 struct tsi108_prv_data *VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = 0;

 while (VAR_10->rxfree != VAR_4 && VAR_11 != VAR_9) {
  int VAR_12 = VAR_10->rxhead;
  struct sk_buff *VAR_13;

  VAR_13 = FUNC_2(VAR_8, VAR_3);
  VAR_10->rxskbs[VAR_12] = VAR_13;
  if (!VAR_13)
   break;

  VAR_10->rxring[VAR_12].buf0 = FUNC_1(&VAR_10->pdev->dev,
    VAR_13->data, VAR_7,
    VAR_0);






  VAR_10->rxring[VAR_12].blen = VAR_7;
  VAR_10->rxring[VAR_12].misc = VAR_6 | VAR_5;

  VAR_10->rxhead = (VAR_10->rxhead + 1) % VAR_4;
  VAR_10->rxfree++;
  VAR_11++;
 }

 if (VAR_11 != 0 && !(FUNC_0(VAR_1) &
      VAR_2))
  FUNC_4(VAR_10, VAR_8);

 return VAR_11;
}
