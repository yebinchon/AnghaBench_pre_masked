
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {char* compatible; scalar_t__ data; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct device*,char*,unsigned int,char const*,unsigned int,unsigned int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct regmap *VAR_10, struct device *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 const char *VAR_17 = "unknown";
 int VAR_18, VAR_19;

 VAR_18 = FUNC_2(VAR_10, VAR_7, &VAR_15);
 if (VAR_18 < 0)
  return;

 if (VAR_15 != VAR_8)
  return;

 VAR_18 = FUNC_2(VAR_10, VAR_6, &VAR_16);
 if (VAR_18 < 0)
  return;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_9); VAR_19++) {
  if (VAR_16 == (unsigned long)VAR_9[VAR_19].data)
   break;
 }

 if (VAR_19 != FUNC_0(VAR_9))
  VAR_17 = VAR_9[VAR_19].compatible;

 VAR_18 = FUNC_2(VAR_10, VAR_3, &VAR_12);
 if (VAR_18 < 0)
  return;

 VAR_18 = FUNC_2(VAR_10, VAR_4, &VAR_13);
 if (VAR_18 < 0)
  return;

 VAR_18 = FUNC_2(VAR_10, VAR_5, &VAR_14);
 if (VAR_18 < 0)
  return;







 if ((VAR_16 == VAR_2 || VAR_16 == VAR_1) &&
     VAR_14 < 0x02)
  VAR_14++;

 if (VAR_16 == VAR_0)
  VAR_13 = VAR_12;

 FUNC_1(VAR_11, "%x: %s v%d.%d\n", VAR_16, VAR_17, VAR_14, VAR_13);
}
