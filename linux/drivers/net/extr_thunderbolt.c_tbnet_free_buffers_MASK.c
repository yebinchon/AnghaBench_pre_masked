
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbnet_ring {scalar_t__ prod; scalar_t__ cons; TYPE_2__* ring; struct tbnet_frame* frames; } ;
struct TYPE_3__ {scalar_t__ buffer_phy; } ;
struct tbnet_frame {int * page; TYPE_1__ frame; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {scalar_t__ is_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (struct device*,scalar_t__,size_t,int) ;
 struct device* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct tbnet_ring *VAR_6)
{
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct device *VAR_8 = FUNC_2(VAR_6->ring);
  struct tbnet_frame *VAR_9 = &VAR_6->frames[VAR_7];
  enum dma_data_direction VAR_10;
  unsigned int VAR_11;
  size_t VAR_12;

  if (!VAR_9->page)
   continue;

  if (VAR_6->ring->is_tx) {
   VAR_10 = VAR_1;
   VAR_11 = 0;
   VAR_12 = VAR_2;
  } else {
   VAR_10 = VAR_0;
   VAR_11 = VAR_4;
   VAR_12 = VAR_5;
  }

  if (VAR_9->frame.buffer_phy)
   FUNC_1(VAR_8, VAR_9->frame.buffer_phy, VAR_12,
           VAR_10);

  FUNC_0(VAR_9->page, VAR_11);
  VAR_9->page = ((void*)0);
 }

 VAR_6->cons = 0;
 VAR_6->prod = 0;
}
