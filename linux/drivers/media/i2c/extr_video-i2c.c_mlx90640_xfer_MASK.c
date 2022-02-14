
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; int regmap; } ;
struct TYPE_2__ {int buffer_size; } ;


 int FUNC_0 (int ,int,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct video_i2c_data *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_0->regmap, 0x400, VAR_1,
    VAR_0->chip->buffer_size);
}
