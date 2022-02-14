
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_device {int irq_start; TYPE_1__* remote; } ;
struct irq_data {int irq; } ;
struct TYPE_2__ {int * int_device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct vlynq_device* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct vlynq_device *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;
 u32 VAR_8;

 FUNC_0(!VAR_6);
 VAR_7 = VAR_4->irq - VAR_6->irq_start;
 VAR_8 = FUNC_3(&VAR_6->remote->int_device[VAR_7 >> 2]);
 switch (VAR_5 & VAR_1) {
 case 130:
 case 131:
 case 132:
  VAR_8 |= VAR_3 << FUNC_1(VAR_7);
  VAR_8 &= ~(VAR_2 << FUNC_1(VAR_7));
  break;
 case 129:
  VAR_8 &= ~(VAR_3 << FUNC_1(VAR_7));
  VAR_8 &= ~(VAR_2 << FUNC_1(VAR_7));
  break;
 case 128:
  VAR_8 &= ~(VAR_3 << FUNC_1(VAR_7));
  VAR_8 |= VAR_2 << FUNC_1(VAR_7);
  break;
 default:
  return -VAR_0;
 }
 FUNC_4(VAR_8, &VAR_6->remote->int_device[VAR_7 >> 2]);
 return 0;
}
