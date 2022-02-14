
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rx_std; } ;
struct tg3_napi {TYPE_1__ prodring; TYPE_2__* rx_rcb; scalar_t__ rx_rcb_ptr; TYPE_2__* tx_ring; scalar_t__ tx_cons; scalar_t__ tx_prod; TYPE_2__* hw_status; scalar_t__ last_irq_tag; scalar_t__ last_tag; } ;
struct tg3 {int irq_cnt; struct tg3_napi* napi; } ;
struct TYPE_4__ {scalar_t__ status_tag; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tg3*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (struct tg3*) ;
 scalar_t__ FUNC_3 (struct tg3*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_3)
{
 int VAR_4;


 FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->irq_cnt; VAR_4++) {
  struct tg3_napi *VAR_5 = &VAR_3->napi[VAR_4];

  VAR_5->last_tag = 0;
  VAR_5->last_irq_tag = 0;
  VAR_5->hw_status->status = 0;
  VAR_5->hw_status->status_tag = 0;
  FUNC_1(VAR_5->hw_status, 0, VAR_1);

  VAR_5->tx_prod = 0;
  VAR_5->tx_cons = 0;
  if (VAR_5->tx_ring)
   FUNC_1(VAR_5->tx_ring, 0, VAR_2);

  VAR_5->rx_rcb_ptr = 0;
  if (VAR_5->rx_rcb)
   FUNC_1(VAR_5->rx_rcb, 0, FUNC_0(VAR_3));

  if (VAR_5->prodring.rx_std &&
      FUNC_3(VAR_3, &VAR_5->prodring)) {
   FUNC_2(VAR_3);
   return -VAR_0;
  }
 }

 return 0;
}
