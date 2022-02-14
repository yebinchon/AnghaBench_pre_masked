
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ppp_channel {struct channel* ppp; } ;
struct TYPE_11__ {scalar_t__ qlen; } ;
struct TYPE_10__ {int rwait; TYPE_4__ rq; } ;
struct channel {int upl; TYPE_6__* ppp; TYPE_3__ file; } ;
struct TYPE_12__ {TYPE_2__* dev; } ;
struct TYPE_8__ {int rx_length_errors; } ;
struct TYPE_9__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_6__*,struct sk_buff*,struct channel*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sk_buff* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct ppp_channel *VAR_2, struct sk_buff *VAR_3)
{
 struct channel *VAR_4 = VAR_2->ppp;
 int VAR_5;

 if (!VAR_4) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_5(&VAR_4->upl);
 if (!FUNC_2(VAR_3)) {
  FUNC_1(VAR_3);
  if (VAR_4->ppp) {
   ++VAR_4->ppp->dev->stats.rx_length_errors;
   FUNC_4(VAR_4->ppp);
  }
  goto done;
 }

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_4->ppp || VAR_5 >= 0xc000 || VAR_5 == VAR_0) {

  FUNC_8(&VAR_4->file.rq, VAR_3);

  while (VAR_4->file.rq.qlen > VAR_1 &&
         (VAR_3 = FUNC_7(&VAR_4->file.rq)))
   FUNC_1(VAR_3);
  FUNC_9(&VAR_4->file.rwait);
 } else {
  FUNC_3(VAR_4->ppp, VAR_3, VAR_4);
 }

done:
 FUNC_6(&VAR_4->upl);
}
