
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct xmit_priv {int free_xmitframe_cnt; TYPE_2__* hwxmits; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ wifi_spec; } ;
struct adapter {int pnetdev; TYPE_1__ registrypriv; struct xmit_priv xmitpriv; } ;
struct TYPE_4__ {scalar_t__ accnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_1,
        struct sk_buff *VAR_2)
{
 struct xmit_priv *VAR_3 = &VAR_1->xmitpriv;
 u16 VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_1->registrypriv.wifi_spec) {

  if (VAR_3->hwxmits[VAR_4].accnt > VAR_0)
   FUNC_1(VAR_1->pnetdev, VAR_4);
 } else {
  if (VAR_3->free_xmitframe_cnt <= 4) {
   if (!FUNC_2(FUNC_0(VAR_1->pnetdev, VAR_4)))
    FUNC_1(VAR_1->pnetdev, VAR_4);
  }
 }
}
