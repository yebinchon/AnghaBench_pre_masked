
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void (* release ) (struct device*) ;struct device* parent; int groups; int class; } ;
struct usb_udc {int vbus; TYPE_1__ dev; int list; struct usb_gadget* gadget; } ;
struct usb_gadget {TYPE_1__ dev; struct usb_udc* udc; int work; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_udc*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 struct usb_udc* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct usb_gadget*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void FUNC_14 (struct device*) ;
 void FUNC_15 (struct device*) ;

int FUNC_16(struct device *VAR_8, struct usb_gadget *VAR_9,
  void (*VAR_10)(struct device *VAR_11))
{
 struct usb_udc *VAR_12;
 int VAR_13 = -VAR_0;

 FUNC_2(&VAR_9->dev, "gadget");
 FUNC_0(&VAR_9->work, VAR_6);
 VAR_9->dev.parent = VAR_8;

 if (VAR_10)
  VAR_9->dev.release = VAR_10;
 else
  VAR_9->dev.release = FUNC_14;

 FUNC_5(&VAR_9->dev);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  goto err_put_gadget;

 FUNC_5(&VAR_12->dev);
 VAR_12->dev.release = FUNC_15;
 VAR_12->dev.class = VAR_3;
 VAR_12->dev.groups = VAR_7;
 VAR_12->dev.parent = VAR_8;
 VAR_13 = FUNC_2(&VAR_12->dev, "%s", FUNC_6(&VAR_8->kobj));
 if (VAR_13)
  goto err_put_udc;

 VAR_13 = FUNC_3(&VAR_9->dev);
 if (VAR_13)
  goto err_put_udc;

 VAR_12->gadget = VAR_9;
 VAR_9->udc = VAR_12;

 FUNC_10(&VAR_5);
 FUNC_8(&VAR_12->list, &VAR_4);

 VAR_13 = FUNC_3(&VAR_12->dev);
 if (VAR_13)
  goto err_unlist_udc;

 FUNC_13(VAR_9, VAR_2);
 VAR_12->vbus = 1;


 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  goto err_del_udc;

 FUNC_11(&VAR_5);

 return 0;

 err_del_udc:
 FUNC_4(&VAR_12->dev);

 err_unlist_udc:
 FUNC_9(&VAR_12->list);
 FUNC_11(&VAR_5);

 FUNC_4(&VAR_9->dev);

 err_put_udc:
 FUNC_12(&VAR_12->dev);

 err_put_gadget:
 FUNC_12(&VAR_9->dev);
 return VAR_13;
}
