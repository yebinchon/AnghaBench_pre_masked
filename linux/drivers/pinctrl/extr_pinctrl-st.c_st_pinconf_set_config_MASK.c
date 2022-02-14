
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {struct regmap_field* od; struct regmap_field* pu; struct regmap_field* oe; } ;
struct regmap_field {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct regmap_field*,unsigned int*) ;
 int FUNC_2 (struct regmap_field*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct st_pio_control *VAR_3,
    int VAR_4, unsigned long VAR_5)
{
 struct regmap_field *VAR_6 = VAR_3->oe;
 struct regmap_field *VAR_7 = VAR_3->pu;
 struct regmap_field *VAR_8 = VAR_3->od;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12 = FUNC_0(VAR_4);

 if (VAR_6) {
  FUNC_1(VAR_6, &VAR_9);
  VAR_9 &= ~VAR_12;
  if (VAR_5 & VAR_1)
   VAR_9 |= VAR_12;
  FUNC_2(VAR_6, VAR_9);
 }

 if (VAR_7) {
  FUNC_1(VAR_7, &VAR_10);
  VAR_10 &= ~VAR_12;
  if (VAR_5 & VAR_2)
   VAR_10 |= VAR_12;
  FUNC_2(VAR_7, VAR_10);
 }

 if (VAR_8) {
  FUNC_1(VAR_8, &VAR_11);
  VAR_11 &= ~VAR_12;
  if (VAR_5 & VAR_0)
   VAR_11 |= VAR_12;
  FUNC_2(VAR_8, VAR_11);
 }
}
