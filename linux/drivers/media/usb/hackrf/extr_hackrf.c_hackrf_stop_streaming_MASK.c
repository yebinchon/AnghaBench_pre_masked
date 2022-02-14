
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; } ;
struct usb_interface {int dev; } ;
struct hackrf_dev {int v4l2_lock; int flags; struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hackrf_dev*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (struct hackrf_dev*) ;
 int FUNC_4 (struct hackrf_dev*) ;
 int FUNC_5 (struct hackrf_dev*) ;
 int FUNC_6 (struct vb2_queue*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct hackrf_dev* FUNC_9 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_10(struct vb2_queue *VAR_5)
{
 struct hackrf_dev *VAR_6 = FUNC_9(VAR_5);
 struct usb_interface *VAR_7 = VAR_6->intf;

 FUNC_1(&VAR_7->dev, "\n");

 FUNC_7(&VAR_6->v4l2_lock);


 FUNC_2(VAR_6, VAR_0, 0, 0, ((void*)0), 0);

 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 FUNC_3(VAR_6);

 FUNC_6(VAR_5, VAR_4);

 if (VAR_5->type == VAR_3)
  FUNC_0(VAR_1, &VAR_6->flags);
 else
  FUNC_0(VAR_2, &VAR_6->flags);

 FUNC_8(&VAR_6->v4l2_lock);
}
