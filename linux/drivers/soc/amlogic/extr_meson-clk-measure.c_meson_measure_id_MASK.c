
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_msr_id {unsigned int id; struct meson_msr* priv; } ;
struct meson_msr {int regmap; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int,int,int,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct meson_msr_id *VAR_10,
          unsigned int VAR_11)
{
 struct meson_msr *VAR_12 = VAR_10->priv;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(&VAR_9);
 if (VAR_14)
  return VAR_14;

 FUNC_7(VAR_12->regmap, VAR_2, 0);


 FUNC_6(VAR_12->regmap, VAR_2, VAR_5,
      FUNC_1(VAR_5, VAR_11 - 1));


 FUNC_6(VAR_12->regmap, VAR_2, VAR_4,
      FUNC_1(VAR_4, VAR_10->id));


 FUNC_6(VAR_12->regmap, VAR_2,
      VAR_7 | VAR_6,
      VAR_7 | VAR_6);

 VAR_14 = FUNC_5(VAR_12->regmap, VAR_2,
           VAR_13, !(VAR_13 & VAR_1), 10, 10000);
 if (VAR_14) {
  FUNC_3(&VAR_9);
  return VAR_14;
 }


 FUNC_6(VAR_12->regmap, VAR_2, VAR_6, 0);


 FUNC_4(VAR_12->regmap, VAR_3, &VAR_13);

 FUNC_3(&VAR_9);

 if (VAR_13 >= VAR_8)
  return -VAR_0;

 return FUNC_0((VAR_13 & VAR_8) * 1000000ULL,
         VAR_11);
}
