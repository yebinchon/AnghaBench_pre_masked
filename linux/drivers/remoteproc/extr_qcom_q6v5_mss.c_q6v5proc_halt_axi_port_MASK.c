
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct q6v5 {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regmap*,scalar_t__,unsigned int*) ;
 int FUNC_4 (struct regmap*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct q6v5 *VAR_5,
       struct regmap *VAR_6,
       u32 VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 VAR_10 = FUNC_3(VAR_6, VAR_7 + VAR_2, &VAR_9);
 if (!VAR_10 && VAR_9)
  return;


 FUNC_4(VAR_6, VAR_7 + VAR_1, 1);


 VAR_8 = VAR_4 + FUNC_1(VAR_3);
 for (;;) {
  VAR_10 = FUNC_3(VAR_6, VAR_7 + VAR_0, &VAR_9);
  if (VAR_10 || VAR_9 || FUNC_5(VAR_4, VAR_8))
   break;

  FUNC_2(1);
 }

 VAR_10 = FUNC_3(VAR_6, VAR_7 + VAR_2, &VAR_9);
 if (VAR_10 || !VAR_9)
  FUNC_0(VAR_5->dev, "port failed halt\n");


 FUNC_4(VAR_6, VAR_7 + VAR_1, 0);
}
