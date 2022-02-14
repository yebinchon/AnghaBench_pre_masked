
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; int transfer_dma; } ;
struct ucan_priv {int rx_urbs; int in_ep_size; int in_ep_addr; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct urb**,int ,int) ;
 int FUNC_1 (struct ucan_priv*,struct urb**) ;
 int VAR_4 ;
 void* FUNC_2 (int ,int ,int ,int *) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,int ,void*,int ,int ,struct ucan_priv*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ucan_priv *VAR_5,
        struct urb **VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6) * VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  void *VAR_8;

  VAR_6[VAR_7] = FUNC_3(0, VAR_1);
  if (!VAR_6[VAR_7])
   goto err;

  VAR_8 = FUNC_2(VAR_5->udev,
      VAR_5->in_ep_size,
      VAR_1, &VAR_6[VAR_7]->transfer_dma);
  if (!VAR_8) {

   FUNC_6(VAR_6[VAR_7]);
   VAR_6[VAR_7] = ((void*)0);
   goto err;
  }

  FUNC_5(VAR_6[VAR_7], VAR_5->udev,
      FUNC_7(VAR_5->udev,
        VAR_5->in_ep_addr),
      VAR_8,
      VAR_5->in_ep_size,
      VAR_4,
      VAR_5);

  VAR_6[VAR_7]->transfer_flags |= VAR_3;

  FUNC_4(VAR_6[VAR_7], &VAR_5->rx_urbs);
 }
 return 0;

err:

 FUNC_1(VAR_5, VAR_6);
 return -VAR_0;
}
