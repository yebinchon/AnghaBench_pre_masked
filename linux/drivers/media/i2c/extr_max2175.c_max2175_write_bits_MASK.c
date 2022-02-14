
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2175 {int regmap; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct max2175*,char*,int,int) ;
 int FUNC_2 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max2175 *VAR_0, u8 VAR_1,
        u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5 = FUNC_2(VAR_0->regmap, VAR_1, FUNC_0(VAR_2, VAR_3),
         VAR_4 << VAR_3);

 if (VAR_5)
  FUNC_1(VAR_0, "wbits ret(%d): idx 0x%02x\n", VAR_5, VAR_1);

 return VAR_5;
}
