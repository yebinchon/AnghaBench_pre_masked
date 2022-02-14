
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numerator; scalar_t__ denominator; } ;
struct video_i2c_data {int regmap; TYPE_1__ frame_interval; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct video_i2c_data *VAR_2)
{
 unsigned int VAR_3 = VAR_0;
 unsigned int VAR_4;

 if (VAR_2->frame_interval.numerator == VAR_2->frame_interval.denominator)
  VAR_4 = VAR_3;
 else
  VAR_4 = 0;

 return FUNC_0(VAR_2->regmap, VAR_1, VAR_3, VAR_4);
}
