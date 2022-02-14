
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int count; int device_list; int rlock; int wlock; int service_outs_intr; int rxwork; int wait; int iuspin; int flags; } ;
struct usb_interface {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wdm_device*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct wdm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct usb_interface*,int *) ;
 int FUNC_13 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct wdm_device* FUNC_14 (struct usb_interface*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_15(struct usb_interface *VAR_5)
{
 struct wdm_device *VAR_6;
 unsigned long VAR_7;

 FUNC_12(VAR_5, &VAR_2);
 VAR_6 = FUNC_14(VAR_5);
 FUNC_5(&VAR_4);


 FUNC_9(&VAR_6->iuspin, VAR_7);
 FUNC_7(VAR_0, &VAR_6->flags);
 FUNC_7(VAR_1, &VAR_6->flags);
 FUNC_11(&VAR_6->iuspin, VAR_7);
 FUNC_13(&VAR_6->wait);
 FUNC_5(&VAR_6->rlock);
 FUNC_5(&VAR_6->wlock);
 FUNC_3(VAR_6);
 FUNC_0(&VAR_6->rxwork);
 FUNC_0(&VAR_6->service_outs_intr);
 FUNC_6(&VAR_6->wlock);
 FUNC_6(&VAR_6->rlock);


 FUNC_8(&VAR_3);
 FUNC_4(&VAR_6->device_list);
 FUNC_10(&VAR_3);

 if (!VAR_6->count)
  FUNC_1(VAR_6);
 else
  FUNC_2(&VAR_5->dev, "%d open files - postponing cleanup\n", VAR_6->count);
 FUNC_6(&VAR_4);
}
