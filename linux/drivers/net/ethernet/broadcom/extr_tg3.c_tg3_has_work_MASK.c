
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_napi {scalar_t__ tx_cons; scalar_t__* rx_rcb_prod_idx; scalar_t__ rx_rcb_ptr; struct tg3_hw_status* hw_status; struct tg3* tp; } ;
struct tg3_hw_status {int status; TYPE_1__* idx; } ;
struct tg3 {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct tg3_napi *VAR_3)
{
 struct tg3 *VAR_4 = VAR_3->tp;
 struct tg3_hw_status *VAR_5 = VAR_3->hw_status;
 unsigned int VAR_6 = 0;


 if (!(FUNC_0(VAR_4, VAR_2) || FUNC_0(VAR_4, VAR_0))) {
  if (VAR_5->status & VAR_1)
   VAR_6 = 1;
 }


 if (VAR_5->idx[0].tx_consumer != VAR_3->tx_cons)
  VAR_6 = 1;


 if (VAR_3->rx_rcb_prod_idx &&
     *(VAR_3->rx_rcb_prod_idx) != VAR_3->rx_rcb_ptr)
  VAR_6 = 1;

 return VAR_6;
}
