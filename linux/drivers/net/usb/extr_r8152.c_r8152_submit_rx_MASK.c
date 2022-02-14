
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
struct urb {scalar_t__ actual_length; } ;
struct rx_agg {int list; struct urb* urb; int buffer; } ;
struct r8152 {int napi; int netdev; int rx_lock; int rx_done; int rx_buf_sz; int udev; int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct r8152*,int ,int ,char*,struct rx_agg*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct r8152*) ;
 int VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct urb*,int ,int ,int ,int ,int ,struct rx_agg*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct urb*,int ) ;

__attribute__((used)) static
int FUNC_12(struct r8152 *VAR_5, struct rx_agg *VAR_6, gfp_t VAR_7)
{
 int VAR_8;


 if (FUNC_8(VAR_1, &VAR_5->flags) ||
     !FUNC_8(VAR_2, &VAR_5->flags) || !FUNC_2(VAR_5->netdev))
  return 0;

 FUNC_9(VAR_6->urb, VAR_5->udev, FUNC_10(VAR_5->udev, 1),
     VAR_6->buffer, VAR_5->rx_buf_sz,
     (usb_complete_t)VAR_3, VAR_6);

 VAR_8 = FUNC_11(VAR_6->urb, VAR_7);
 if (VAR_8 == -VAR_0) {
  FUNC_5(VAR_5);
  FUNC_3(VAR_5->netdev);
 } else if (VAR_8) {
  struct urb *VAR_9 = VAR_6->urb;
  unsigned long VAR_10;

  VAR_9->actual_length = 0;
  FUNC_6(&VAR_5->rx_lock, VAR_10);
  FUNC_0(&VAR_6->list, &VAR_5->rx_done);
  FUNC_7(&VAR_5->rx_lock, VAR_10);

  FUNC_4(VAR_5, VAR_4, VAR_5->netdev,
     "Couldn't submit rx[%p], ret = %d\n", VAR_6, VAR_8);

  FUNC_1(&VAR_5->napi);
 }

 return VAR_8;
}
