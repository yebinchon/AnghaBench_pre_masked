
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct page {int dummy; } ;
struct dpaa2_eth_priv {TYPE_2__* net_dev; } ;
struct dpaa2_eth_channel {int dpio; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 () ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct page*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (struct dpaa2_eth_priv*,int *,int) ;
 int FUNC_7 (TYPE_2__*,struct page*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct dpaa2_eth_priv *VAR_5,
      struct dpaa2_eth_channel *VAR_6, u16 VAR_7)
{
 struct device *VAR_8 = VAR_5->net_dev->dev.parent;
 u64 VAR_9[VAR_1];
 struct page *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {







  VAR_10 = FUNC_2(0);
  if (!VAR_10)
   goto err_alloc;

  VAR_11 = FUNC_3(VAR_8, VAR_10, 0, VAR_3,
        VAR_0);
  if (FUNC_8(FUNC_4(VAR_8, VAR_11)))
   goto err_map;

  VAR_9[VAR_12] = VAR_11;


  FUNC_7(VAR_5->net_dev,
      VAR_10, VAR_2,
      VAR_11, VAR_3,
      VAR_7);
 }

release_bufs:

 while ((VAR_13 = FUNC_5(VAR_6->dpio, VAR_7,
            VAR_9, VAR_12)) == -VAR_4)
  FUNC_1();




 if (VAR_13) {
  FUNC_6(VAR_5, VAR_9, VAR_12);
  return 0;
 }

 return VAR_12;

err_map:
 FUNC_0(VAR_10, 0);
err_alloc:



 if (VAR_12)
  goto release_bufs;

 return 0;
}
