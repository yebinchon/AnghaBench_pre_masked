
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct arizona *VAR_2,
       int VAR_3, unsigned int VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 ktime_t VAR_7 = FUNC_2(FUNC_3(), VAR_3 * VAR_1);
 unsigned int VAR_8 = 0;
 int VAR_9;

 do {
  VAR_9 = FUNC_4(VAR_2->regmap, VAR_4, &VAR_8);

  if ((VAR_8 & VAR_5) == VAR_6)
   return 0;
 } while (FUNC_0(VAR_7));

 if (VAR_9) {
  FUNC_1(VAR_2->dev, "Failed polling reg 0x%x: %d\n",
   VAR_4, VAR_9);
  return VAR_9;
 }

 FUNC_1(VAR_2->dev, "Polling reg 0x%x timed out: %x\n", VAR_4, VAR_8);
 return -VAR_0;
}
