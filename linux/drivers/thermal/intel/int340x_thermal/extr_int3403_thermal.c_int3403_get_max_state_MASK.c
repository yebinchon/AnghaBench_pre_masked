
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct int3403_priv* devdata; } ;
struct int3403_priv {struct int3403_cdev* priv; } ;
struct int3403_cdev {unsigned long max_state; } ;



__attribute__((used)) static int FUNC_0(struct thermal_cooling_device *VAR_0,
     unsigned long *VAR_1)
{
 struct int3403_priv *VAR_2 = VAR_0->devdata;
 struct int3403_cdev *VAR_3 = VAR_2->priv;

 *VAR_1 = VAR_3->max_state;
 return 0;
}
