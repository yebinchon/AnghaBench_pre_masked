
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_port {scalar_t__ wwpn; int supported_classes; int maxframe_size; scalar_t__ wwnn; TYPE_2__* adapter; scalar_t__ d_id; } ;
struct TYPE_7__ {int sp_bb_data; } ;
struct fc_els_flogi {TYPE_4__* fl_cssp; TYPE_3__ fl_csp; int fl_wwnn; int fl_wwpn; } ;
struct TYPE_8__ {int cp_class; } ;
struct TYPE_6__ {TYPE_1__* ccw_device; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned long long,unsigned long long) ;

void FUNC_4(struct zfcp_port *VAR_5, struct fc_els_flogi *VAR_6)
{
 if (FUNC_1(VAR_6->fl_wwpn) != VAR_5->wwpn) {
  VAR_5->d_id = 0;
  FUNC_3(&VAR_5->adapter->ccw_device->dev,
    "A port opened with WWPN 0x%016Lx returned data that "
    "identifies it as WWPN 0x%016Lx\n",
    (unsigned long long) VAR_5->wwpn,
    (unsigned long long) FUNC_1(VAR_6->fl_wwpn));
  return;
 }

 VAR_5->wwnn = FUNC_1(VAR_6->fl_wwnn);
 VAR_5->maxframe_size = FUNC_0(VAR_6->fl_csp.sp_bb_data);

 if (VAR_6->fl_cssp[0].cp_class & FUNC_2(VAR_4))
  VAR_5->supported_classes |= VAR_0;
 if (VAR_6->fl_cssp[1].cp_class & FUNC_2(VAR_4))
  VAR_5->supported_classes |= VAR_1;
 if (VAR_6->fl_cssp[2].cp_class & FUNC_2(VAR_4))
  VAR_5->supported_classes |= VAR_2;
 if (VAR_6->fl_cssp[3].cp_class & FUNC_2(VAR_4))
  VAR_5->supported_classes |= VAR_3;
}
