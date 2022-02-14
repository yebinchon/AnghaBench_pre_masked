
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; int cb; } ;
struct cfspi {int slave_talked; TYPE_2__* ndev; int chead; scalar_t__ slave; } ;
struct caif_payload_info {scalar_t__ hdr_len; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,scalar_t__*,scalar_t__) ;
 struct sk_buff* FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(struct cfspi *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 FUNC_1(VAR_3);

 if (VAR_2->slave && !VAR_2->slave_talked)
  VAR_2->slave_talked = 1;

 do {
  struct sk_buff *VAR_6;
  struct caif_payload_info *VAR_7;
  int VAR_8 = 0;
  int VAR_9;

  VAR_6 = FUNC_4(&VAR_2->chead);
  if (!VAR_6)
   break;





  VAR_7 = (struct caif_payload_info *)&VAR_6->cb;





  if (VAR_0 > 1) {
   VAR_8 = 1 + FUNC_0((VAR_7->hdr_len + 1), VAR_0);
   *VAR_5 = (u8)(VAR_8 - 1);
   VAR_5 += VAR_8;
  }


  FUNC_3(VAR_6, 0, VAR_5, VAR_6->len);
  VAR_5 += VAR_6->len;
  VAR_2->ndev->stats.tx_packets++;
  VAR_2->ndev->stats.tx_bytes += VAR_6->len;





  VAR_9 = FUNC_0((VAR_6->len + VAR_8), VAR_1);
  VAR_5 += VAR_9;

  FUNC_2(VAR_6);

 } while ((VAR_5 - VAR_3) < VAR_4);

 return VAR_5 - VAR_3;
}
