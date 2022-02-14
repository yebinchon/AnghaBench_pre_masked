
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cas {unsigned int* rx_old; int cas_flags; int* rx_last; scalar_t__ regs; TYPE_1__** init_rxds; int rx_inuse_lock; int rx_inuse_list; int link_timer; int dev; TYPE_2__*** rx_pages; } ;
struct TYPE_5__ {int dma_addr; int list; int buffer; } ;
typedef TYPE_2__ cas_page_t ;
struct TYPE_4__ {int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_1 (int,unsigned int) ;
 TYPE_2__* FUNC_2 (struct cas*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct cas*,int ,int ,int ,char*,int,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct cas *VAR_9, int VAR_10, int VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 cas_page_t **VAR_17 = VAR_9->rx_pages[VAR_10];

 VAR_12 = VAR_9->rx_old[VAR_10];

 FUNC_6(VAR_9, VAR_7, VAR_3, VAR_9->dev,
       "rxd[%d] interrupt, done: %d\n", VAR_10, VAR_12);

 VAR_16 = -1;
 VAR_14 = VAR_12 & 0x3;
 VAR_13 = FUNC_1(VAR_10, VAR_11 ? VAR_12 + VAR_11 - 4: VAR_12 - 4);
 VAR_15 = 0;
 while (VAR_12 != VAR_13) {

  if (FUNC_7(VAR_17[VAR_12]->buffer) > 1) {
   cas_page_t *VAR_18 = FUNC_2(VAR_9);
   if (!VAR_18) {



    VAR_9->cas_flags |= FUNC_0(VAR_10);
    if (!FUNC_10(&VAR_9->link_timer))
     FUNC_5(&VAR_9->link_timer, VAR_8 +
        VAR_1);
    VAR_9->rx_old[VAR_10] = VAR_12;
    VAR_9->rx_last[VAR_10] = VAR_11 ? VAR_11 - VAR_15 : 0;
    return -VAR_2;
   }
   FUNC_8(&VAR_9->rx_inuse_lock);
   FUNC_4(&VAR_17[VAR_12]->list, &VAR_9->rx_inuse_list);
   FUNC_9(&VAR_9->rx_inuse_lock);
   VAR_9->init_rxds[VAR_10][VAR_12].buffer =
    FUNC_3(VAR_18->dma_addr);
   VAR_17[VAR_12] = VAR_18;

  }

  if (++VAR_14 == 4) {
   VAR_16 = VAR_12;
   VAR_14 = 0;
  }
  VAR_15++;
  VAR_12 = FUNC_1(VAR_10, VAR_12 + 1);
 }
 VAR_9->rx_old[VAR_10] = VAR_12;

 if (VAR_16 < 0)
  return 0;

 if (VAR_10 == 0)
  FUNC_11(VAR_16, VAR_9->regs + VAR_6);
 else if ((VAR_4 > 1) &&
   (VAR_9->cas_flags & VAR_0))
  FUNC_11(VAR_16, VAR_9->regs + VAR_5);
 return 0;
}
