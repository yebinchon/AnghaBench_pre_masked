
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2175 {int regmap; } ;


 int FUNC_0 (struct max2175*,char*,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct max2175 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, "write ret(%d): idx 0x%02x val 0x%02x\n",
   VAR_3, VAR_1, VAR_2);

 return VAR_3;
}
