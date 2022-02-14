
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb_node {int entry; struct urb* urb; struct dlfb_data* dlfb; } ;
struct urb {int transfer_flags; int transfer_dma; } ;
struct TYPE_2__ {size_t size; size_t count; scalar_t__ available; int limit_sem; int list; int lock; } ;
struct dlfb_data {TYPE_1__ urbs; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlfb_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct urb_node*) ;
 struct urb_node* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ,size_t,int ,int *) ;
 struct urb* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct urb*,int ,int ,char*,size_t,int ,struct urb_node*) ;
 int FUNC_11 (struct urb*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct dlfb_data *VAR_4, int VAR_5, size_t VAR_6)
{
 struct urb *VAR_7;
 struct urb_node *VAR_8;
 char *VAR_9;
 size_t VAR_10 = VAR_5 * VAR_6;

 FUNC_6(&VAR_4->urbs.lock);

retry:
 VAR_4->urbs.size = VAR_6;
 FUNC_0(&VAR_4->urbs.list);

 FUNC_5(&VAR_4->urbs.limit_sem, 0);
 VAR_4->urbs.count = 0;
 VAR_4->urbs.available = 0;

 while (VAR_4->urbs.count * VAR_6 < VAR_10) {
  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);
  if (!VAR_8)
   break;
  VAR_8->dlfb = VAR_4;

  VAR_7 = FUNC_9(0, VAR_0);
  if (!VAR_7) {
   FUNC_2(VAR_8);
   break;
  }
  VAR_8->urb = VAR_7;

  VAR_9 = FUNC_8(VAR_4->udev, VAR_6, VAR_0,
      &VAR_7->transfer_dma);
  if (!VAR_9) {
   FUNC_2(VAR_8);
   FUNC_11(VAR_7);
   if (VAR_6 > VAR_1) {
    VAR_6 /= 2;
    FUNC_1(VAR_4);
    goto retry;
   }
   break;
  }


  FUNC_10(VAR_7, VAR_4->udev, FUNC_12(VAR_4->udev, 1),
   VAR_9, VAR_6, VAR_3, VAR_8);
  VAR_7->transfer_flags |= VAR_2;

  FUNC_4(&VAR_8->entry, &VAR_4->urbs.list);

  FUNC_7(&VAR_4->urbs.limit_sem);
  VAR_4->urbs.count++;
  VAR_4->urbs.available++;
 }

 return VAR_4->urbs.count;
}
