
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct csi2rx_priv {int lock; int count; } ;


 int FUNC_0 (struct csi2rx_priv*) ;
 int FUNC_1 (struct csi2rx_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct csi2rx_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct csi2rx_priv *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);

 if (VAR_1) {




  if (!VAR_2->count) {
   VAR_3 = FUNC_0(VAR_2);
   if (VAR_3)
    goto out;
  }

  VAR_2->count++;
 } else {
  VAR_2->count--;




  if (!VAR_2->count)
   FUNC_1(VAR_2);
 }

out:
 FUNC_3(&VAR_2->lock);
 return VAR_3;
}
