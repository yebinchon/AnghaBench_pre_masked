
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int service_outs_intr; int rxwork; int wlock; int rlock; int wait; int iuspin; int rerr; int flags; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wdm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct wdm_device* FUNC_8 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_4)
{
 struct wdm_device *VAR_5 = FUNC_8(VAR_4);







 FUNC_5(&VAR_5->iuspin);
 FUNC_4(VAR_3, &VAR_5->flags);
 FUNC_4(VAR_2, &VAR_5->flags);
 FUNC_1(VAR_1, &VAR_5->flags);
 VAR_5->rerr = -VAR_0;
 FUNC_6(&VAR_5->iuspin);
 FUNC_7(&VAR_5->wait);
 FUNC_3(&VAR_5->rlock);
 FUNC_3(&VAR_5->wlock);
 FUNC_2(VAR_5);
 FUNC_0(&VAR_5->rxwork);
 FUNC_0(&VAR_5->service_outs_intr);
 return 0;
}
