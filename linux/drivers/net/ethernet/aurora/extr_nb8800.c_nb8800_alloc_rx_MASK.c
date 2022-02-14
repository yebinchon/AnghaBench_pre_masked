
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct net_device {int dev; } ;
struct TYPE_2__ {int s_addr; } ;
struct nb8800_rx_desc {TYPE_1__ desc; } ;
struct nb8800_rx_buf {unsigned long offset; struct page* page; } ;
struct nb8800_priv {struct nb8800_rx_buf* rx_bufs; struct nb8800_rx_desc* rx_descs; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct page*,unsigned long,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 struct nb8800_priv* FUNC_5 (struct net_device*) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (void*) ;
 struct page* FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3, unsigned int VAR_4, bool VAR_5)
{
 struct nb8800_priv *VAR_6 = FUNC_5(VAR_3);
 struct nb8800_rx_desc *VAR_7 = &VAR_6->rx_descs[VAR_4];
 struct nb8800_rx_buf *VAR_8 = &VAR_6->rx_bufs[VAR_4];
 int VAR_9 = FUNC_0(VAR_2);
 dma_addr_t VAR_10;
 struct page *VAR_11;
 unsigned long VAR_12;
 void *VAR_13;

 VAR_13 = VAR_5 ? FUNC_3(VAR_9) : FUNC_4(VAR_9);
 if (!VAR_13)
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_13);
 VAR_12 = VAR_13 - FUNC_6(VAR_11);

 VAR_10 = FUNC_1(&VAR_3->dev, VAR_11, VAR_12, VAR_2,
    VAR_0);

 if (FUNC_2(&VAR_3->dev, VAR_10)) {
  FUNC_7(VAR_13);
  return -VAR_1;
 }

 VAR_8->page = VAR_11;
 VAR_8->offset = VAR_12;
 VAR_7->desc.s_addr = VAR_10;

 return 0;
}
