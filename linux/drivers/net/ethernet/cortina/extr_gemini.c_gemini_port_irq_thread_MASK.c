
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemini_ethernet_port {struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int irq_lock; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct gemini_ethernet*,int) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 unsigned long VAR_6 = VAR_3;
 struct gemini_ethernet_port *VAR_7 = VAR_5;
 struct gemini_ethernet *VAR_8;
 unsigned long VAR_9;

 VAR_8 = VAR_7->geth;

 FUNC_0(VAR_8, 1);

 FUNC_2(&VAR_8->irq_lock, VAR_9);

 FUNC_4(VAR_6, VAR_8->base + VAR_1);

 VAR_6 |= FUNC_1(VAR_8->base + VAR_0);
 FUNC_4(VAR_6, VAR_8->base + VAR_0);
 FUNC_3(&VAR_8->irq_lock, VAR_9);

 return VAR_2;
}
