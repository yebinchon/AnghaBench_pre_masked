
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; } ;
struct omap_vout_device {scalar_t__ dss_mode; int bpp; TYPE_1__ pix; int * smsshado_phy_addr; int * vrfb_context; int vrfb_static_allocation; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct omap_vout_device*) ;
 scalar_t__ FUNC_1 (struct omap_vout_device*,unsigned int*,unsigned int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int) ;

int FUNC_3(struct omap_vout_device *VAR_4,
     unsigned int *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 bool VAR_8;

 if (!FUNC_0(VAR_4))
  return 0;


 *VAR_5 = *VAR_5 > VAR_3 ? VAR_3 : *VAR_5;




 if (!VAR_4->vrfb_static_allocation)
  if (FUNC_1(VAR_4, VAR_5, VAR_6))
   return -VAR_0;

 if (VAR_4->dss_mode == VAR_2 ||
   VAR_4->dss_mode == VAR_1)
  VAR_8 = 1;
 else
  VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < *VAR_5; VAR_7++)
  FUNC_2(&VAR_4->vrfb_context[VAR_7],
    VAR_4->smsshado_phy_addr[VAR_7], VAR_4->pix.width,
    VAR_4->pix.height, VAR_4->bpp, VAR_8);

 return 0;
}
