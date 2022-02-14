
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct axp288_chrg_info {int max_cc; int cc; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct axp288_chrg_info *VAR_5, int VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 if (VAR_6 < VAR_4)
  VAR_6 = VAR_4;
 else if (VAR_6 > VAR_5->max_cc)
  VAR_6 = VAR_5->max_cc;

 VAR_7 = (VAR_6 - VAR_4) / VAR_2;
 VAR_6 = (VAR_7 * VAR_2) + VAR_4;
 VAR_7 = VAR_7 << VAR_1;

 VAR_8 = FUNC_0(VAR_5->regmap,
    VAR_0,
    VAR_3, VAR_7);
 if (VAR_8 >= 0)
  VAR_5->cc = VAR_6;

 return VAR_8;
}
