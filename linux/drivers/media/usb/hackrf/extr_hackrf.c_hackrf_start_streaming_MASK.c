
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; } ;
struct usb_interface {int dev; } ;
struct hackrf_dev {int v4l2_lock; int flags; scalar_t__ sequence; struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hackrf_dev*) ;
 int FUNC_3 (struct hackrf_dev*,int) ;
 int FUNC_4 (struct hackrf_dev*,int ,unsigned int,int ,int *,int ) ;
 int FUNC_5 (struct hackrf_dev*) ;
 int FUNC_6 (struct hackrf_dev*) ;
 int FUNC_7 (struct hackrf_dev*) ;
 int FUNC_8 (struct vb2_queue*,int ) ;
 int FUNC_9 (struct hackrf_dev*) ;
 int FUNC_10 (struct hackrf_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 struct hackrf_dev* FUNC_15 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_16(struct vb2_queue *VAR_6, unsigned int VAR_7)
{
 struct hackrf_dev *VAR_8 = FUNC_15(VAR_6);
 struct usb_interface *VAR_9 = VAR_8->intf;
 int VAR_10;
 unsigned int VAR_11;

 FUNC_1(&VAR_9->dev, "count=%i\n", VAR_7);

 FUNC_11(&VAR_8->v4l2_lock);


 if (VAR_6->type == VAR_4) {
  if (FUNC_14(VAR_3, &VAR_8->flags)) {
   VAR_10 = -VAR_1;
   goto err_hackrf_return_all_buffers;
  }

  VAR_11 = 1;
  FUNC_13(VAR_2, &VAR_8->flags);
 } else {
  if (FUNC_14(VAR_2, &VAR_8->flags)) {
   VAR_10 = -VAR_1;
   goto err_hackrf_return_all_buffers;
  }

  VAR_11 = 2;
  FUNC_13(VAR_3, &VAR_8->flags);
 }

 VAR_8->sequence = 0;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_3(VAR_8, (VAR_11 == 1));
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_4(VAR_8, VAR_0, VAR_11, 0, ((void*)0), 0);
 if (VAR_10)
  goto err;

 FUNC_12(&VAR_8->v4l2_lock);

 return 0;
err:
 FUNC_7(VAR_8);
 FUNC_6(VAR_8);
 FUNC_5(VAR_8);
 FUNC_0(VAR_2, &VAR_8->flags);
 FUNC_0(VAR_3, &VAR_8->flags);
err_hackrf_return_all_buffers:
 FUNC_8(VAR_6, VAR_5);
 FUNC_12(&VAR_8->v4l2_lock);
 FUNC_1(&VAR_9->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
