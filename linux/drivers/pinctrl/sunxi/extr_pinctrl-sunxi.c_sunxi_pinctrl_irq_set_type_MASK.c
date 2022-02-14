
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sunxi_pinctrl {int membase; int lock; int desc; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sunxi_pinctrl* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*,int *,int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_12, unsigned int VAR_13)
{
 struct sunxi_pinctrl *VAR_14 = FUNC_0(VAR_12);
 u32 VAR_15 = FUNC_6(VAR_14->desc, VAR_12->hwirq);
 u8 VAR_16 = FUNC_5(VAR_12->hwirq);
 unsigned long VAR_17;
 u32 VAR_18;
 u8 VAR_19;

 switch (VAR_13) {
 case 130:
  VAR_19 = VAR_4;
  break;
 case 131:
  VAR_19 = VAR_3;
  break;
 case 132:
  VAR_19 = VAR_2;
  break;
 case 129:
  VAR_19 = VAR_5;
  break;
 case 128:
  VAR_19 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_14->lock, VAR_17);

 if (VAR_13 & VAR_7)
  FUNC_1(VAR_12, &VAR_11,
       VAR_9, ((void*)0));
 else
  FUNC_1(VAR_12, &VAR_10,
       VAR_8, ((void*)0));

 VAR_18 = FUNC_4(VAR_14->membase + VAR_15);
 VAR_18 &= ~(VAR_1 << VAR_16);
 FUNC_7(VAR_18 | (VAR_19 << VAR_16), VAR_14->membase + VAR_15);

 FUNC_3(&VAR_14->lock, VAR_17);

 return 0;
}
