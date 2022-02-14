
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_rtc_dev {int rtc; scalar_t__ reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct xlnx_rtc_dev *VAR_9 = (struct xlnx_rtc_dev *)VAR_8;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_9->reg_base + VAR_5);

 if (!(VAR_10 & (VAR_4 | VAR_3)))
  return VAR_1;


 FUNC_2(VAR_3, VAR_9->reg_base + VAR_5);

 if (VAR_10 & VAR_3)
  FUNC_1(VAR_9->rtc, 1, VAR_6 | VAR_2);

 return VAR_0;
}
