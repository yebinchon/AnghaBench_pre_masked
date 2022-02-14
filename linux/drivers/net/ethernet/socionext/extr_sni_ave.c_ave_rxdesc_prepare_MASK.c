
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; int tail; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {TYPE_2__* desc; } ;
struct ave_private {TYPE_1__ rx; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct sk_buff* skbs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int ,int,int ) ;
 int FUNC_1 (struct net_device*,int ,int,int) ;
 int FUNC_2 (struct net_device*,TYPE_2__*,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct ave_private* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, int VAR_8)
{
 struct ave_private *VAR_9 = FUNC_6(VAR_7);
 struct sk_buff *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;

 VAR_10 = VAR_9->rx.desc[VAR_8].skbs;
 if (!VAR_10) {
  VAR_10 = FUNC_4(VAR_7, VAR_2);
  if (!VAR_10) {
   FUNC_5(VAR_7, "can't allocate skb for Rx\n");
   return -VAR_6;
  }
  VAR_10->data += VAR_1;
  VAR_10->tail += VAR_1;
 }


 FUNC_1(VAR_7, VAR_0, VAR_8,
         VAR_3 | VAR_4);
 VAR_12 = FUNC_2(VAR_7, &VAR_9->rx.desc[VAR_8],
     VAR_10->data - VAR_1,
     VAR_2 + VAR_1,
     VAR_5, &VAR_11);
 if (VAR_12) {
  FUNC_5(VAR_7, "can't map skb for Rx\n");
  FUNC_3(VAR_10);
  return VAR_12;
 }
 VAR_9->rx.desc[VAR_8].skbs = VAR_10;


 FUNC_0(VAR_7, VAR_0, VAR_8, VAR_11);


 FUNC_1(VAR_7, VAR_0, VAR_8,
         VAR_3 | VAR_2);

 return VAR_12;
}
