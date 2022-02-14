
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ rx_copybreak; scalar_t__ rx_align; TYPE_1__* pdev; } ;
struct bufdesc {int cbd_bufaddr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct net_device*,scalar_t__) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_2, struct sk_buff **VAR_3,
          struct bufdesc *VAR_4, u32 VAR_5, bool VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_4(VAR_2);
 struct sk_buff *VAR_8;

 if (VAR_5 > VAR_7->rx_copybreak)
  return 0;

 VAR_8 = FUNC_3(VAR_2, VAR_5);
 if (!VAR_8)
  return 0;

 FUNC_0(&VAR_7->pdev->dev,
    FUNC_1(VAR_4->cbd_bufaddr),
    VAR_1 - VAR_7->rx_align,
    VAR_0);
 if (!VAR_6)
  FUNC_2(VAR_8->data, (*VAR_3)->data, VAR_5);
 else
  FUNC_5(VAR_8->data, (*VAR_3)->data, VAR_5);
 *VAR_3 = VAR_8;

 return 1;
}
