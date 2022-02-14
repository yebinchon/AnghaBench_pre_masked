
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_rtc_info {int rtc_dev; int map; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct pm80x_rtc_info *VAR_8 = (struct pm80x_rtc_info *)VAR_7;
 int VAR_9;

 VAR_9 = VAR_1 | VAR_3;
 FUNC_0(VAR_8->map, VAR_4, VAR_9 | VAR_2,
      VAR_9);
 FUNC_1(VAR_8->rtc_dev, 1, VAR_5);
 return VAR_0;
}
