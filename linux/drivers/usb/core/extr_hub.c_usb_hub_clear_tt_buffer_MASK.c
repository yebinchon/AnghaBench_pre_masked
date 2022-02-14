
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_tt_clear {int tt; int devinfo; int clear_list; int ep; int hcd; } ;
struct usb_tt {int lock; int clear_work; int clear_list; scalar_t__ multi; } ;
struct usb_device {int ttport; int bus; scalar_t__ devaddr; int dev; struct usb_tt* tt; } ;
struct urb {int pipe; int ep; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct usb_tt_clear* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct urb *VAR_4)
{
 struct usb_device *VAR_5 = VAR_4->dev;
 int VAR_6 = VAR_4->pipe;
 struct usb_tt *VAR_7 = VAR_5->tt;
 unsigned long VAR_8;
 struct usb_tt_clear *VAR_9;





 VAR_9 = FUNC_2(sizeof *VAR_9, VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(&VAR_5->dev, "can't save CLEAR_TT_BUFFER state\n");

  return -VAR_0;
 }


 VAR_9->tt = VAR_7->multi ? VAR_5->ttport : 1;
 VAR_9->devinfo = FUNC_8 (VAR_6);
 VAR_9->devinfo |= ((u16)VAR_5->devaddr) << 4;
 VAR_9->devinfo |= FUNC_7(VAR_6)
   ? (VAR_3 << 11)
   : (VAR_2 << 11);
 if (FUNC_9(VAR_6))
  VAR_9->devinfo |= 1 << 15;


 VAR_9->hcd = FUNC_0(VAR_5->bus);
 VAR_9->ep = VAR_4->ep;


 FUNC_5(&VAR_7->lock, VAR_8);
 FUNC_3(&VAR_9->clear_list, &VAR_7->clear_list);
 FUNC_4(&VAR_7->clear_work);
 FUNC_6(&VAR_7->lock, VAR_8);
 return 0;
}
