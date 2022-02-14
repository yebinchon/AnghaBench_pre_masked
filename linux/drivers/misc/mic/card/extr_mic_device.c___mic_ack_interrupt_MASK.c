
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_device {int dummy; } ;
struct mic_driver {int mdev; } ;


 int FUNC_0 (int *) ;
 struct mic_driver* FUNC_1 (struct vop_device*) ;

__attribute__((used)) static void FUNC_2(struct vop_device *VAR_0, int VAR_1)
{
 struct mic_driver *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->mdev);
}
