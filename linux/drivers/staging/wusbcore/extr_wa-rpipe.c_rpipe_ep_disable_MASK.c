
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wa_rpipe*) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct wahc *VAR_5, struct usb_host_endpoint *VAR_6)
{
 struct wa_rpipe *VAR_7;

 FUNC_1(&VAR_5->rpipe_mutex);
 VAR_7 = VAR_6->hcpriv;
 if (VAR_7 != ((void*)0)) {
  u16 VAR_8 = FUNC_0(VAR_7->descr.wRPipeIndex);

  FUNC_4(
   VAR_5->usb_dev, FUNC_5(VAR_5->usb_dev, 0),
   VAR_3,
   VAR_1 | VAR_4 | VAR_2,
   0, VAR_8, ((void*)0), 0, VAR_0);
  FUNC_3(VAR_7);
 }
 FUNC_2(&VAR_5->rpipe_mutex);
}
