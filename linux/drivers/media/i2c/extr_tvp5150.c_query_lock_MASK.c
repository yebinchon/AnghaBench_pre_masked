
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int lock; int regmap; scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1)
{
 struct tvp5150 *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->irq)
  return VAR_2->lock;

 FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);


 return (VAR_3 & 0x0e) == 0x0e;
}
