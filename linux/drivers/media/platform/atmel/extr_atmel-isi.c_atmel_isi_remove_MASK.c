
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fbd {int dummy; } ;
struct atmel_isi {int v4l2_dev; int notifier; int fb_descriptors_phys; int p_fb_descriptors; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 struct atmel_isi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct atmel_isi *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_1->dev,
   sizeof(struct fbd) * VAR_0,
   VAR_2->p_fb_descriptors,
   VAR_2->fb_descriptors_phys);
 FUNC_2(&VAR_1->dev);
 FUNC_4(&VAR_2->notifier);
 FUNC_3(&VAR_2->notifier);
 FUNC_5(&VAR_2->v4l2_dev);

 return 0;
}
