
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m48t59_private {int rtc; int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct m48t59_private* FUNC_1 (struct device*) ;
 struct m48t59_plat_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = (struct device *)VAR_7;
 struct m48t59_plat_data *VAR_9 = FUNC_2(VAR_8);
 struct m48t59_private *VAR_10 = FUNC_1(VAR_8);
 u8 VAR_11;

 FUNC_4(&VAR_10->lock);
 VAR_11 = FUNC_0(VAR_2);
 FUNC_5(&VAR_10->lock);

 if (VAR_11 & VAR_3) {
  FUNC_3(VAR_10->rtc, 1, (VAR_4 | VAR_5));
  return VAR_0;
 }

 return VAR_1;
}
