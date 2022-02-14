
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp5150 {unsigned int oe; int regmap; scalar_t__ irq; int sd; scalar_t__ lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_7, int VAR_8)
{
 struct tvp5150 *VAR_9 = FUNC_1(VAR_7);
 unsigned int VAR_10, VAR_11 = 0, VAR_12 = 0;

 VAR_10 = VAR_5 | VAR_4 |
        VAR_3;

 if (VAR_8) {
  FUNC_2(VAR_7);


  if (VAR_9->irq)
   VAR_11 = VAR_9->lock ? VAR_9->oe : 0;
  else
   VAR_11 = VAR_9->oe;
  VAR_12 = VAR_0;
  FUNC_3(&VAR_9->sd, &VAR_6);
 }

 FUNC_0(VAR_9->regmap, VAR_2, VAR_10, VAR_11);
 if (VAR_9->irq)

  FUNC_0(VAR_9->regmap, VAR_1,
       VAR_0, VAR_12);

 return 0;
}
