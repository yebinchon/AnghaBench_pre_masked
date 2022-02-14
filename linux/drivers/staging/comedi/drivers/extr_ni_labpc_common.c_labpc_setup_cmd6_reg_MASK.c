
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd6; int (* write_byte ) (struct comedi_device*,int ,int ) ;} ;
struct labpc_boardinfo {int is_labpc1200; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct labpc_private* private; struct labpc_boardinfo* board_ptr; } ;
typedef enum transfer_type { ____Placeholder_transfer_type } transfer_type ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int VAR_8 ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_9,
     struct comedi_subdevice *VAR_10,
     enum scan_mode VAR_11,
     enum transfer_type VAR_12,
     unsigned int VAR_13,
     unsigned int VAR_14,
     bool VAR_15)
{
 const struct labpc_boardinfo *VAR_16 = VAR_9->board_ptr;
 struct labpc_private *VAR_17 = VAR_9->private;

 if (!VAR_16->is_labpc1200)
  return;


 if (VAR_14 != VAR_0)
  VAR_17->cmd6 |= VAR_4;
 else
  VAR_17->cmd6 &= ~VAR_4;


 if (FUNC_0(VAR_10, VAR_13))
  VAR_17->cmd6 |= VAR_1;
 else
  VAR_17->cmd6 &= ~VAR_1;


 if (VAR_12 == VAR_8)
  VAR_17->cmd6 |= VAR_3;
 else
  VAR_17->cmd6 &= ~VAR_3;


 if (VAR_15)
  VAR_17->cmd6 |= VAR_2;
 else
  VAR_17->cmd6 &= ~VAR_2;


 if (VAR_11 == VAR_7)
  VAR_17->cmd6 |= VAR_6;
 else
  VAR_17->cmd6 &= ~VAR_6;

 VAR_17->write_byte(VAR_9, VAR_17->cmd6, VAR_5);
}
