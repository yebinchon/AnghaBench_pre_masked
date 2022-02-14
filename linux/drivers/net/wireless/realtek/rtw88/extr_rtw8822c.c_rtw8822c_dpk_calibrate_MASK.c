
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rtw_dpk_info {int dpk_path_ok; scalar_t__* result; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct rtw_dev*,int ,size_t) ;
 int FUNC_1 (struct rtw_dev*,size_t,int ,size_t) ;
 int FUNC_2 (struct rtw_dev*,size_t) ;
 int FUNC_3 (struct rtw_dev*,int ,char*,size_t) ;
 int FUNC_4 (struct rtw_dev*,char*) ;
 int FUNC_5 (size_t,int ) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_1, u8 VAR_2)
{
 struct rtw_dpk_info *VAR_3 = &VAR_1->dm_info.dpk_info;
 u32 VAR_4;
 u8 VAR_5;

 FUNC_3(VAR_1, VAR_0, "[DPK] s%d dpk start\n", VAR_2);

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_2);

 if (!FUNC_1(VAR_1, VAR_5, VAR_4, VAR_2))
  FUNC_4(VAR_1, "failed to do dpk calibration\n");

 FUNC_3(VAR_1, VAR_0, "[DPK] s%d dpk finish\n", VAR_2);

 if (VAR_3->result[VAR_2])
  FUNC_5(VAR_2, VAR_3->dpk_path_ok);
}
