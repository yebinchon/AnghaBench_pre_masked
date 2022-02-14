
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct regmap {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct regmap*,int ,unsigned int,int,int,int) ;
 int FUNC_3 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_2, u8 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;

 FUNC_3(VAR_2, VAR_0, VAR_4 |
       FUNC_1(FUNC_0(VAR_3)));

 return FUNC_2(VAR_2, VAR_0, VAR_5,
     (VAR_5 & VAR_4) != VAR_4, 100,
     VAR_1 * 1000);
}
