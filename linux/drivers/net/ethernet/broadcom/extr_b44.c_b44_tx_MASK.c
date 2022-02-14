
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct ring_info {struct sk_buff* skb; int mapping; } ;
struct dma_desc {int dummy; } ;
struct b44 {int tx_cons; int dev; TYPE_1__* sdev; struct ring_info* tx_buffers; } ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct b44 *VAR_5)
{
 u32 VAR_6, VAR_7;
 unsigned VAR_8 = 0, VAR_9 = 0;

 VAR_6 = FUNC_3(VAR_5, VAR_0) & VAR_3;
 VAR_6 /= sizeof(struct dma_desc);


 for (VAR_7 = VAR_5->tx_cons; VAR_7 != VAR_6; VAR_7 = FUNC_1(VAR_7)) {
  struct ring_info *VAR_10 = &VAR_5->tx_buffers[VAR_7];
  struct sk_buff *VAR_11 = VAR_10->skb;

  FUNC_0(VAR_11 == ((void*)0));

  FUNC_6(VAR_5->sdev->dma_dev,
     VAR_10->mapping,
     VAR_11->len,
     VAR_4);
  VAR_10->skb = ((void*)0);

  VAR_8 += VAR_11->len;
  VAR_9++;

  FUNC_5(VAR_11);
 }

 FUNC_7(VAR_5->dev, VAR_9, VAR_8);
 VAR_5->tx_cons = VAR_7;
 if (FUNC_8(VAR_5->dev) &&
     FUNC_2(VAR_5) > VAR_2)
  FUNC_9(VAR_5->dev);

 FUNC_4(VAR_5, VAR_1, 0);
}
