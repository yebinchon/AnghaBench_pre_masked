
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_i2c_data {int regmap; } ;


 int FUNC_0 (int ,int,void*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1, void *VAR_2,
        size_t VAR_3)
{
 struct video_i2c_data *VAR_4 = VAR_0;

 return FUNC_0(VAR_4->regmap, 0x2400 + VAR_1, VAR_2, VAR_3);
}
