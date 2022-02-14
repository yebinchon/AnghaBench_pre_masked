
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {unsigned int irq; } ;
struct ni_private {int is_m_series; int is_6xxx; int is_611x; int is_6143; int is_622x; int is_625x; int is_628x; int is_67xx; int is_6711; int is_6713; void** gpct_mite_ring; int mite; void* cdo_mite_ring; void* ao_mite_ring; void* ai_mite_ring; } ;
struct ni_board_struct {int reg_type; int name; } ;
struct comedi_device {unsigned int irq; TYPE_1__* subdevices; int board_name; struct ni_private* private; struct ni_board_struct const* board_ptr; } ;
struct TYPE_2__ {int * buf_change; } ;


 unsigned long FUNC_0 (struct ni_board_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct comedi_device*,int) ;
 int FUNC_8 (struct comedi_device*,int ,int) ;
 int VAR_6 ;
 int FUNC_9 (struct comedi_device*) ;
 struct ni_board_struct* VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_10 (unsigned int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_23,
         unsigned long VAR_24)
{
 struct pci_dev *VAR_25 = FUNC_3(VAR_23);
 const struct ni_board_struct *VAR_26 = ((void*)0);
 struct ni_private *VAR_27;
 unsigned int VAR_28;
 int VAR_29;

 if (VAR_24 < FUNC_0(VAR_7))
  VAR_26 = &VAR_7[VAR_24];
 if (!VAR_26)
  return -VAR_0;
 VAR_23->board_ptr = VAR_26;
 VAR_23->board_name = VAR_26->name;

 VAR_29 = FUNC_2(VAR_23);
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_9(VAR_23);
 if (VAR_29)
  return VAR_29;
 VAR_27 = VAR_23->private;

 VAR_27->mite = FUNC_7(VAR_23, 0);
 if (!VAR_27->mite)
  return -VAR_1;

 if (VAR_26->reg_type & VAR_17)
  VAR_27->is_m_series = 1;
 if (VAR_26->reg_type & VAR_16)
  VAR_27->is_6xxx = 1;
 if (VAR_26->reg_type == VAR_8)
  VAR_27->is_611x = 1;
 if (VAR_26->reg_type == VAR_9)
  VAR_27->is_6143 = 1;
 if (VAR_26->reg_type == VAR_10)
  VAR_27->is_622x = 1;
 if (VAR_26->reg_type == VAR_11)
  VAR_27->is_625x = 1;
 if (VAR_26->reg_type == VAR_12)
  VAR_27->is_628x = 1;
 if (VAR_26->reg_type & VAR_15)
  VAR_27->is_67xx = 1;
 if (VAR_26->reg_type == VAR_13)
  VAR_27->is_6711 = 1;
 if (VAR_26->reg_type == VAR_14)
  VAR_27->is_6713 = 1;

 VAR_27->ai_mite_ring = FUNC_6(VAR_27->mite);
 if (!VAR_27->ai_mite_ring)
  return -VAR_1;
 VAR_27->ao_mite_ring = FUNC_6(VAR_27->mite);
 if (!VAR_27->ao_mite_ring)
  return -VAR_1;
 VAR_27->cdo_mite_ring = FUNC_6(VAR_27->mite);
 if (!VAR_27->cdo_mite_ring)
  return -VAR_1;
 VAR_27->gpct_mite_ring[0] = FUNC_6(VAR_27->mite);
 if (!VAR_27->gpct_mite_ring[0])
  return -VAR_1;
 VAR_27->gpct_mite_ring[1] = FUNC_6(VAR_27->mite);
 if (!VAR_27->gpct_mite_ring[1])
  return -VAR_1;

 if (VAR_27->is_m_series)
  FUNC_5(VAR_23);
 if (VAR_27->is_6143)
  FUNC_4(VAR_23);

 VAR_28 = VAR_25->irq;
 if (VAR_28) {
  VAR_29 = FUNC_10(VAR_28, VAR_6, VAR_2,
      VAR_23->board_name, VAR_23);
  if (VAR_29 == 0)
   VAR_23->irq = VAR_28;
 }

 VAR_29 = FUNC_8(VAR_23, 0, 1);
 if (VAR_29 < 0)
  return VAR_29;

 VAR_23->subdevices[VAR_3].buf_change = &VAR_18;
 VAR_23->subdevices[VAR_4].buf_change = &VAR_19;
 VAR_23->subdevices[FUNC_1(0)].buf_change = &VAR_21;
 VAR_23->subdevices[FUNC_1(1)].buf_change = &VAR_22;
 VAR_23->subdevices[VAR_5].buf_change = &VAR_20;

 return 0;
}
