
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset; scalar_t__ busy; } ;
union cvmx_mixx_ctl {void* u64; TYPE_1__ s; } ;
union cvmx_mixx_bist {void* u64; } ;
union cvmx_agl_gmx_bist {void* u64; } ;
struct octeon_mgmt {int dev; scalar_t__ mix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,void*) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct octeon_mgmt *VAR_3)
{
 union cvmx_mixx_ctl VAR_4;
 union cvmx_mixx_bist VAR_5;
 union cvmx_agl_gmx_bist VAR_6;

 VAR_4.u64 = 0;
 FUNC_1(VAR_3->mix + VAR_2, VAR_4.u64);
 do {
  VAR_4.u64 = FUNC_0(VAR_3->mix + VAR_2);
 } while (VAR_4.s.busy);
 VAR_4.s.reset = 1;
 FUNC_1(VAR_3->mix + VAR_2, VAR_4.u64);
 FUNC_0(VAR_3->mix + VAR_2);
 FUNC_3(64);

 VAR_5.u64 = FUNC_0(VAR_3->mix + VAR_1);
 if (VAR_5.u64)
  FUNC_2(VAR_3->dev, "MIX failed BIST (0x%016llx)\n",
   (unsigned long long)VAR_5.u64);

 VAR_6.u64 = FUNC_0(VAR_0);
 if (VAR_6.u64)
  FUNC_2(VAR_3->dev, "AGL failed BIST (0x%016llx)\n",
    (unsigned long long)VAR_6.u64);
}
