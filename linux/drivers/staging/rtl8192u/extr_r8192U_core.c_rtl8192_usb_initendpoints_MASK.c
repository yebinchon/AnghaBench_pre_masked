
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {int dummy; } ;
struct r8192_priv {TYPE_1__** rx_urb; int * pp_rxskb; void* oldaddr; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int transfer_buffer_length; void* transfer_buffer; } ;


 int FUNC_0 (char*) ;
 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__**) ;
 void* FUNC_4 (int,int ) ;
 TYPE_1__** FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_1__**,int ,int) ;
 int FUNC_7 (struct net_device*,char*) ;
 void* FUNC_8 (int ,int ) ;

__attribute__((used)) static short FUNC_9(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_1(VAR_5);

 VAR_6->rx_urb = FUNC_5(VAR_2 + 1, sizeof(struct urb *),
         VAR_1);
 if (!VAR_6->rx_urb)
  return -VAR_0;


 for (VAR_4 = 0; VAR_4 < (VAR_2 + 1); VAR_4++) {
  VAR_6->rx_urb[VAR_4] = FUNC_8(0, VAR_1);
  if (!VAR_6->rx_urb[VAR_4])
   return -VAR_0;

  VAR_6->rx_urb[VAR_4]->transfer_buffer =
   FUNC_4(VAR_3, VAR_1);
  if (!VAR_6->rx_urb[VAR_4]->transfer_buffer)
   return -VAR_0;

  VAR_6->rx_urb[VAR_4]->transfer_buffer_length = VAR_3;
 }
 FUNC_6(VAR_6->rx_urb, 0, sizeof(struct urb *) * VAR_2);
 VAR_6->pp_rxskb = FUNC_2(VAR_2, sizeof(struct sk_buff *),
     VAR_1);
 if (!VAR_6->pp_rxskb) {
  FUNC_3(VAR_6->rx_urb);

  VAR_6->pp_rxskb = ((void*)0);
  VAR_6->rx_urb = ((void*)0);

  FUNC_0("Endpoint Alloc Failure");
  return -VAR_0;
 }

 FUNC_7(VAR_5, "End of initendpoints\n");
 return 0;
}
