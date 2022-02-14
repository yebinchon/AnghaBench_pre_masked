
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int notification; } ;
struct i2400m {int bm_ack_buf; } ;
struct i2400mu {int usb_dev; TYPE_1__ endpoint_cfg; int usb_iface; struct i2400m i2400m; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct urb*,int ,int,int ,int ,int ,struct completion*,int ) ;
 struct usb_endpoint_descriptor* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static
int FUNC_4(struct i2400mu *VAR_3, struct urb *VAR_4,
    struct completion *VAR_5)
{
 struct i2400m *VAR_6 = &VAR_3->i2400m;
 struct usb_endpoint_descriptor *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3->usb_iface,
     VAR_3->endpoint_cfg.notification);
 VAR_8 = FUNC_2(VAR_3->usb_dev, VAR_7->bEndpointAddress);
 FUNC_0(VAR_4, VAR_3->usb_dev, VAR_8,
    VAR_6->bm_ack_buf, VAR_1,
    VAR_2, VAR_5,
    VAR_7->bInterval);
 return FUNC_3(VAR_4, VAR_0);
}
