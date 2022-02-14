
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int core_enabled; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1,
  u8 *VAR_2, int VAR_3)
{
 bool VAR_4;
 int VAR_5;

 VAR_4 = VAR_0.core_enabled == 0;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4)
  FUNC_0(VAR_1);

 return VAR_5;
}
