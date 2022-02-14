
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hpdi_private {int dma_desc_phys_addr; int dio_count; scalar_t__ plx9080_mmio; scalar_t__ dma_desc_index; } ;
struct comedi_subdevice {scalar_t__ io_bits; struct comedi_async* async; } ;
struct comedi_device {scalar_t__ mmio; int spinlock; struct hpdi_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_21,
   struct comedi_subdevice *VAR_22)
{
 struct hpdi_private *VAR_23 = VAR_21->private;
 struct comedi_async *VAR_24 = VAR_22->async;
 struct comedi_cmd *VAR_25 = &VAR_24->cmd;
 unsigned long VAR_26;
 u32 VAR_27;

 if (VAR_22->io_bits)
  return -VAR_2;

 FUNC_4(VAR_16, VAR_21->mmio + VAR_0);

 FUNC_0(VAR_21, 0);

 VAR_23->dma_desc_index = 0;







 FUNC_4(0, VAR_23->plx9080_mmio + VAR_14);
 FUNC_4(0, VAR_23->plx9080_mmio + VAR_13);
 FUNC_4(0, VAR_23->plx9080_mmio + VAR_12);


 VAR_27 = VAR_23->dma_desc_phys_addr | VAR_7 |
        VAR_8 | VAR_9;
 FUNC_4(VAR_27, VAR_23->plx9080_mmio + VAR_11);


 FUNC_1(&VAR_21->spinlock, VAR_26);
 FUNC_3(VAR_5 | VAR_6 | VAR_4,
        VAR_23->plx9080_mmio + VAR_10);
 FUNC_2(&VAR_21->spinlock, VAR_26);

 if (VAR_25->stop_src == VAR_20)
  VAR_23->dio_count = VAR_25->stop_arg;
 else
  VAR_23->dio_count = 1;


 FUNC_4(VAR_19 | VAR_18, VAR_21->mmio + VAR_1);


 FUNC_4(VAR_17, VAR_21->mmio + VAR_3);

 FUNC_4(VAR_15, VAR_21->mmio + VAR_0);

 return 0;
}
