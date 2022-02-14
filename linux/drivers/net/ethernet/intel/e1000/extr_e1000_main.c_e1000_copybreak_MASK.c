
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct e1000_rx_buffer {int dma; } ;
struct e1000_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 struct sk_buff* FUNC_1 (struct e1000_adapter*,int ) ;
 int FUNC_2 (struct sk_buff*,void const*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct e1000_adapter *VAR_2,
           struct e1000_rx_buffer *VAR_3,
           u32 VAR_4, const void *VAR_5)
{
 struct sk_buff *VAR_6;

 if (VAR_4 > VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 FUNC_0(&VAR_2->pdev->dev, VAR_3->dma,
    VAR_4, VAR_0);

 FUNC_2(VAR_6, VAR_5, VAR_4);

 return VAR_6;
}
