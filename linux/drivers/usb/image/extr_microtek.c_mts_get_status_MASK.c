
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_4__ {int scsi_status; TYPE_1__* instance; } ;
struct TYPE_3__ {int ep_response; int usb_dev; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct urb*,int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( struct urb *VAR_2 )

{
 FUNC_0();

 FUNC_1(VAR_2,
      FUNC_2(VAR_0->instance->usb_dev,
        VAR_0->instance->ep_response),
      VAR_0->scsi_status,
      1,
      VAR_1 );
}
