
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct fimc_dev {int id; struct regmap* sysreg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct fimc_dev *VAR_5)
{
 struct regmap *VAR_6 = VAR_5->sysreg;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6 == ((void*)0))
  return 0;

 VAR_10 = FUNC_1(VAR_6, VAR_0, &VAR_9);
 if (VAR_10 < 0 || ((VAR_9 & 0x00700000) >> 20 != 0x3))
  return VAR_10;

 if (!FUNC_0(VAR_5->id >= 3, "not supported id: %d\n", VAR_5->id))
  VAR_8 = 0x1 << (VAR_5->id + 20);
 else
  VAR_8 = 0;

 VAR_7 = VAR_1 | VAR_2;
 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_7, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(1000, 2000);

 VAR_8 |= VAR_1;
 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_7, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7 = VAR_4;
 VAR_10 = FUNC_2(VAR_6, VAR_3, VAR_7, ~VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(1000, 2000);

 return FUNC_2(VAR_6, VAR_3, VAR_7, VAR_7);
}
