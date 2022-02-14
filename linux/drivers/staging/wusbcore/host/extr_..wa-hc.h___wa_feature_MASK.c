
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wahc {TYPE_3__* usb_iface; int usb_dev; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct wahc *VAR_6, unsigned VAR_7, u16 VAR_8)
{
 return FUNC_0(VAR_6->usb_dev, FUNC_1(VAR_6->usb_dev, 0),
   VAR_7 ? VAR_4 : VAR_3,
   VAR_1 | VAR_5 | VAR_2,
   VAR_8,
   VAR_6->usb_iface->cur_altsetting->desc.bInterfaceNumber,
   ((void*)0), 0, VAR_0);
}
