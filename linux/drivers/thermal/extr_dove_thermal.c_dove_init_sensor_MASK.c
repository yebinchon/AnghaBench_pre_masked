
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dove_thermal_priv {int sensor; int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(const struct dove_thermal_priv *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;


 VAR_11 = FUNC_0(VAR_10->control);


 VAR_11 &= ~VAR_2;
 VAR_11 |= (0x1 << VAR_3);


 VAR_11 &= ~VAR_4;
 VAR_11 |= (0x0F1 << VAR_5);


 VAR_11 &= ~VAR_6;
 VAR_11 |= (0x2 << VAR_7);
 FUNC_1(VAR_11, VAR_10->control);


 VAR_11 = FUNC_0(VAR_10->control);
 FUNC_1((VAR_11 | VAR_8), VAR_10->control);
 FUNC_1(VAR_11, VAR_10->control);


 VAR_11 = FUNC_0(VAR_10->sensor);
 VAR_11 &= ~VAR_9;
 FUNC_1(VAR_11, VAR_10->sensor);


 for (VAR_12 = 0; VAR_12 < 1000000; VAR_12++) {
  VAR_11 = FUNC_0(VAR_10->sensor);
  if (VAR_11 & VAR_0)
   break;
 }

 if (VAR_12 == 1000000)
  return -VAR_1;

 return 0;
}
