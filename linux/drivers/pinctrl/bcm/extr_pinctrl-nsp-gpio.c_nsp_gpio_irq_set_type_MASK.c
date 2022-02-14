
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {int dev; int lock; } ;
struct irq_data {unsigned int hwirq; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,char*,char*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct nsp_gpio* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct nsp_gpio*,int ,int ,unsigned int) ;
 int FUNC_4 (struct nsp_gpio*,int ,int ,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct nsp_gpio *VAR_7 = FUNC_2(VAR_5);
 unsigned VAR_8 = VAR_5->hwirq;
 bool VAR_9;
 bool VAR_10;
 unsigned long VAR_11;

 FUNC_5(&VAR_7->lock, VAR_11);
 VAR_10 = FUNC_3(VAR_7, VAR_4, VAR_2, VAR_8);
 VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_3, VAR_8);

 switch (VAR_6 & VAR_1) {
 case 130:
  VAR_10 = 0;
  break;

 case 131:
  VAR_10 = 1;
  break;

 case 129:
  VAR_9 = 0;
  break;

 case 128:
  VAR_9 = 1;
  break;

 default:
  FUNC_1(VAR_7->dev, "invalid GPIO IRQ type 0x%x\n",
   VAR_6);
  FUNC_6(&VAR_7->lock, VAR_11);
  return -VAR_0;
 }

 FUNC_4(VAR_7, VAR_4, VAR_2, VAR_8, VAR_10);
 FUNC_4(VAR_7, VAR_4, VAR_3, VAR_8, VAR_9);
 FUNC_6(&VAR_7->lock, VAR_11);

 FUNC_0(VAR_7->dev, "gpio:%u level_low:%s falling:%s\n", VAR_8,
  VAR_9 ? "true" : "false", VAR_10 ? "true" : "false");
 return 0;
}
