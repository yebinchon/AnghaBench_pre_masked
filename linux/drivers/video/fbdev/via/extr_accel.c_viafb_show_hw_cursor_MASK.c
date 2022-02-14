
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct viafb_par {int iga_path; TYPE_2__* shared; } ;
struct fb_info {struct viafb_par* par; } ;
struct TYPE_4__ {TYPE_1__* vdev; } ;
struct TYPE_3__ {scalar_t__ engine_mmio; } ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct fb_info *VAR_1, int VAR_2)
{
 struct viafb_par *VAR_3 = VAR_1->par;
 u32 VAR_4, VAR_5 = VAR_3->iga_path;

 VAR_4 = FUNC_0(VAR_3->shared->vdev->engine_mmio + VAR_0);
 switch (VAR_2) {
 case 130:
  VAR_4 |= 0x1;
  break;
 case 131:
  VAR_4 &= 0xFFFFFFFE;
  break;
 }
 switch (VAR_5) {
 case 128:
  VAR_4 |= 0x80000000;
  break;
 case 129:
 default:
  VAR_4 &= 0x7FFFFFFF;
 }
 FUNC_1(VAR_4, VAR_3->shared->vdev->engine_mmio + VAR_0);
}
