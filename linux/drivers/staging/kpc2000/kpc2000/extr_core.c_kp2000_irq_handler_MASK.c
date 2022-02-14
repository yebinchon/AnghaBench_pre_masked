
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kp2000_device {int dma_common_regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_4, void *VAR_5)
{
 struct kp2000_device *VAR_6 = VAR_5;

 FUNC_0(VAR_1 |
        VAR_3 |
        VAR_2,
        VAR_6->dma_common_regs);
 return VAR_0;
}
