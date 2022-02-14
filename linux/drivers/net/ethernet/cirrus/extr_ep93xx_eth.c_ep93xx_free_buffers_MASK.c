
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ep93xx_priv {TYPE_5__* descs; int descs_dma_addr; int * tx_buf; int * rx_buf; TYPE_2__* dev; } ;
struct ep93xx_descs {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {TYPE_4__* tdesc; TYPE_3__* rdesc; } ;
struct TYPE_9__ {scalar_t__ buf_addr; } ;
struct TYPE_8__ {scalar_t__ buf_addr; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int,TYPE_5__*,int ) ;
 int FUNC_1 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ep93xx_priv *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev->dev.parent;
 int VAR_7;

 if (!VAR_5->descs)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  dma_addr_t VAR_8;

  VAR_8 = VAR_5->descs->rdesc[VAR_7].buf_addr;
  if (VAR_8)
   FUNC_1(VAR_6, VAR_8, VAR_2, VAR_0);

  FUNC_2(VAR_5->rx_buf[VAR_7]);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  dma_addr_t VAR_9;

  VAR_9 = VAR_5->descs->tdesc[VAR_7].buf_addr;
  if (VAR_9)
   FUNC_1(VAR_6, VAR_9, VAR_2, VAR_1);

  FUNC_2(VAR_5->tx_buf[VAR_7]);
 }

 FUNC_0(VAR_6, sizeof(struct ep93xx_descs), VAR_5->descs,
       VAR_5->descs_dma_addr);
 VAR_5->descs = ((void*)0);
}
