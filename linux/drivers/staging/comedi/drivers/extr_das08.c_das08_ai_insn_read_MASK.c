
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das08_private_struct {int * pg_gainlist; int do_mux_bits; } ;
struct das08_board_struct {int ai_nbits; scalar_t__ ai_encoding; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int class_dev; scalar_t__ iobase; int spinlock; struct das08_private_struct* private; struct das08_board_struct* board_ptr; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_10,
         struct comedi_subdevice *VAR_11,
         struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 const struct das08_board_struct *VAR_14 = VAR_10->board_ptr;
 struct das08_private_struct *VAR_15 = VAR_10->private;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_17 = FUNC_1(VAR_12->chanspec);
 VAR_18 = FUNC_2(VAR_12->chanspec);


 FUNC_7(VAR_10->iobase + VAR_0);
 FUNC_7(VAR_10->iobase + VAR_1);



 FUNC_10(&VAR_10->spinlock);
 VAR_15->do_mux_bits &= ~VAR_3;
 VAR_15->do_mux_bits |= FUNC_3(VAR_17);
 FUNC_8(VAR_15->do_mux_bits, VAR_10->iobase + VAR_4);
 FUNC_11(&VAR_10->spinlock);

 if (VAR_15->pg_gainlist) {

  VAR_18 = FUNC_2(VAR_12->chanspec);
  FUNC_8(VAR_15->pg_gainlist[VAR_18],
       VAR_10->iobase + VAR_5);
 }

 for (VAR_16 = 0; VAR_16 < VAR_12->n; VAR_16++) {

  if (VAR_14->ai_nbits == 16)
   if (FUNC_7(VAR_10->iobase + VAR_1) & 0x80)
    FUNC_6(VAR_10->class_dev, "over-range\n");


  FUNC_9(0, VAR_10->iobase + VAR_2);

  VAR_21 = FUNC_4(VAR_10, VAR_11, VAR_12, VAR_6, 0);
  if (VAR_21)
   return VAR_21;

  VAR_20 = FUNC_7(VAR_10->iobase + VAR_1);
  VAR_19 = FUNC_7(VAR_10->iobase + VAR_0);
  if (VAR_14->ai_encoding == VAR_7) {
   VAR_13[VAR_16] = (VAR_19 >> 4) | (VAR_20 << 4);
  } else if (VAR_14->ai_encoding == VAR_9) {
   VAR_13[VAR_16] = (VAR_20 << 8) + VAR_19;
  } else if (VAR_14->ai_encoding == VAR_8) {
   unsigned int VAR_22 = VAR_19 | ((VAR_20 & 0x7f) << 8);





   if (VAR_20 & 0x80)
    VAR_13[VAR_16] = FUNC_0(15) + VAR_22;
   else
    VAR_13[VAR_16] = FUNC_0(15) - VAR_22;
  } else {
   FUNC_5(VAR_10->class_dev, "bug! unknown ai encoding\n");
   return -1;
  }
 }

 return VAR_16;
}
