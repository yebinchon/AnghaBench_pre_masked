
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mei_me_hw {scalar_t__ d0i3_supported; } ;
struct TYPE_2__ {int minor_version; int major_version; } ;
struct mei_device {TYPE_1__ version; int dev; int hbm_f_pg_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct mei_device*) ;
 struct mei_me_hw* FUNC_2 (struct mei_device*) ;

__attribute__((used)) static bool FUNC_3(struct mei_device *VAR_3)
{
 struct mei_me_hw *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_3);

 if (VAR_4->d0i3_supported)
  return 1;

 if ((VAR_5 & VAR_2) == 0)
  goto notsupported;

 if (!VAR_3->hbm_f_pg_supported)
  goto notsupported;

 return 1;

notsupported:
 FUNC_0(VAR_3->dev, "pg: not supported: d0i3 = %d HGP = %d hbm version %d.%d ?= %d.%d\n",
  VAR_4->d0i3_supported,
  !!(VAR_5 & VAR_2),
  VAR_3->version.major_version,
  VAR_3->version.minor_version,
  VAR_0,
  VAR_1);

 return 0;
}
