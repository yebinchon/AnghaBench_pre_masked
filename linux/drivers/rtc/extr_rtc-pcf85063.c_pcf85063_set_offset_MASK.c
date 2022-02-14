
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf85063 {int regmap; } ;
struct device {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (long) ;
 struct pcf85063* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, long VAR_6)
{
 struct pcf85063 *VAR_7 = FUNC_2(VAR_5);
 s8 VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;

 if (VAR_6 > VAR_2 * 63)
  return -VAR_0;
 if (VAR_6 < VAR_2 * -64)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6, VAR_2);
 VAR_9 = FUNC_0(VAR_6, VAR_3);

 VAR_11 = FUNC_1(VAR_6 - (VAR_8 * VAR_2));
 VAR_12 = FUNC_1(VAR_6 - (VAR_9 * VAR_3));
 if (VAR_9 > 63 || VAR_9 < -64 || VAR_11 < VAR_12)
  VAR_10 = VAR_8 & ~VAR_1;
 else
  VAR_10 = VAR_9 | VAR_1;

 return FUNC_3(VAR_7->regmap, VAR_4, VAR_10);
}
