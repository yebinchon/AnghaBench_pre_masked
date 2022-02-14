
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_hw_descr {int dmac_cmd_status; } ;
struct spider_net_descr {struct spider_net_hw_descr* hwdescr; struct spider_net_descr* next; } ;
struct TYPE_2__ {int num_desc; int lock; struct spider_net_descr* tail; struct spider_net_descr* head; } ;
struct spider_net_card {TYPE_1__ tx_chain; struct spider_net_descr* low_watermark; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct spider_net_card *VAR_2)
{
 struct spider_net_descr *VAR_3 = VAR_2->tx_chain.tail;
 struct spider_net_hw_descr *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7=0;
 int VAR_8;



 while (VAR_3 != VAR_2->tx_chain.head) {
  VAR_6 = VAR_3->hwdescr->dmac_cmd_status & VAR_0;
  if (VAR_6 == VAR_0)
   break;
  VAR_3 = VAR_3->next;
  VAR_7++;
 }


 if (VAR_7 < VAR_2->tx_chain.num_desc/4)
  return VAR_7;


 VAR_3 = VAR_2->tx_chain.tail;
 VAR_7 = (VAR_7*3)/4;
 for (VAR_8=0;VAR_8<VAR_7; VAR_8++)
  VAR_3 = VAR_3->next;


 FUNC_0(&VAR_2->tx_chain.lock, VAR_5);
 VAR_3->hwdescr->dmac_cmd_status |= VAR_1;
 if (VAR_2->low_watermark && VAR_2->low_watermark != VAR_3) {
  VAR_4 = VAR_2->low_watermark->hwdescr;
  VAR_4->dmac_cmd_status =
       VAR_4->dmac_cmd_status & ~VAR_1;
 }
 VAR_2->low_watermark = VAR_3;
 FUNC_1(&VAR_2->tx_chain.lock, VAR_5);
 return VAR_7;
}
