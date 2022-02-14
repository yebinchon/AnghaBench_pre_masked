
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb_node {int entry; struct urb* urb; int release_urb_work; struct ufx_data* dev; } ;
struct urb {int transfer_flags; int transfer_dma; } ;
struct TYPE_2__ {size_t size; int count; int available; int limit_sem; int list; int lock; } ;
struct ufx_data {TYPE_1__ urbs; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct urb_node*) ;
 struct urb_node* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_8 (int ,size_t,int ,int *) ;
 struct urb* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ,int ,char*,size_t,int ,struct urb_node*) ;
 int FUNC_11 (struct urb*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct ufx_data *VAR_4, int VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 struct urb *VAR_8;
 struct urb_node *VAR_9;
 char *VAR_10;

 FUNC_7(&VAR_4->urbs.lock);

 VAR_4->urbs.size = VAR_6;
 FUNC_1(&VAR_4->urbs.list);

 while (VAR_7 < VAR_5) {
  VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_0);
  if (!VAR_9)
   break;
  VAR_9->dev = VAR_4;

  FUNC_0(&VAR_9->release_urb_work,
     VAR_2);

  VAR_8 = FUNC_9(0, VAR_0);
  if (!VAR_8) {
   FUNC_2(VAR_9);
   break;
  }
  VAR_9->urb = VAR_8;

  VAR_10 = FUNC_8(VAR_4->udev, VAR_6, VAR_0,
      &VAR_8->transfer_dma);
  if (!VAR_10) {
   FUNC_2(VAR_9);
   FUNC_11(VAR_8);
   break;
  }


  FUNC_10(VAR_8, VAR_4->udev, FUNC_12(VAR_4->udev, 1),
   VAR_10, VAR_6, VAR_3, VAR_9);
  VAR_8->transfer_flags |= VAR_1;

  FUNC_4(&VAR_9->entry, &VAR_4->urbs.list);

  VAR_7++;
 }

 FUNC_6(&VAR_4->urbs.limit_sem, VAR_7);
 VAR_4->urbs.count = VAR_7;
 VAR_4->urbs.available = VAR_7;

 FUNC_5("allocated %d %d byte urbs\n", VAR_7, (int) VAR_6);

 return VAR_7;
}
