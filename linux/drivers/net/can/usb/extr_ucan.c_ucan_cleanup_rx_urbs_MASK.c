
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; } ;
struct ucan_priv {int in_ep_size; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb**,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static void FUNC_4(struct ucan_priv *VAR_1, struct urb **VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3]) {
   FUNC_3(VAR_2[VAR_3]);
   FUNC_1(VAR_1->udev,
       VAR_1->in_ep_size,
       VAR_2[VAR_3]->transfer_buffer,
       VAR_2[VAR_3]->transfer_dma);
   FUNC_2(VAR_2[VAR_3]);
  }
 }

 FUNC_0(VAR_2, 0, sizeof(*VAR_2) * VAR_0);
}
