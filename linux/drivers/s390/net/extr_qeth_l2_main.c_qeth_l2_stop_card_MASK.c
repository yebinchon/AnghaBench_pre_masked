
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_bits; } ;
struct qeth_card {scalar_t__ state; TYPE_1__ info; int event_wq; int rx_mode_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int ) ;
 int FUNC_8 (struct qeth_card*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct qeth_card *VAR_4)
{
 FUNC_0(VAR_4, 2, "stopcard");

 FUNC_8(VAR_4, 0, 1);

 FUNC_1(&VAR_4->rx_mode_work);
 FUNC_6(VAR_4);

 if (VAR_4->state == VAR_2) {
  FUNC_3(VAR_4);
  VAR_4->state = VAR_1;
 }
 if (VAR_4->state == VAR_1) {
  FUNC_7(VAR_4, 0);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
  VAR_4->state = VAR_0;
 }

 FUNC_2(VAR_4->event_wq);
 VAR_4->info.mac_bits &= ~VAR_3;
}
