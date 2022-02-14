
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan9303 {int indirect_mutex; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct lan9303*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct lan9303 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 VAR_6 |= FUNC_0(VAR_4);

 FUNC_4(&VAR_2->indirect_mutex);

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  goto on_error;


 VAR_5 = FUNC_6(VAR_2->regmap, VAR_0, VAR_6);
 if (VAR_5)
  goto on_error;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  goto on_error;


 VAR_5 = FUNC_3(VAR_2->regmap, VAR_1, &VAR_6);
 if (VAR_5)
  goto on_error;

 FUNC_5(&VAR_2->indirect_mutex);

 return VAR_6 & 0xffff;

on_error:
 FUNC_5(&VAR_2->indirect_mutex);
 return VAR_5;
}
