
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pcidas64_private {int adc_control1_bits; int ai_dma_desc_bus_addr; int ai_cmd_running; scalar_t__ main_iobase; TYPE_1__* ai_dma_desc; scalar_t__ ai_dma_index; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {scalar_t__ convert_src; int chanlist_len; int* chanlist; int flags; scalar_t__ start_src; int start_arg; scalar_t__ stop_src; int stop_arg; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int transfer_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (struct pcidas64_board const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*,int) ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_11 (struct comedi_device*,int,int) ;
 int FUNC_12 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_13 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_14 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (struct comedi_cmd*) ;
 int FUNC_18 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct comedi_device *VAR_32, struct comedi_subdevice *VAR_33)
{
 const struct pcidas64_board *VAR_34 = VAR_32->board_ptr;
 struct pcidas64_private *VAR_35 = VAR_32->private;
 struct comedi_async *VAR_36 = VAR_33->async;
 struct comedi_cmd *VAR_37 = &VAR_36->cmd;
 u32 VAR_38;
 unsigned int VAR_39;
 unsigned long VAR_40;
 int VAR_41;

 FUNC_7(VAR_32);
 FUNC_1(VAR_32, 1);

 VAR_41 = FUNC_13(VAR_32, VAR_37);
 if (VAR_41 < 0)
  return VAR_41;


 FUNC_18(0, VAR_35->main_iobase + VAR_17);

 FUNC_12(VAR_32, VAR_37);

 FUNC_14(VAR_32, VAR_37);

 FUNC_10(VAR_32, VAR_37);

 FUNC_15(&VAR_32->spinlock, VAR_40);

 VAR_35->adc_control1_bits |= VAR_16;
 VAR_35->adc_control1_bits &= ~VAR_3;
 if (VAR_34->layout != VAR_25) {
  VAR_35->adc_control1_bits &= ~VAR_9;
  if (VAR_37->convert_src == VAR_29)

   VAR_35->adc_control1_bits |= FUNC_4(13);
  else

   VAR_35->adc_control1_bits |= FUNC_4(8);
 } else {
  VAR_35->adc_control1_bits &= ~VAR_18;
  if (VAR_37->chanlist_len == 4)
   VAR_35->adc_control1_bits |= VAR_24;
  else if (VAR_37->chanlist_len == 2)
   VAR_35->adc_control1_bits |= VAR_31;
  VAR_35->adc_control1_bits &= ~VAR_8;
  VAR_35->adc_control1_bits |=
   FUNC_3(FUNC_0(VAR_37->chanlist[0]));
  VAR_35->adc_control1_bits &= ~VAR_7;
  VAR_35->adc_control1_bits |=
   FUNC_2(FUNC_0(VAR_37->chanlist
            [VAR_37->chanlist_len - 1]));
 }
 FUNC_18(VAR_35->adc_control1_bits,
        VAR_35->main_iobase + VAR_2);
 FUNC_16(&VAR_32->spinlock, VAR_40);


 FUNC_18(0, VAR_35->main_iobase + VAR_0);

 if ((VAR_37->flags & VAR_19) == 0 ||
     VAR_34->layout == VAR_25) {
  VAR_35->ai_dma_index = 0;


  for (VAR_39 = 0; VAR_39 < FUNC_5(VAR_34); VAR_39++)
   VAR_35->ai_dma_desc[VAR_39].transfer_size =
    FUNC_6(FUNC_9(VAR_32) *
         sizeof(u16));


  FUNC_11(VAR_32, 1,
       VAR_35->ai_dma_desc_bus_addr |
       VAR_26 |
       VAR_27 |
       VAR_28);

  FUNC_8(VAR_32, 1);
 }

 if (VAR_34->layout == VAR_25) {

  VAR_38 = 0;
  if (VAR_37->start_src == VAR_29 && FUNC_0(VAR_37->start_arg))
   VAR_38 |= VAR_22;
  if (VAR_37->stop_src == VAR_29 && FUNC_0(VAR_37->stop_arg))
   VAR_38 |= VAR_23;
  FUNC_18(VAR_38, VAR_35->main_iobase + VAR_21);
 }

 FUNC_15(&VAR_32->spinlock, VAR_40);


 VAR_38 = VAR_5 | VAR_11 | VAR_6;
 if (VAR_37->flags & VAR_19)
  VAR_38 |= VAR_4;

 if (VAR_37->start_src == VAR_29) {
  VAR_38 |= VAR_13;
  if (VAR_37->start_arg & VAR_20)
   VAR_38 |= VAR_14;
 } else if (VAR_37->start_src == VAR_30) {
  VAR_38 |= VAR_15;
 }
 if (FUNC_17(VAR_37))
  VAR_38 |= VAR_10;
 FUNC_18(VAR_38, VAR_35->main_iobase + VAR_1);

 VAR_35->ai_cmd_running = 1;

 FUNC_16(&VAR_32->spinlock, VAR_40);


 if (VAR_37->start_src == VAR_30)
  FUNC_18(0, VAR_35->main_iobase + VAR_12);

 return 0;
}
