
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {unsigned int len; int dev; int protocol; } ;
struct TYPE_10__ {int id; int * flags; } ;
struct TYPE_11__ {TYPE_4__ l2; } ;
struct qeth_hdr {TYPE_5__ hdr; } ;
struct TYPE_12__ {int (* data_cb ) (struct sk_buff*) ;} ;
struct TYPE_9__ {size_t b_index; int e_offset; int b_element; } ;
struct TYPE_8__ {TYPE_1__* in_q; } ;
struct qeth_card {TYPE_6__ osn_info; int napi; TYPE_3__ rx; TYPE_2__ qdio; } ;
struct TYPE_7__ {int * bufs; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*,int ,unsigned int) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*,int,char*) ;
 int FUNC_4 (int ,int,struct qeth_hdr*,int) ;


 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_9 (struct qeth_card*,int *,int *,int *,struct qeth_hdr**) ;
 int FUNC_10 (struct qeth_card*,struct sk_buff*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct sk_buff*,struct qeth_hdr*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct qeth_card *VAR_3,
    int VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 struct sk_buff *VAR_7;
 struct qeth_hdr *VAR_8;
 unsigned int VAR_9;

 *VAR_5 = 0;
 FUNC_5(!VAR_4);
 while (VAR_4) {
  VAR_7 = FUNC_9(VAR_3,
   &VAR_3->qdio.in_q->bufs[VAR_3->rx.b_index],
   &VAR_3->rx.b_element, &VAR_3->rx.e_offset, &VAR_8);
  if (!VAR_7) {
   *VAR_5 = 1;
   break;
  }
  switch (VAR_8->hdr.l2.id) {
  case 129:
   VAR_7->protocol = FUNC_7(VAR_7, VAR_7->dev);
   FUNC_10(VAR_3, VAR_7, VAR_8->hdr.l2.flags[1]);
   VAR_9 = VAR_7->len;
   FUNC_8(&VAR_3->napi, VAR_7);
   break;
  case 128:
   if (FUNC_0(VAR_3)) {
    FUNC_12(VAR_7, sizeof(struct qeth_hdr));
    FUNC_11(VAR_7, VAR_8,
      sizeof(struct qeth_hdr));
    VAR_9 = VAR_7->len;
    VAR_3->osn_info.data_cb(VAR_7);
    break;
   }

  default:
   FUNC_6(VAR_7);
   FUNC_3(VAR_3, 3, "inbunkno");
   FUNC_4(VAR_0, 3, VAR_8, sizeof(*VAR_8));
   continue;
  }
  VAR_6++;
  VAR_4--;
  FUNC_2(VAR_3, VAR_2);
  FUNC_1(VAR_3, VAR_1, VAR_9);
 }
 return VAR_6;
}
