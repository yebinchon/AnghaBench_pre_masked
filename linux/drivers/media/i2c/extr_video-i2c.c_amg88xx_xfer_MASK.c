
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; int regmap; } ;
struct TYPE_2__ {int buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct video_i2c_data *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_1->regmap, VAR_0, VAR_2,
    VAR_1->chip->buffer_size);
}
