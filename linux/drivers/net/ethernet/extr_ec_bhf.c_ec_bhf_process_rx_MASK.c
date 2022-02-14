
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; } ;
struct rx_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ recv; int len; } ;
struct rx_desc {TYPE_1__ header; int * data; } ;
struct ec_bhf_priv {size_t rx_dnext; int stat_rx_bytes; int rx_dcount; struct rx_desc* rx_descs; int net_dev; } ;


 int FUNC_0 (struct ec_bhf_priv*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ec_bhf_priv*,struct rx_desc*) ;
 scalar_t__ FUNC_3 (struct rx_desc*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int *,int) ;

__attribute__((used)) static void FUNC_9(struct ec_bhf_priv *VAR_1)
{
 struct rx_desc *VAR_2 = &VAR_1->rx_descs[VAR_1->rx_dnext];

 while (FUNC_3(VAR_2)) {
  int VAR_3 = (FUNC_5(VAR_2->header.len) &
          VAR_0) - sizeof(struct rx_header) - 4;
  u8 *VAR_4 = VAR_2->data;
  struct sk_buff *VAR_5;

  VAR_5 = FUNC_6(VAR_1->net_dev, VAR_3);
  if (VAR_5) {
   FUNC_8(VAR_5, VAR_4, VAR_3);
   VAR_5->protocol = FUNC_4(VAR_5, VAR_1->net_dev);
   VAR_1->stat_rx_bytes += VAR_3;

   FUNC_7(VAR_5);
  } else {
   FUNC_1(FUNC_0(VAR_1),
         "Couldn't allocate a skb_buff for a packet of size %u\n",
         VAR_3);
  }

  VAR_2->header.recv = 0;

  FUNC_2(VAR_1, VAR_2);

  VAR_1->rx_dnext = (VAR_1->rx_dnext + 1) % VAR_1->rx_dcount;
  VAR_2 = &VAR_1->rx_descs[VAR_1->rx_dnext];
 }
}
