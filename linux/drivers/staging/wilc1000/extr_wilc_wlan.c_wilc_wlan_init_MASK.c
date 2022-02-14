
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int * tx_buffer; int * rx_buffer; TYPE_1__* hif_func; scalar_t__ quit; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* hif_init ) (struct wilc*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ) ;
 struct wilc_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct wilc*,int) ;

int FUNC_5(struct net_device *VAR_5)
{
 int VAR_6 = 0;
 struct wilc_vif *VAR_7 = FUNC_3(VAR_5);
 struct wilc *VAR_8;

 VAR_8 = VAR_7->wilc;

 VAR_8->quit = 0;

 if (!VAR_8->hif_func->hif_init(VAR_8, 0)) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 if (!VAR_8->tx_buffer)
  VAR_8->tx_buffer = FUNC_2(VAR_4, VAR_2);

 if (!VAR_8->tx_buffer) {
  VAR_6 = -VAR_1;
  goto fail;
 }

 if (!VAR_8->rx_buffer)
  VAR_8->rx_buffer = FUNC_2(VAR_3, VAR_2);

 if (!VAR_8->rx_buffer) {
  VAR_6 = -VAR_1;
  goto fail;
 }

 if (!FUNC_0(VAR_5)) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 return 1;

fail:

 FUNC_1(VAR_8->rx_buffer);
 VAR_8->rx_buffer = ((void*)0);
 FUNC_1(VAR_8->tx_buffer);
 VAR_8->tx_buffer = ((void*)0);

 return VAR_6;
}
