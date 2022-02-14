
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rtw_intf_phy_para {int cut_mask; int offset; int value; scalar_t__ ip_sel; } ;
struct TYPE_3__ {int cut_version; } ;
struct rtw_dev {TYPE_1__ hal; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_2__* intf_table; } ;
struct TYPE_4__ {int n_gen1_para; int n_gen2_para; struct rtw_intf_phy_para* gen2_para; struct rtw_intf_phy_para* gen1_para; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rtw_dev*,int,int) ;
 int FUNC_2 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_1->chip;
 struct rtw_intf_phy_para *VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(0) << VAR_1->hal.cut_version;

 for (VAR_7 = 0; VAR_7 < VAR_2->intf_table->n_gen1_para; VAR_7++) {
  VAR_3 = &VAR_2->intf_table->gen1_para[VAR_7];
  if (!(VAR_3->cut_mask & VAR_4))
   continue;
  if (VAR_3->offset == 0xffff)
   break;
  VAR_6 = VAR_3->offset;
  VAR_5 = VAR_3->value;
  if (VAR_3->ip_sel == VAR_0)
   FUNC_2(VAR_1, VAR_6, VAR_5, 1);
  else
   FUNC_1(VAR_1, VAR_6, VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->intf_table->n_gen2_para; VAR_7++) {
  VAR_3 = &VAR_2->intf_table->gen2_para[VAR_7];
  if (!(VAR_3->cut_mask & VAR_4))
   continue;
  if (VAR_3->offset == 0xffff)
   break;
  VAR_6 = VAR_3->offset;
  VAR_5 = VAR_3->value;
  if (VAR_3->ip_sel == VAR_0)
   FUNC_2(VAR_1, VAR_6, VAR_5, 0);
  else
   FUNC_1(VAR_1, VAR_6, VAR_5);
 }
}
