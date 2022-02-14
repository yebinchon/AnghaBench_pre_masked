
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw5864_dev {int irqmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct tw5864_dev *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->irqmask & 0xffff);
 FUNC_0(VAR_0, (VAR_2->irqmask >> 16));
}
