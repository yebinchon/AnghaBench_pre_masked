
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; struct dt9812_usb_cmd* address; } ;
struct TYPE_6__ {TYPE_1__ read_multi_info; } ;
struct dt9812_usb_cmd {TYPE_2__ u; int cmd; } ;
typedef struct dt9812_usb_cmd u8 ;
struct usb_device {int dummy; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct dt9812_private {TYPE_4__ cmd_rd; TYPE_3__ cmd_wr; } ;
struct comedi_device {struct dt9812_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,int ,struct dt9812_usb_cmd*,int,int*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
       int VAR_3, u8 *VAR_4,
       u8 *VAR_5)
{
 struct usb_device *VAR_6 = FUNC_0(VAR_2);
 struct dt9812_private *VAR_7 = VAR_2->private;
 struct dt9812_usb_cmd VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8.cmd = FUNC_1(VAR_0);
 VAR_8.u.read_multi_info.count = VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_8.u.read_multi_info.address[VAR_9] = VAR_4[VAR_9];


 VAR_11 = FUNC_2(VAR_6, FUNC_4(VAR_6, VAR_7->cmd_wr.addr),
      &VAR_8, 32, &VAR_10, VAR_1);
 if (VAR_11)
  return VAR_11;

 return FUNC_2(VAR_6, FUNC_3(VAR_6, VAR_7->cmd_rd.addr),
       VAR_5, VAR_3, &VAR_10, VAR_1);
}
