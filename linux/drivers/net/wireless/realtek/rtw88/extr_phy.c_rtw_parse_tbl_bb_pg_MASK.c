
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_table {int size; struct phy_pg_cfg_pair* data; } ;
struct rtw_dev {int dummy; } ;
struct phy_pg_cfg_pair {int addr; int data; int bitmask; int tx_num; int rf_path; int band; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int ,int,int ,int ) ;

void FUNC_3(struct rtw_dev *VAR_0, const struct rtw_table *VAR_1)
{
 const struct phy_pg_cfg_pair *VAR_2 = VAR_1->data;
 const struct phy_pg_cfg_pair *VAR_3 = VAR_2 + VAR_1->size / 6;

 FUNC_0(sizeof(struct phy_pg_cfg_pair) != sizeof(u32) * 6);

 for (; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_2->addr == 0xfe || VAR_2->addr == 0xffe) {
   FUNC_1(50);
   continue;
  }
  FUNC_2(VAR_0, VAR_2->band, VAR_2->rf_path,
            VAR_2->tx_num, VAR_2->addr, VAR_2->bitmask,
            VAR_2->data);
 }
}
