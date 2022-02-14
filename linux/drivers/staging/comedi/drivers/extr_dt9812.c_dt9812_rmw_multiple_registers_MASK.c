
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_4__ {int count; struct dt9812_rmw_byte* rmw; } ;
struct TYPE_5__ {TYPE_1__ rmw_multi_info; } ;
struct dt9812_usb_cmd {TYPE_2__ u; int cmd; } ;
struct dt9812_rmw_byte {int dummy; } ;
struct TYPE_6__ {int addr; } ;
struct dt9812_private {TYPE_3__ cmd_wr; } ;
struct comedi_device {struct dt9812_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,int ,struct dt9812_usb_cmd*,int,int*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
      int VAR_3,
      struct dt9812_rmw_byte *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_0(VAR_2);
 struct dt9812_private *VAR_6 = VAR_2->private;
 struct dt9812_usb_cmd VAR_7;
 int VAR_8, VAR_9;

 VAR_7.cmd = FUNC_1(VAR_0);
 VAR_7.u.rmw_multi_info.count = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_7.u.rmw_multi_info.rmw[VAR_8] = VAR_4[VAR_8];


 return FUNC_2(VAR_5, FUNC_3(VAR_5, VAR_6->cmd_wr.addr),
       &VAR_7, 32, &VAR_9, VAR_1);
}
