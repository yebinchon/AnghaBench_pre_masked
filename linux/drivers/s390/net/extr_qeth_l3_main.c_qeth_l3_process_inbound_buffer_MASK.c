
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {unsigned int len; int dev; int protocol; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_4__ l3; } ;
struct qeth_hdr {TYPE_5__ hdr; } ;
struct TYPE_8__ {size_t b_index; int e_offset; int b_element; } ;
struct TYPE_7__ {TYPE_1__* in_q; } ;
struct qeth_card {int napi; TYPE_3__ rx; TYPE_2__ qdio; } ;
struct TYPE_6__ {int * bufs; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int ,unsigned int) ;
 int FUNC_1 (struct qeth_card*,int ) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int ,int,struct qeth_hdr*,int) ;


 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct qeth_card*,int *,int *,int *,struct qeth_hdr**) ;
 int FUNC_9 (struct qeth_card*,struct sk_buff*,struct qeth_hdr*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_3,
    int VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 struct sk_buff *VAR_7;
 struct qeth_hdr *VAR_8;
 unsigned int VAR_9;

 *VAR_5 = 0;
 FUNC_4(!VAR_4);
 while (VAR_4) {
  VAR_7 = FUNC_8(VAR_3,
   &VAR_3->qdio.in_q->bufs[VAR_3->rx.b_index],
   &VAR_3->rx.b_element, &VAR_3->rx.e_offset, &VAR_8);
  if (!VAR_7) {
   *VAR_5 = 1;
   break;
  }
  switch (VAR_8->hdr.l3.id) {
  case 128:
   FUNC_9(VAR_3, VAR_7, VAR_8);

  case 129:
   VAR_7->protocol = FUNC_6(VAR_7, VAR_7->dev);
   VAR_9 = VAR_7->len;
   FUNC_7(&VAR_3->napi, VAR_7);
   break;
  default:
   FUNC_5(VAR_7);
   FUNC_2(VAR_3, 3, "inbunkno");
   FUNC_3(VAR_0, 3, VAR_8, sizeof(*VAR_8));
   continue;
  }
  VAR_6++;
  VAR_4--;
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(VAR_3, VAR_1, VAR_9);
 }
 return VAR_6;
}
