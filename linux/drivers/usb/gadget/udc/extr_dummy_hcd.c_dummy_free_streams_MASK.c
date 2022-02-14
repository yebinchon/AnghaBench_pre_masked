
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {int desc; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {int dummy; } ;
struct dummy_hcd {int stream_en_ep; TYPE_1__* dum; } ;
typedef int gfp_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 struct dummy_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct dummy_hcd*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_1, struct usb_device *VAR_2,
 struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
 gfp_t VAR_5)
{
 struct dummy_hcd *VAR_6 = FUNC_1(VAR_1);
 unsigned long VAR_7;
 int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 FUNC_3(&VAR_6->dum->lock, VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_0(&VAR_3[VAR_10]->desc);
  if (!((1 << VAR_9) & VAR_6->stream_en_ep)) {
   VAR_8 = -VAR_0;
   goto out;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_0(&VAR_3[VAR_10]->desc);
  VAR_6->stream_en_ep &= ~(1 << VAR_9);
  FUNC_2(VAR_6,
    FUNC_5(&VAR_3[VAR_10]->desc), 0);
 }
 VAR_8 = 0;
out:
 FUNC_4(&VAR_6->dum->lock, VAR_7);
 return VAR_8;
}
