
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lis3lv02d {scalar_t__ irq_cfg; int idev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lis3lv02d*,int ) ;
 int FUNC_1 (struct lis3lv02d*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct lis3lv02d *VAR_7 = VAR_6;
 u8 VAR_8 = VAR_7->irq_cfg & VAR_4;

 if (VAR_8 == VAR_2)
  FUNC_1(VAR_7);
 else if (FUNC_3(VAR_8 == VAR_3))
  FUNC_0(VAR_7, VAR_1);
 else
  FUNC_2(VAR_7->idev);

 return VAR_0;
}
