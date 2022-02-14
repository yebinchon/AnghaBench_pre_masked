
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; scalar_t__ height; scalar_t__ width; } ;
struct mt9m032 {TYPE_1__ crop; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt9m032*,int *) ;
 int FUNC_1 (struct i2c_client*,int ,scalar_t__) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mt9m032 *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(&VAR_4->subdev);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
       VAR_4->crop.width - 1);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_2,
        VAR_4->crop.height - 1);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_1,
        VAR_4->crop.left);
 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_5, VAR_3,
        VAR_4->crop.top);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_4, ((void*)0));
 return VAR_6;
}
