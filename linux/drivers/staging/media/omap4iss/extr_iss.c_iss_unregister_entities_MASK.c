
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int media_dev; int v4l2_dev; int csi2b; int csi2a; int ipipeif; int ipipe; int resizer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iss_device *VAR_0)
{
 FUNC_4(&VAR_0->resizer);
 FUNC_2(&VAR_0->ipipe);
 FUNC_3(&VAR_0->ipipeif);
 FUNC_1(&VAR_0->csi2a);
 FUNC_1(&VAR_0->csi2b);

 FUNC_5(&VAR_0->v4l2_dev);
 FUNC_0(&VAR_0->media_dev);
}
