
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cw1200_txinfo {int skb; TYPE_3__* tx_info; int hdrlen; TYPE_4__* hdr; } ;
struct cw1200_common {int dummy; } ;
struct TYPE_8__ {int frame_control; } ;
struct TYPE_6__ {TYPE_1__* hw_key; } ;
struct TYPE_7__ {TYPE_2__ control; } ;
struct TYPE_5__ {int icv_len; scalar_t__ cipher; scalar_t__ iv_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct cw1200_common *VAR_1,
    struct cw1200_txinfo *VAR_2)
{
 if (!VAR_2->tx_info->control.hw_key ||
     !FUNC_0(VAR_2->hdr->frame_control))
  return 0;

 VAR_2->hdrlen += VAR_2->tx_info->control.hw_key->iv_len;
 FUNC_1(VAR_2->skb, VAR_2->tx_info->control.hw_key->icv_len);

 if (VAR_2->tx_info->control.hw_key->cipher == VAR_0)
  FUNC_1(VAR_2->skb, 8);

 return 0;
}
