
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ep93xx_priv {TYPE_5__* descs; void** tx_buf; void** rx_buf; int descs_dma_addr; TYPE_2__* dev; } ;
struct ep93xx_descs {int dummy; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_10__ {TYPE_4__* tdesc; TYPE_3__* rdesc; } ;
struct TYPE_9__ {void* buf_addr; } ;
struct TYPE_8__ {int rdesc1; void* buf_addr; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (struct device*,int,int *,int ) ;
 void* FUNC_1 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct ep93xx_priv*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct ep93xx_priv *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev->dev.parent;
 int VAR_8;

 VAR_6->descs = FUNC_0(VAR_7, sizeof(struct ep93xx_descs),
    &VAR_6->descs_dma_addr, VAR_2);
 if (VAR_6->descs == ((void*)0))
  return 1;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  void *VAR_9;
  dma_addr_t VAR_10;

  VAR_9 = FUNC_5(VAR_3, VAR_2);
  if (VAR_9 == ((void*)0))
   goto err;

  VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_3, VAR_0);
  if (FUNC_2(VAR_7, VAR_10)) {
   FUNC_4(VAR_9);
   goto err;
  }

  VAR_6->rx_buf[VAR_8] = VAR_9;
  VAR_6->descs->rdesc[VAR_8].buf_addr = VAR_10;
  VAR_6->descs->rdesc[VAR_8].rdesc1 = (VAR_8 << 16) | VAR_3;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  void *VAR_11;
  dma_addr_t VAR_12;

  VAR_11 = FUNC_5(VAR_3, VAR_2);
  if (VAR_11 == ((void*)0))
   goto err;

  VAR_12 = FUNC_1(VAR_7, VAR_11, VAR_3, VAR_1);
  if (FUNC_2(VAR_7, VAR_12)) {
   FUNC_4(VAR_11);
   goto err;
  }

  VAR_6->tx_buf[VAR_8] = VAR_11;
  VAR_6->descs->tdesc[VAR_8].buf_addr = VAR_12;
 }

 return 0;

err:
 FUNC_3(VAR_6);
 return 1;
}
