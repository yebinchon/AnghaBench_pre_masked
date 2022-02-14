
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wahc {int rpipe_mutex; int usb_dev; } ;
struct TYPE_2__ {int wRPipeIndex; } ;
struct wa_rpipe {TYPE_1__ descr; } ;
struct usb_host_endpoint {struct wa_rpipe* hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct wahc *VAR_6, struct usb_host_endpoint *VAR_7)
{
 struct wa_rpipe *VAR_8;

 FUNC_1(&VAR_6->rpipe_mutex);
 VAR_8 = VAR_7->hcpriv;
 if (VAR_8 != ((void*)0)) {
  u16 VAR_9 = FUNC_0(VAR_8->descr.wRPipeIndex);

  FUNC_3(
   VAR_6->usb_dev, FUNC_4(VAR_6->usb_dev, 0),
   VAR_4,
   VAR_2 | VAR_5 | VAR_3,
   VAR_0, VAR_9, ((void*)0), 0, VAR_1);
 }
 FUNC_2(&VAR_6->rpipe_mutex);
}
