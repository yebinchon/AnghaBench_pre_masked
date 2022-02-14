
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct atyfb_par {scalar_t__ bus_type; int aux_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fb_info *VAR_2)
{
 struct atyfb_par *VAR_3 = (struct atyfb_par *) VAR_2->par;

 if (!VAR_3->aux_start &&
     (VAR_2->fix.smem_len == 0x800000 ||
      (VAR_3->bus_type == VAR_1 && VAR_2->fix.smem_len == 0x400000)))
  VAR_2->fix.smem_len -= VAR_0;
}
