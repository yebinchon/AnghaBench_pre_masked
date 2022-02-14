
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {scalar_t__ model; int limit_sem; } ;
struct vmk80xx_board {scalar_t__ model; int name; } ;
struct usb_interface {int dummy; } ;
struct comedi_device {int board_name; struct vmk80xx_board const* board_ptr; } ;


 unsigned long FUNC_0 (struct vmk80xx_board*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vmk80xx_private* FUNC_1 (struct comedi_device*,int) ;
 struct usb_interface* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct usb_interface*,struct vmk80xx_private*) ;
 int FUNC_5 (struct comedi_device*) ;
 struct vmk80xx_board* VAR_3 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_4,
          unsigned long VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_2(VAR_4);
 const struct vmk80xx_board *VAR_7 = ((void*)0);
 struct vmk80xx_private *VAR_8;
 int VAR_9;

 if (VAR_5 < FUNC_0(VAR_3))
  VAR_7 = &VAR_3[VAR_5];
 if (!VAR_7)
  return -VAR_0;
 VAR_4->board_ptr = VAR_7;
 VAR_4->board_name = VAR_7->name;

 VAR_8 = FUNC_1(VAR_4, sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_1;

 VAR_8->model = VAR_7->model;

 FUNC_3(&VAR_8->limit_sem, 8);

 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_4(VAR_6, VAR_8);

 if (VAR_8->model == VAR_2)
  FUNC_8(VAR_4);

 return FUNC_7(VAR_4);
}
