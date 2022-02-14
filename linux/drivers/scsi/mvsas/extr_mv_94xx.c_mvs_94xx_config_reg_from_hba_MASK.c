
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int* phy_rate; TYPE_4__* ffe_ctl; TYPE_3__* phy_tuning; } ;
struct mvs_info {TYPE_2__ hba_info_param; TYPE_1__* pdev; } ;
struct TYPE_8__ {int ffe_rss_sel; int ffe_cap_sel; } ;
struct TYPE_7__ {int trans_emp_amp; int trans_amp; int trans_amp_adj; } ;
struct TYPE_5__ {int revision; } ;







 int FUNC_0 (struct mvs_info*,int,TYPE_4__) ;
 int FUNC_1 (struct mvs_info*,int,int) ;
 int FUNC_2 (struct mvs_info*,int,TYPE_3__) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_0, int VAR_1)
{
 u32 VAR_2;
 VAR_2 = (u32)(*(u32 *)&VAR_0->hba_info_param.phy_tuning[VAR_1]);
 if (VAR_2 == 0xFFFFFFFFL) {
  VAR_0->hba_info_param.phy_tuning[VAR_1].trans_emp_amp = 0x6;
  VAR_0->hba_info_param.phy_tuning[VAR_1].trans_amp = 0x1A;
  VAR_0->hba_info_param.phy_tuning[VAR_1].trans_amp_adj = 0x3;
 }

 VAR_2 = (u8)(*(u8 *)&VAR_0->hba_info_param.ffe_ctl[VAR_1]);
 if (VAR_2 == 0xFFL) {
  switch (VAR_0->pdev->revision) {
  case 132:
  case 131:
   VAR_0->hba_info_param.ffe_ctl[VAR_1].ffe_rss_sel = 0x7;
   VAR_0->hba_info_param.ffe_ctl[VAR_1].ffe_cap_sel = 0x7;
   break;
  case 130:
  case 129:
  case 128:
  default:
   VAR_0->hba_info_param.ffe_ctl[VAR_1].ffe_rss_sel = 0x7;
   VAR_0->hba_info_param.ffe_ctl[VAR_1].ffe_cap_sel = 0xC;
   break;
  }
 }

 VAR_2 = (u8)(*(u8 *)&VAR_0->hba_info_param.phy_rate[VAR_1]);
 if (VAR_2 == 0xFFL)

  VAR_0->hba_info_param.phy_rate[VAR_1] = 0x2;

 FUNC_2(VAR_0, VAR_1,
  VAR_0->hba_info_param.phy_tuning[VAR_1]);
 FUNC_0(VAR_0, VAR_1,
  VAR_0->hba_info_param.ffe_ctl[VAR_1]);
 FUNC_1(VAR_0, VAR_1,
  VAR_0->hba_info_param.phy_rate[VAR_1]);
}
