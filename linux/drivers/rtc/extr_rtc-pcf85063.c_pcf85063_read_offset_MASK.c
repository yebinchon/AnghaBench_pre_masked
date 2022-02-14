
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcf85063 {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 struct pcf85063* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 long FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, long *VAR_6)
{
 struct pcf85063 *VAR_7 = FUNC_0(VAR_5);
 long VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->regmap, VAR_4, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8 = FUNC_2(VAR_9 & ~VAR_0,
       VAR_1);

 if (VAR_9 & VAR_0)
  *VAR_6 = VAR_8 * VAR_3;
 else
  *VAR_6 = VAR_8 * VAR_2;

 return 0;
}
