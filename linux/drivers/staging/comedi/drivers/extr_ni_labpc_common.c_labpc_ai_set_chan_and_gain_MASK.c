
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd1; int (* write_byte ) (struct comedi_device*,int ,int ) ;} ;
struct labpc_boardinfo {scalar_t__ is_labpc1200; } ;
struct comedi_device {struct labpc_private* private; struct labpc_boardinfo* board_ptr; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
           enum scan_mode VAR_5,
           unsigned int VAR_6,
           unsigned int VAR_7,
           unsigned int VAR_8)
{
 const struct labpc_boardinfo *VAR_9 = VAR_4->board_ptr;
 struct labpc_private *VAR_10 = VAR_4->private;

 if (VAR_9->is_labpc1200) {





  VAR_7 += (VAR_7 > 0) + (VAR_7 > 7);
 }


 if ((VAR_5 == VAR_2 || VAR_5 == VAR_3) &&
     VAR_8 == VAR_0)
  VAR_6 *= 2;
 VAR_10->cmd1 = FUNC_1(VAR_6);
 VAR_10->cmd1 |= FUNC_0(VAR_7);

 VAR_10->write_byte(VAR_4, VAR_10->cmd1, VAR_1);
}
