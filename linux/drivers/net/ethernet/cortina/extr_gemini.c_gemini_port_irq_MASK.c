
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gemini_ethernet_port {struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int irq_lock; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct gemini_ethernet_port *VAR_9 = VAR_8;
 struct gemini_ethernet *VAR_10;
 irqreturn_t VAR_11 = VAR_4;
 u32 VAR_12, VAR_13;

 VAR_10 = VAR_9->geth;
 FUNC_1(&VAR_10->irq_lock);

 VAR_12 = FUNC_0(VAR_10->base + VAR_1);
 VAR_13 = FUNC_0(VAR_10->base + VAR_0);

 if (VAR_12 & VAR_13 & VAR_6) {




  VAR_13 &= ~(VAR_6 | VAR_2
        | VAR_3);
  FUNC_3(VAR_13, VAR_10->base + VAR_0);
  VAR_11 = VAR_5;
 }

 FUNC_2(&VAR_10->irq_lock);

 return VAR_11;
}
