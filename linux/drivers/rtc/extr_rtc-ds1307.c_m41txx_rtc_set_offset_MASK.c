
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {int regmap; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (long,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_1 (long) ;
 struct ds1307* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, long VAR_9)
{
 struct ds1307 *VAR_10 = FUNC_2(VAR_8);
 unsigned int VAR_11;

 if ((VAR_9 < VAR_3) || (VAR_9 > VAR_2))
  return -VAR_0;

 if (VAR_9 >= 0) {
  VAR_11 = FUNC_0(VAR_9,
          VAR_6);
  VAR_11 |= VAR_1;
 } else {
  VAR_11 = FUNC_0(FUNC_1(VAR_9),
          VAR_5);
 }

 return FUNC_3(VAR_10->regmap, VAR_7,
      VAR_4 | VAR_1,
      VAR_11);
}
