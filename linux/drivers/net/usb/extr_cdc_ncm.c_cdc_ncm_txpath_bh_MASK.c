
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int * net; scalar_t__* data; } ;
struct cdc_ncm_ctx {scalar_t__ tx_timer_pending; int mtx; int tx_reason_timeout; } ;


 int FUNC_0 (struct cdc_ncm_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct usbnet *VAR_1 = (struct usbnet *)VAR_0;
 struct cdc_ncm_ctx *VAR_2 = (struct cdc_ncm_ctx *)VAR_1->data[0];

 FUNC_3(&VAR_2->mtx);
 if (VAR_2->tx_timer_pending != 0) {
  VAR_2->tx_timer_pending--;
  FUNC_0(VAR_2);
  FUNC_4(&VAR_2->mtx);
 } else if (VAR_1->net != ((void*)0)) {
  VAR_2->tx_reason_timeout++;
  FUNC_4(&VAR_2->mtx);
  FUNC_1(VAR_1->net);
  FUNC_5(((void*)0), VAR_1->net);
  FUNC_2(VAR_1->net);
 } else {
  FUNC_4(&VAR_2->mtx);
 }
}
