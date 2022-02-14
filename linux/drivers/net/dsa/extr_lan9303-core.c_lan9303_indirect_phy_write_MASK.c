
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lan9303 {int indirect_mutex; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct lan9303*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct lan9303 *VAR_3, int VAR_4,
          int VAR_5, u16 VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_4);
 VAR_8 |= FUNC_0(VAR_5);
 VAR_8 |= VAR_1;

 FUNC_3(&VAR_3->indirect_mutex);

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  goto on_error;


 VAR_7 = FUNC_5(VAR_3->regmap, VAR_2, VAR_6);
 if (VAR_7)
  goto on_error;


 VAR_7 = FUNC_5(VAR_3->regmap, VAR_0, VAR_8);

on_error:
 FUNC_4(&VAR_3->indirect_mutex);
 return VAR_7;
}
