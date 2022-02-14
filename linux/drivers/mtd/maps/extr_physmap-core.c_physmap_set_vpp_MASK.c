
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct physmap_flash_info {int vpp_refcnt; int vpp_lock; } ;
struct physmap_flash_data {int (* set_vpp ) (struct platform_device*,int) ;} ;
struct map_info {scalar_t__ map_priv_1; } ;


 struct physmap_flash_data* FUNC_0 (int *) ;
 struct physmap_flash_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct platform_device*,int) ;

__attribute__((used)) static void FUNC_6(struct map_info *VAR_0, int VAR_1)
{
 struct platform_device *VAR_2;
 struct physmap_flash_data *VAR_3;
 struct physmap_flash_info *VAR_4;
 unsigned long VAR_5;

 VAR_2 = (struct platform_device *)VAR_0->map_priv_1;
 VAR_3 = FUNC_0(&VAR_2->dev);

 if (!VAR_3->set_vpp)
  return;

 VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->vpp_lock, VAR_5);
 if (VAR_1) {
  if (++VAR_4->vpp_refcnt == 1)
   VAR_3->set_vpp(VAR_2, 1);
 } else {
  if (--VAR_4->vpp_refcnt == 0)
   VAR_3->set_vpp(VAR_2, 0);
 }
 FUNC_3(&VAR_4->vpp_lock, VAR_5);
}
