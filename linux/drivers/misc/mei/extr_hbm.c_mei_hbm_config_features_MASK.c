
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major_version; scalar_t__ minor_version; } ;
struct mei_device {int hbm_f_pg_supported; int hbm_f_dc_supported; int hbm_f_ie_supported; int hbm_f_dot_supported; int hbm_f_ev_supported; int hbm_f_fa_supported; int hbm_f_os_supported; int hbm_f_dr_supported; TYPE_1__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_0(struct mei_device *VAR_10)
{

 VAR_10->hbm_f_pg_supported = 0;
 if (VAR_10->version.major_version > VAR_7)
  VAR_10->hbm_f_pg_supported = 1;

 if (VAR_10->version.major_version == VAR_7 &&
     VAR_10->version.minor_version >= VAR_9)
  VAR_10->hbm_f_pg_supported = 1;

 VAR_10->hbm_f_dc_supported = 0;
 if (VAR_10->version.major_version >= VAR_0)
  VAR_10->hbm_f_dc_supported = 1;

 VAR_10->hbm_f_ie_supported = 0;
 if (VAR_10->version.major_version >= VAR_5)
  VAR_10->hbm_f_ie_supported = 1;


 VAR_10->hbm_f_dot_supported = 0;
 if (VAR_10->version.major_version >= VAR_1)
  VAR_10->hbm_f_dot_supported = 1;


 VAR_10->hbm_f_ev_supported = 0;
 if (VAR_10->version.major_version >= VAR_3)
  VAR_10->hbm_f_ev_supported = 1;


 VAR_10->hbm_f_fa_supported = 0;
 if (VAR_10->version.major_version >= VAR_4)
  VAR_10->hbm_f_fa_supported = 1;


 VAR_10->hbm_f_os_supported = 0;
 if (VAR_10->version.major_version >= VAR_6)
  VAR_10->hbm_f_os_supported = 1;


 VAR_10->hbm_f_dr_supported = 0;
 if (VAR_10->version.major_version > VAR_2 ||
     (VAR_10->version.major_version == VAR_2 &&
      VAR_10->version.minor_version >= VAR_8))
  VAR_10->hbm_f_dr_supported = 1;
}
