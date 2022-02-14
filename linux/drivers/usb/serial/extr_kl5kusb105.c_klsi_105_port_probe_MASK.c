
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct TYPE_2__ {int pktlen; int unknown2; scalar_t__ unknown1; int databits; int baudrate; } ;
struct klsi_105_private {int lock; scalar_t__ line_state; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct klsi_105_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*,struct klsi_105_private*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_4)
{
 struct klsi_105_private *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->cfg.pktlen = 5;
 VAR_5->cfg.baudrate = VAR_3;
 VAR_5->cfg.databits = VAR_2;
 VAR_5->cfg.unknown1 = 0;
 VAR_5->cfg.unknown2 = 1;

 VAR_5->line_state = 0;

 FUNC_1(&VAR_5->lock);

 FUNC_2(VAR_4, VAR_5);

 return 0;
}
