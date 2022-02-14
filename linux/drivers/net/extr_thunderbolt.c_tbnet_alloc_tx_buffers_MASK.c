
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbnet_ring {unsigned int prod; scalar_t__ cons; struct tbnet_frame* frames; int ring; } ;
struct TYPE_2__ {int eof; int sof; int callback; int buffer_phy; } ;
struct tbnet_frame {TYPE_1__ frame; int dev; int * page; } ;
struct tbnet {int dev; struct tbnet_ring tx_ring; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (struct tbnet_ring*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct tbnet *VAR_8)
{
 struct tbnet_ring *VAR_9 = &VAR_8->tx_ring;
 struct device *VAR_10 = FUNC_4(VAR_9->ring);
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  struct tbnet_frame *VAR_12 = &VAR_9->frames[VAR_11];
  dma_addr_t VAR_13;

  VAR_12->page = FUNC_1(VAR_2);
  if (!VAR_12->page) {
   FUNC_5(VAR_9);
   return -VAR_1;
  }

  VAR_13 = FUNC_2(VAR_10, VAR_12->page, 0, VAR_5,
     VAR_0);
  if (FUNC_3(VAR_10, VAR_13)) {
   FUNC_0(VAR_12->page);
   VAR_12->page = ((void*)0);
   FUNC_5(VAR_9);
   return -VAR_1;
  }

  VAR_12->dev = VAR_8->dev;
  VAR_12->frame.buffer_phy = VAR_13;
  VAR_12->frame.callback = VAR_7;
  VAR_12->frame.sof = VAR_4;
  VAR_12->frame.eof = VAR_3;
 }

 VAR_9->cons = 0;
 VAR_9->prod = VAR_6 - 1;

 return 0;
}
