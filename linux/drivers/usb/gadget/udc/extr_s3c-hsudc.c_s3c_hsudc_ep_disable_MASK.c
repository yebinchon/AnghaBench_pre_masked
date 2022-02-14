
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int dummy; } ;
struct TYPE_2__ {int * desc; } ;
struct s3c_hsudc_ep {int stopped; TYPE_1__ ep; int bEndpointAddress; struct s3c_hsudc* dev; } ;
struct s3c_hsudc {int lock; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct s3c_hsudc_ep*) ;
 struct s3c_hsudc_ep* FUNC_2 (struct usb_ep*) ;
 int FUNC_3 (struct s3c_hsudc_ep*,int ) ;
 int FUNC_4 (struct s3c_hsudc*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct usb_ep *VAR_3)
{
 struct s3c_hsudc_ep *VAR_4 = FUNC_2(VAR_3);
 struct s3c_hsudc *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;

 if (!VAR_3 || !VAR_4->ep.desc)
  return -VAR_0;

 FUNC_5(&VAR_5->lock, VAR_6);

 FUNC_4(VAR_5, VAR_4->bEndpointAddress);
 FUNC_0(FUNC_1(VAR_4), VAR_5->regs + VAR_2);

 FUNC_3(VAR_4, -VAR_1);

 VAR_4->ep.desc = ((void*)0);
 VAR_4->stopped = 1;

 FUNC_6(&VAR_5->lock, VAR_6);
 return 0;
}
