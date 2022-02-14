
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int addr; } ;
struct rtw_phy_cond {int branch; scalar_t__ neg; scalar_t__ pos; int member_0; } ;
union phy_table_tile {TYPE_1__ cfg; struct rtw_phy_cond cond; } ;
struct rtw_table {int size; int (* do_cfg ) (struct rtw_dev*,struct rtw_table const*,int ,int ) ;union phy_table_tile* data; } ;
struct rtw_dev {int dummy; } ;
struct phy_cfg_pair {int dummy; } ;






 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,struct rtw_phy_cond) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_table const*,int ,int ) ;

void FUNC_3(struct rtw_dev *VAR_0, const struct rtw_table *VAR_1)
{
 const union phy_table_tile *VAR_2 = VAR_1->data;
 const union phy_table_tile *VAR_3 = VAR_2 + VAR_1->size / 2;
 struct rtw_phy_cond VAR_4 = {0};
 bool VAR_5 = 1, VAR_6 = 0;

 FUNC_0(sizeof(union phy_table_tile) != sizeof(struct phy_cfg_pair));

 for (; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_2->cond.pos) {
   switch (VAR_2->cond.branch) {
   case 129:
    VAR_5 = 1;
    VAR_6 = 0;
    break;
   case 130:
    VAR_5 = VAR_6 ? 0 : 1;
    break;
   case 128:
   case 131:
   default:
    VAR_4 = VAR_2->cond;
    break;
   }
  } else if (VAR_2->cond.neg) {
   if (!VAR_6) {
    if (FUNC_1(VAR_0, VAR_4)) {
     VAR_5 = 1;
     VAR_6 = 1;
    } else {
     VAR_5 = 0;
     VAR_6 = 0;
    }
   } else {
    VAR_5 = 0;
   }
  } else if (VAR_5) {
   (*VAR_1->do_cfg)(VAR_0, VAR_1, VAR_2->cfg.addr, VAR_2->cfg.data);
  }
 }
}
