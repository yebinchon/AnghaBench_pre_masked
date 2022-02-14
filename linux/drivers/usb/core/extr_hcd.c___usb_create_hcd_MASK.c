
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* bus_name; struct device* sysdev; struct device* controller; } ;
struct usb_hcd {int speed; char* product_desc; struct hc_driver const* driver; int died_work; int wakeup_work; int rh_timer; TYPE_1__ self; int kref; struct usb_hcd* shared_hcd; struct usb_hcd* primary_hcd; struct usb_hcd* bandwidth_mutex; struct usb_hcd* address0_mutex; } ;
struct hc_driver {int flags; char* product_desc; scalar_t__ hcd_priv_size; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct usb_hcd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct usb_hcd*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct usb_hcd* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_5 ;

struct usb_hcd *FUNC_12(const struct hc_driver *VAR_6,
  struct device *VAR_7, struct device *VAR_8, const char *VAR_9,
  struct usb_hcd *VAR_10)
{
 struct usb_hcd *VAR_11;

 VAR_11 = FUNC_6(sizeof(*VAR_11) + VAR_6->hcd_priv_size, VAR_0);
 if (!VAR_11)
  return ((void*)0);
 if (VAR_10 == ((void*)0)) {
  VAR_11->address0_mutex = FUNC_4(sizeof(*VAR_11->address0_mutex),
    VAR_0);
  if (!VAR_11->address0_mutex) {
   FUNC_3(VAR_11);
   FUNC_1(VAR_8, "hcd address0 mutex alloc failed\n");
   return ((void*)0);
  }
  FUNC_7(VAR_11->address0_mutex);
  VAR_11->bandwidth_mutex = FUNC_4(sizeof(*VAR_11->bandwidth_mutex),
    VAR_0);
  if (!VAR_11->bandwidth_mutex) {
   FUNC_3(VAR_11->address0_mutex);
   FUNC_3(VAR_11);
   FUNC_1(VAR_8, "hcd bandwidth mutex alloc failed\n");
   return ((void*)0);
  }
  FUNC_7(VAR_11->bandwidth_mutex);
  FUNC_2(VAR_8, VAR_11);
 } else {
  FUNC_8(&VAR_5);
  VAR_11->address0_mutex = VAR_10->address0_mutex;
  VAR_11->bandwidth_mutex = VAR_10->bandwidth_mutex;
  VAR_11->primary_hcd = VAR_10;
  VAR_10->primary_hcd = VAR_10;
  VAR_11->shared_hcd = VAR_10;
  VAR_10->shared_hcd = VAR_11;
  FUNC_9(&VAR_5);
 }

 FUNC_5(&VAR_11->kref);

 FUNC_11(&VAR_11->self);
 VAR_11->self.controller = VAR_8;
 VAR_11->self.sysdev = VAR_7;
 VAR_11->self.bus_name = VAR_9;

 FUNC_10(&VAR_11->rh_timer, VAR_4, 0);




 FUNC_0(&VAR_11->died_work, VAR_2);

 VAR_11->driver = VAR_6;
 VAR_11->speed = VAR_6->flags & VAR_1;
 VAR_11->product_desc = (VAR_6->product_desc) ? VAR_6->product_desc :
   "USB Host Controller";
 return VAR_11;
}
