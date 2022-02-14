
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; int pacer; struct cb_pcidas_private* private; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ convert_src; scalar_t__ scan_begin_src; int flags; scalar_t__ start_src; int start_arg; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct cb_pcidas_private {unsigned int ctrl; scalar_t__ pcibar1; scalar_t__ pcibar2; } ;
struct cb_pcidas_board {scalar_t__ is_1602; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 scalar_t__ VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_9 (unsigned int,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_32,
       struct comedi_subdevice *VAR_33)
{
 const struct cb_pcidas_board *VAR_34 = VAR_32->board_ptr;
 struct cb_pcidas_private *VAR_35 = VAR_32->private;
 struct comedi_async *VAR_36 = VAR_33->async;
 struct comedi_cmd *VAR_37 = &VAR_36->cmd;
 unsigned int VAR_38 = FUNC_2(VAR_37->chanlist[0]);
 unsigned int VAR_39;
 unsigned long VAR_40;


 FUNC_9(0, VAR_35->pcibar1 + VAR_10);

 FUNC_9(VAR_27, VAR_35->pcibar1 + VAR_25);

 FUNC_9(0, VAR_35->pcibar2 + VAR_4);


 VAR_39 = FUNC_3(FUNC_1(VAR_37->chanlist[0])) |
        FUNC_5(FUNC_1(VAR_37->chanlist[VAR_37->chanlist_len - 1])) |
        FUNC_4(VAR_38);

 if (FUNC_8(VAR_33, VAR_38))
  VAR_39 |= VAR_9;

 if (FUNC_0(VAR_37->chanlist[0]) != VAR_0)
  VAR_39 |= VAR_8;

 if (VAR_37->convert_src == VAR_29 || VAR_37->scan_begin_src == VAR_29)
  VAR_39 |= VAR_5;
 else
  VAR_39 |= VAR_6;
 FUNC_9(VAR_39, VAR_35->pcibar1 + VAR_7);


 if (VAR_37->scan_begin_src == VAR_31 ||
     VAR_37->convert_src == VAR_31) {
  FUNC_7(VAR_32->pacer);
  FUNC_6(VAR_32->pacer, 1, 2, 1);
 }


 FUNC_10(&VAR_32->spinlock, VAR_40);
 VAR_35->ctrl |= VAR_12;
 VAR_35->ctrl &= ~VAR_17;
 if (VAR_37->flags & VAR_1) {
  if (VAR_37->convert_src == VAR_30 && VAR_37->chanlist_len > 1) {

   VAR_35->ctrl |= VAR_14;
  } else {

   VAR_35->ctrl |= VAR_16;
  }
 } else {

  VAR_35->ctrl |= VAR_15;
 }


 FUNC_9(VAR_35->ctrl |
      VAR_11 | VAR_13 | VAR_18,
      VAR_35->pcibar1 + VAR_19);
 FUNC_11(&VAR_32->spinlock, VAR_40);


 VAR_39 = 0;
 if (VAR_37->start_src == VAR_30) {
  VAR_39 |= VAR_28;
 } else {
  VAR_39 |= VAR_26 | VAR_22 | VAR_21;
  if (VAR_34->is_1602) {
   if (VAR_37->start_arg & VAR_3)
    VAR_39 |= VAR_24;
   if (VAR_37->start_arg & VAR_2)
    VAR_39 |= VAR_23;
  }
 }
 if (VAR_37->convert_src == VAR_30 && VAR_37->chanlist_len > 1)
  VAR_39 |= VAR_20;
 FUNC_9(VAR_39, VAR_35->pcibar1 + VAR_25);

 return 0;
}
