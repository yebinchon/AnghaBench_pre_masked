
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ promisc_mode; } ;
struct TYPE_3__ {scalar_t__ sniffer; } ;
struct qeth_card {scalar_t__ state; int event_wq; TYPE_2__ info; TYPE_1__ options; int rx_mode_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*,int ) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (struct qeth_card*,int ) ;
 int FUNC_10 (struct qeth_card*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct qeth_card *VAR_5)
{
 FUNC_0(VAR_5, 2, "stopcard");

 FUNC_10(VAR_5, 0, 1);

 FUNC_1(&VAR_5->rx_mode_work);
 FUNC_8(VAR_5);

 if (VAR_5->options.sniffer &&
     (VAR_5->info.promisc_mode == VAR_4))
  FUNC_5(VAR_5, VAR_3);

 if (VAR_5->state == VAR_2) {
  FUNC_7(VAR_5, 1);
  FUNC_3(VAR_5);
  VAR_5->state = VAR_1;
 }
 if (VAR_5->state == VAR_1) {
  FUNC_9(VAR_5, 0);
  FUNC_6(VAR_5);
  FUNC_4(VAR_5);
  VAR_5->state = VAR_0;
 }

 FUNC_2(VAR_5->event_wq);
}
