
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int count; int current_transfer; int cmd1; int cmd3; int cmd4; int cmd2; int (* write_byte ) (struct comedi_device*,int,int ) ;struct comedi_8254* counter; scalar_t__ dma; } ;
struct labpc_boardinfo {scalar_t__ is_labpc1200; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct comedi_8254* pacer; struct labpc_private* private; struct labpc_boardinfo* board_ptr; } ;
struct comedi_cmd {unsigned int* chanlist; int chanlist_len; scalar_t__ stop_src; int stop_arg; int flags; scalar_t__ convert_src; scalar_t__ scan_begin_src; scalar_t__ start_src; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct comedi_8254 {int divisor1; int divisor2; int divisor; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (struct comedi_8254*,int,int,int) ;
 int FUNC_4 (struct comedi_8254*,int,int) ;
 int FUNC_5 (struct comedi_8254*) ;
 int FUNC_6 (struct comedi_8254*,int ,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_7 (struct comedi_cmd*,int) ;
 int FUNC_8 (struct comedi_cmd*) ;
 scalar_t__ FUNC_9 (struct comedi_cmd*,int) ;
 int FUNC_10 (struct comedi_device*,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_11 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_12 (struct comedi_device*) ;
 int FUNC_13 (struct comedi_device*,struct comedi_subdevice*,int,int,unsigned int,unsigned int,int) ;
 int FUNC_14 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_15 (struct comedi_cmd*,int) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct comedi_device*,int,int ) ;
 int FUNC_19 (struct comedi_device*,int,int ) ;
 int FUNC_20 (struct comedi_device*,int,int ) ;
 int FUNC_21 (struct comedi_device*,int,int ) ;
 int FUNC_22 (struct comedi_device*,int,int ) ;
 int FUNC_23 (struct comedi_device*,int,int ) ;
 int FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct comedi_device *VAR_32, struct comedi_subdevice *VAR_33)
{
 const struct labpc_boardinfo *VAR_34 = VAR_32->board_ptr;
 struct labpc_private *VAR_35 = VAR_32->private;
 struct comedi_async *VAR_36 = VAR_33->async;
 struct comedi_cmd *VAR_37 = &VAR_36->cmd;
 enum scan_mode VAR_38 = FUNC_8(VAR_37);
 unsigned int VAR_39 = (VAR_38 == VAR_25) ?
    VAR_37->chanlist[VAR_37->chanlist_len - 1] :
    VAR_37->chanlist[0];
 unsigned int VAR_40 = FUNC_1(VAR_39);
 unsigned int VAR_41 = FUNC_2(VAR_39);
 unsigned int VAR_42 = FUNC_0(VAR_39);
 enum transfer_type VAR_43;
 unsigned long VAR_44;


 FUNC_11(VAR_32, VAR_33);


 if (VAR_37->stop_src == VAR_26)
  VAR_35->count = VAR_37->stop_arg * VAR_37->chanlist_len;


 if (VAR_37->stop_src == VAR_27) {




  FUNC_3(VAR_35->counter, 1,
     3, VAR_19 | VAR_18);
 } else {

  FUNC_4(VAR_35->counter, 1,
         VAR_19 | VAR_18);
 }


 if (VAR_35->dma &&
     (VAR_37->flags & (VAR_17 | VAR_16)) == 0) {




  VAR_43 = VAR_31;
 } else if (VAR_34->is_labpc1200 &&
     (VAR_37->flags & VAR_17) == 0 &&
     (VAR_37->stop_src != VAR_26 || VAR_35->count > 256)) {





  VAR_43 = VAR_29;
 } else {
  VAR_43 = VAR_30;
 }
 VAR_35->current_transfer = VAR_43;

 FUNC_10(VAR_32, VAR_38, VAR_40, VAR_41, VAR_42);

 FUNC_13(VAR_32, VAR_33, VAR_38, VAR_43, VAR_41, VAR_42,
        (VAR_37->stop_src == VAR_27));


 if (VAR_38 == VAR_25 || VAR_38 == VAR_24) {
  VAR_35->cmd1 |= VAR_2;





  FUNC_24(1);
  VAR_35->write_byte(VAR_32, VAR_35->cmd1, VAR_1);
 }

 VAR_35->write_byte(VAR_32, VAR_37->chanlist_len, VAR_22);

 VAR_35->write_byte(VAR_32, 0x1, VAR_23);

 if (VAR_37->convert_src == VAR_28 ||
     VAR_37->scan_begin_src == VAR_28) {
  struct comedi_8254 *VAR_45 = VAR_32->pacer;
  struct comedi_8254 *VAR_46 = VAR_35->counter;

  FUNC_5(VAR_45);


  FUNC_3(VAR_45, 0, VAR_45->divisor1,
     VAR_21 | VAR_18);


  FUNC_4(VAR_46, 0, VAR_20 | VAR_18);
  if (FUNC_7(VAR_37, VAR_38))
   FUNC_6(VAR_46, 0, VAR_45->divisor);


  if (FUNC_9(VAR_37, VAR_38))
   FUNC_3(VAR_45, 1, VAR_45->divisor2,
      VAR_20 | VAR_18);
 }

 FUNC_12(VAR_32);

 if (VAR_43 == VAR_31)
  FUNC_14(VAR_32, VAR_33);


 VAR_35->cmd3 |= VAR_8;

 if (VAR_43 == VAR_30)
  VAR_35->cmd3 |= VAR_9;
 VAR_35->write_byte(VAR_32, VAR_35->cmd3, VAR_10);


 VAR_35->cmd4 = 0;
 if (VAR_37->convert_src != VAR_27)
  VAR_35->cmd4 |= VAR_11;




 if (!FUNC_15(VAR_37, VAR_38)) {
  VAR_35->cmd4 |= VAR_13;
  if (VAR_37->scan_begin_src == VAR_27)
   VAR_35->cmd4 |= VAR_12;
 }

 if (VAR_42 == VAR_0)
  VAR_35->cmd4 |= VAR_15;
 VAR_35->write_byte(VAR_32, VAR_35->cmd4, VAR_14);



 FUNC_16(&VAR_32->spinlock, VAR_44);


 VAR_35->cmd2 |= VAR_7;

 VAR_35->cmd2 &= ~(VAR_6 | VAR_3 | VAR_4);
 if (VAR_37->start_src == VAR_27)
  VAR_35->cmd2 |= VAR_3;
 else
  VAR_35->cmd2 |= VAR_6;
 if (VAR_37->stop_src == VAR_27)
  VAR_35->cmd2 |= (VAR_3 | VAR_4);

 VAR_35->write_byte(VAR_32, VAR_35->cmd2, VAR_5);

 FUNC_17(&VAR_32->spinlock, VAR_44);

 return 0;
}
