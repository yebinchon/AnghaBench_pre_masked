
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tx_radiotap_hdr {scalar_t__ data_retries; } ;
struct lbs_private {scalar_t__ connect_status; scalar_t__ mesh_dev; scalar_t__ dev; TYPE_2__* currenttxskb; scalar_t__ txretrycount; TYPE_1__* wdev; } ;
struct TYPE_5__ {int protocol; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ iftype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct lbs_private *VAR_2, u32 VAR_3)
{
 struct tx_radiotap_hdr *VAR_4;

 if (VAR_2->wdev->iftype != VAR_1 ||
     VAR_2->currenttxskb == ((void*)0))
  return;

 VAR_4 = (struct tx_radiotap_hdr *)VAR_2->currenttxskb->data;

 VAR_4->data_retries = VAR_3 ?
  (1 + VAR_2->txretrycount - VAR_3) : 0;

 VAR_2->currenttxskb->protocol = FUNC_0(VAR_2->currenttxskb,
            VAR_2->dev);
 FUNC_2(VAR_2->currenttxskb);

 VAR_2->currenttxskb = ((void*)0);

 if (VAR_2->connect_status == VAR_0)
  FUNC_3(VAR_2->dev);

 if (VAR_2->mesh_dev && FUNC_1(VAR_2->mesh_dev))
  FUNC_3(VAR_2->mesh_dev);
}
