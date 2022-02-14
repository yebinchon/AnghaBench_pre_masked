
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int cb; } ;
struct TYPE_4__ {int (* flowctrl ) (int ,int) ;} ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct cfspi {scalar_t__ qd_low_mark; int ndev; TYPE_1__ cfdev; scalar_t__ flow_off_sent; TYPE_2__ qhead; int chead; } ;
struct caif_payload_info {scalar_t__ hdr_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 struct sk_buff* FUNC_1 (TYPE_2__*) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct cfspi *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;





 while (FUNC_3(&VAR_4->chead)) {
  VAR_5 = FUNC_2(&VAR_4->chead);
  FUNC_4(&VAR_4->qhead, VAR_5);
 }

 do {
  struct caif_payload_info *VAR_8 = ((void*)0);
  int VAR_9 = 0;
  int VAR_10 = 0;

  VAR_5 = FUNC_1(&VAR_4->qhead);
  if (!VAR_5)
   break;





  VAR_8 = (struct caif_payload_info *)&VAR_5->cb;





  if (VAR_2 > 1)
   VAR_9 = 1 + FUNC_0((VAR_8->hdr_len + 1), VAR_2);





  VAR_10 = FUNC_0((VAR_5->len + VAR_9), VAR_3);

  if ((VAR_5->len + VAR_9 + VAR_10 + VAR_6) <= VAR_0) {
   FUNC_5(&VAR_4->chead, VAR_5);
   VAR_7++;
   VAR_6 += VAR_5->len + VAR_9 + VAR_10;
  } else {

   FUNC_4(&VAR_4->qhead, VAR_5);
   break;
  }
 } while (VAR_7 <= VAR_1);





 if (VAR_4->flow_off_sent && VAR_4->qhead.qlen < VAR_4->qd_low_mark &&
  VAR_4->cfdev.flowctrl) {
  VAR_4->flow_off_sent = 0;
  VAR_4->cfdev.flowctrl(VAR_4->ndev, 1);
 }

 return VAR_6;
}
