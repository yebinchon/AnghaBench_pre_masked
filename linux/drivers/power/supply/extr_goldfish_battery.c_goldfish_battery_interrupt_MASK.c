
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct goldfish_battery_data {int lock; int ac; int battery; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct goldfish_battery_data*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 struct goldfish_battery_data *VAR_9 = VAR_7;
 uint32_t VAR_10;

 FUNC_2(&VAR_9->lock, VAR_8);


 VAR_10 = FUNC_0(VAR_9, VAR_2);
 VAR_10 &= VAR_1;

 if (VAR_10 & VAR_3)
  FUNC_1(VAR_9->battery);
 if (VAR_10 & VAR_0)
  FUNC_1(VAR_9->ac);

 FUNC_3(&VAR_9->lock, VAR_8);
 return VAR_10 ? VAR_4 : VAR_5;
}
