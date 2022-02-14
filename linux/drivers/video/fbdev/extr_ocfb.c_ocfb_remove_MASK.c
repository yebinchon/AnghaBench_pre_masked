
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int smem_len; } ;
struct TYPE_4__ {TYPE_1__ fix; int cmap; } ;
struct ocfb_dev {int fb_phys; int fb_virt; TYPE_2__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfb_dev*,int ,int ) ;
 struct ocfb_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct ocfb_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_6(&VAR_2->info);
 FUNC_2(&VAR_2->info.cmap);
 FUNC_1(&VAR_1->dev, FUNC_0(VAR_2->info.fix.smem_len),
     VAR_2->fb_virt, VAR_2->fb_phys);


 FUNC_3(VAR_2, VAR_0, 0);

 FUNC_5(VAR_1, ((void*)0));

 return 0;
}
