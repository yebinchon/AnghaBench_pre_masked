
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pin_bank {int toggle_edge_mode; int clk; int slock; scalar_t__ reg_base; } ;
struct irq_data {int hwirq; } ;
struct irq_chip_generic {scalar_t__ reg_base; struct rockchip_pin_bank* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;





 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct irq_chip_generic* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_chip_generic*) ;
 int FUNC_5 (struct irq_chip_generic*) ;
 int FUNC_6 (struct irq_data*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct rockchip_pin_bank*,int ,int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct irq_data *VAR_8, unsigned int VAR_9)
{
 struct irq_chip_generic *VAR_10 = FUNC_3(VAR_8);
 struct rockchip_pin_bank *VAR_11 = VAR_10->private;
 u32 VAR_12 = FUNC_0(VAR_8->hwirq);
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 unsigned long VAR_16;
 int VAR_17;


 VAR_17 = FUNC_11(VAR_11, VAR_8->hwirq, VAR_5);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_2(VAR_11->clk);
 FUNC_7(&VAR_11->slock, VAR_16);

 VAR_15 = FUNC_10(VAR_11->reg_base + VAR_4);
 VAR_15 &= ~VAR_12;
 FUNC_12(VAR_15, VAR_11->reg_base + VAR_4);

 FUNC_8(&VAR_11->slock, VAR_16);

 if (VAR_9 & 132)
  FUNC_6(VAR_8, VAR_6);
 else
  FUNC_6(VAR_8, VAR_7);

 FUNC_7(&VAR_11->slock, VAR_16);
 FUNC_4(VAR_10);

 VAR_14 = FUNC_10(VAR_10->reg_base + VAR_2);
 VAR_13 = FUNC_10(VAR_10->reg_base + VAR_3);

 switch (VAR_9) {
 case 132:
  VAR_11->toggle_edge_mode |= VAR_12;
  VAR_14 |= VAR_12;





  VAR_15 = FUNC_9(VAR_11->reg_base + VAR_1);
  if (VAR_15 & VAR_12)
   VAR_13 &= ~VAR_12;
  else
   VAR_13 |= VAR_12;
  break;
 case 130:
  VAR_11->toggle_edge_mode &= ~VAR_12;
  VAR_14 |= VAR_12;
  VAR_13 |= VAR_12;
  break;
 case 131:
  VAR_11->toggle_edge_mode &= ~VAR_12;
  VAR_14 |= VAR_12;
  VAR_13 &= ~VAR_12;
  break;
 case 129:
  VAR_11->toggle_edge_mode &= ~VAR_12;
  VAR_14 &= ~VAR_12;
  VAR_13 |= VAR_12;
  break;
 case 128:
  VAR_11->toggle_edge_mode &= ~VAR_12;
  VAR_14 &= ~VAR_12;
  VAR_13 &= ~VAR_12;
  break;
 default:
  FUNC_5(VAR_10);
  FUNC_8(&VAR_11->slock, VAR_16);
  FUNC_1(VAR_11->clk);
  return -VAR_0;
 }

 FUNC_12(VAR_14, VAR_10->reg_base + VAR_2);
 FUNC_12(VAR_13, VAR_10->reg_base + VAR_3);

 FUNC_5(VAR_10);
 FUNC_8(&VAR_11->slock, VAR_16);
 FUNC_1(VAR_11->clk);

 return 0;
}
