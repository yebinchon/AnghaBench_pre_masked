
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sniffer; } ;
struct TYPE_5__ {int promisc_mode; } ;
struct qeth_card {TYPE_3__ options; TYPE_2__ info; TYPE_1__* dev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,int) ;

__attribute__((used)) static void FUNC_5(struct qeth_card *VAR_5)
{
 bool VAR_6 = VAR_5->dev->flags & VAR_0;

 if (VAR_5->info.promisc_mode == VAR_6)
  return;

 if (FUNC_0(VAR_5)) {
  if (FUNC_2(VAR_5, VAR_2))
   FUNC_4(VAR_5, VAR_6);
 } else if (VAR_5->options.sniffer &&
     FUNC_2(VAR_5, VAR_1)) {
  if (VAR_6) {
   FUNC_1(VAR_5, 3, "+promisc");
   FUNC_3(VAR_5, VAR_4);
  } else {
   FUNC_1(VAR_5, 3, "-promisc");
   FUNC_3(VAR_5, VAR_3);
  }
 }
}
