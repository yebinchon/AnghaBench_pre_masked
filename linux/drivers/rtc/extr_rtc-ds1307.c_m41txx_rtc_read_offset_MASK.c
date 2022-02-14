
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct ds1307 {int regmap; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 struct ds1307* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_5, long *VAR_6)
{
 struct ds1307 *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_7->regmap, VAR_4, &VAR_8);

 VAR_9 = VAR_8 & VAR_1;


 if (VAR_8 & VAR_0)
  *VAR_6 = (VAR_9 * VAR_3);
 else
  *VAR_6 = -(VAR_9 * VAR_2);

 return 0;
}
