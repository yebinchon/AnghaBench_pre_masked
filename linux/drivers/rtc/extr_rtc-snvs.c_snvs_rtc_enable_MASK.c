
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct snvs_rtc_data *VAR_3, bool VAR_4)
{
 int VAR_5 = 1000;
 u32 VAR_6;

 FUNC_1(VAR_3->regmap, VAR_3->offset + VAR_1, VAR_2,
      VAR_4 ? VAR_2 : 0);

 while (--VAR_5) {
  FUNC_0(VAR_3->regmap, VAR_3->offset + VAR_1, &VAR_6);

  if (VAR_4) {
   if (VAR_6 & VAR_2)
    break;
  } else {
   if (!(VAR_6 & VAR_2))
    break;
  }
 }

 if (!VAR_5)
  return -VAR_0;

 return 0;
}
