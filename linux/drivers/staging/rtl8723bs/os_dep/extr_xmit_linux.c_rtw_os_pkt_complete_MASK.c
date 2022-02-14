
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct xmit_priv {TYPE_2__* hwxmits; } ;
struct TYPE_3__ {scalar_t__ wifi_spec; } ;
struct adapter {int pnetdev; TYPE_1__ registrypriv; struct xmit_priv xmitpriv; } ;
typedef int _pkt ;
struct TYPE_4__ {scalar_t__ accnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_1, _pkt *VAR_2)
{
 u16 VAR_3;
 struct xmit_priv *VAR_4 = &VAR_1->xmitpriv;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_1->registrypriv.wifi_spec) {
  if (FUNC_0(VAR_1->pnetdev, VAR_3) &&
      (VAR_4->hwxmits[VAR_3].accnt < VAR_0))
   FUNC_2(VAR_1->pnetdev, VAR_3);
 } else {
  if (FUNC_0(VAR_1->pnetdev, VAR_3))
   FUNC_2(VAR_1->pnetdev, VAR_3);
 }

 FUNC_1(VAR_2);
}
