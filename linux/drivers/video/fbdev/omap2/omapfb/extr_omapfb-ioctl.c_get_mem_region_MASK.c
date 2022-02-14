
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omapfb_info {int id; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {int dummy; } ;
struct omapfb2_device {int num_fbs; struct omapfb2_mem_region* regions; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct omapfb2_mem_region *FUNC_0(struct omapfb_info *VAR_2,
       u8 VAR_3)
{
 struct omapfb2_device *VAR_4 = VAR_2->fbdev;

 if (VAR_3 & VAR_0)
  VAR_3 &= VAR_1;
 else
  VAR_3 = VAR_2->id;

 if (VAR_3 >= VAR_4->num_fbs)
  return ((void*)0);

 return &VAR_4->regions[VAR_3];
}
