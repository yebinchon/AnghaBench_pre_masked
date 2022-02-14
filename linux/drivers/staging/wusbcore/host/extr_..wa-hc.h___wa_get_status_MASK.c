
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wahc {scalar_t__ status; TYPE_3__* usb_iface; int usb_dev; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,int ,scalar_t__*,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline
s32 FUNC_2(struct wahc *VAR_5)
{
 s32 VAR_6;
 VAR_6 = FUNC_0(
  VAR_5->usb_dev, FUNC_1(VAR_5->usb_dev, 0),
  VAR_3,
  VAR_1 | VAR_4 | VAR_2,
  0, VAR_5->usb_iface->cur_altsetting->desc.bInterfaceNumber,
  &VAR_5->status, sizeof(VAR_5->status), VAR_0);
 if (VAR_6 >= 0)
  VAR_6 = VAR_5->status;
 return VAR_6;
}
