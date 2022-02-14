
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int int_a_enable_reg; unsigned int int_b_enable_reg; unsigned int io_bidirection_pin_reg; unsigned int ai_ao_select_reg; unsigned int g0_g1_select_reg; unsigned int cdio_dma_select_reg; int soft_reg_copy_lock; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct comedi_device *VAR_0, int VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 struct ni_private *VAR_4 = VAR_0->private;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->soft_reg_copy_lock, VAR_5);
 switch (VAR_1) {
 case 133:
  VAR_4->int_a_enable_reg &= ~VAR_2;
  VAR_4->int_a_enable_reg |= VAR_3 & VAR_2;
  FUNC_1(VAR_0, VAR_4->int_a_enable_reg, VAR_1);
  break;
 case 132:
  VAR_4->int_b_enable_reg &= ~VAR_2;
  VAR_4->int_b_enable_reg |= VAR_3 & VAR_2;
  FUNC_1(VAR_0, VAR_4->int_b_enable_reg, VAR_1);
  break;
 case 131:
  VAR_4->io_bidirection_pin_reg &= ~VAR_2;
  VAR_4->io_bidirection_pin_reg |= VAR_3 & VAR_2;
  FUNC_1(VAR_0, VAR_4->io_bidirection_pin_reg, VAR_1);
  break;
 case 130:
  VAR_4->ai_ao_select_reg &= ~VAR_2;
  VAR_4->ai_ao_select_reg |= VAR_3 & VAR_2;
  FUNC_2(VAR_0, VAR_4->ai_ao_select_reg, VAR_1);
  break;
 case 129:
  VAR_4->g0_g1_select_reg &= ~VAR_2;
  VAR_4->g0_g1_select_reg |= VAR_3 & VAR_2;
  FUNC_2(VAR_0, VAR_4->g0_g1_select_reg, VAR_1);
  break;
 case 128:
  VAR_4->cdio_dma_select_reg &= ~VAR_2;
  VAR_4->cdio_dma_select_reg |= VAR_3 & VAR_2;
  FUNC_2(VAR_0, VAR_4->cdio_dma_select_reg, VAR_1);
  break;
 default:
  FUNC_0(VAR_0->class_dev, "called with invalid register %d\n",
   VAR_1);
  break;
 }
 FUNC_4(&VAR_4->soft_reg_copy_lock, VAR_5);
}
