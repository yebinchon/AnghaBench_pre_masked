
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netup_unidvb_dev {scalar_t__ bmmio0; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

irqreturn_t FUNC_1(struct netup_unidvb_dev *VAR_2)
{
 FUNC_0(0x101, VAR_2->bmmio0 + VAR_0);
 return VAR_1;
}
