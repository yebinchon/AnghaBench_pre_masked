
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct vsc73xx_counter {scalar_t__ counter; } ;
struct vsc73xx {int dummy; } ;


 int FUNC_0 (struct vsc73xx_counter*) ;
 struct vsc73xx_counter* VAR_0 ;
 struct vsc73xx_counter* VAR_1 ;

__attribute__((used)) static const struct vsc73xx_counter *
FUNC_1(struct vsc73xx *VAR_2,
       u8 VAR_3,
       bool VAR_4)
{
 const struct vsc73xx_counter *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_4) {
  VAR_5 = VAR_1;
  VAR_6 = FUNC_0(VAR_1);
 } else {
  VAR_5 = VAR_0;
  VAR_6 = FUNC_0(VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  const struct vsc73xx_counter *VAR_8;

  VAR_8 = &VAR_5[VAR_7];
  if (VAR_8->counter == VAR_3)
   return VAR_8;
 }

 return ((void*)0);
}
