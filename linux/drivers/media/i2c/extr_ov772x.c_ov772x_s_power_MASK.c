
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {int power_count; int lock; int win; int cfmt; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ov772x_priv*) ;
 int FUNC_4 (struct ov772x_priv*) ;
 int FUNC_5 (struct ov772x_priv*,int ,int ) ;
 struct ov772x_priv* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov772x_priv *VAR_2 = FUNC_6(VAR_0);
 int VAR_3 = 0;

 FUNC_1(&VAR_2->lock);




 if (VAR_2->power_count == !VAR_1) {
  if (VAR_1) {
   VAR_3 = FUNC_4(VAR_2);




   if (!VAR_3)
    VAR_3 = FUNC_5(VAR_2, VAR_2->cfmt,
       VAR_2->win);
  } else {
   VAR_3 = FUNC_3(VAR_2);
  }
 }

 if (!VAR_3) {

  VAR_2->power_count += VAR_1 ? 1 : -1;
  FUNC_0(VAR_2->power_count < 0, "Unbalanced power count\n");
  FUNC_0(VAR_2->power_count > 1, "Duplicated s_power call\n");
 }

 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
