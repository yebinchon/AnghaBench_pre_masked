
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_thermal_data {int tz; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, int *VAR_5)
{
 struct bcm2835_thermal_data *VAR_6 = VAR_4;
 u32 VAR_7 = FUNC_1(VAR_6->regs + VAR_0);

 if (!(VAR_7 & VAR_2))
  return -VAR_3;

 VAR_7 &= VAR_1;

 *VAR_5 = FUNC_0(
  VAR_7,
  FUNC_2(VAR_6->tz),
  FUNC_3(VAR_6->tz));

 return 0;
}
