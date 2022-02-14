
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbnet_ring {int prod; int ring; struct tbnet_frame* frames; } ;
struct TYPE_2__ {int buffer_phy; } ;
struct tbnet_frame {TYPE_1__ frame; int dev; scalar_t__ page; } ;
struct tbnet {int dev; struct tbnet_ring rx_ring; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct tbnet_ring*) ;

__attribute__((used)) static int FUNC_6(struct tbnet *VAR_5, unsigned int VAR_6)
{
 struct tbnet_ring *VAR_7 = &VAR_5->rx_ring;
 int VAR_8;

 while (VAR_6--) {
  struct device *VAR_9 = FUNC_3(VAR_7->ring);
  unsigned int VAR_10 = VAR_7->prod & (VAR_2 - 1);
  struct tbnet_frame *VAR_11 = &VAR_7->frames[VAR_10];
  dma_addr_t VAR_12;

  if (VAR_11->page)
   break;





  VAR_11->page = FUNC_0(VAR_3);
  if (!VAR_11->page) {
   VAR_8 = -VAR_1;
   goto err_free;
  }

  VAR_12 = FUNC_1(VAR_9, VAR_11->page, 0,
     VAR_4, VAR_0);
  if (FUNC_2(VAR_9, VAR_12)) {
   VAR_8 = -VAR_1;
   goto err_free;
  }

  VAR_11->frame.buffer_phy = VAR_12;
  VAR_11->dev = VAR_5->dev;

  FUNC_4(VAR_7->ring, &VAR_11->frame);

  VAR_7->prod++;
 }

 return 0;

err_free:
 FUNC_5(VAR_7);
 return VAR_8;
}
