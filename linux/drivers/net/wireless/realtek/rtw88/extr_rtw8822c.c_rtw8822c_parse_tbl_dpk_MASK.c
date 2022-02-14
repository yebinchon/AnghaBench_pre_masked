
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_table {int size; struct dpk_cfg_pair* data; } ;
struct rtw_dev {int dummy; } ;
struct dpk_cfg_pair {int data; int bitmask; int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int ,int ,int ) ;

void FUNC_2(struct rtw_dev *VAR_0,
       const struct rtw_table *VAR_1)
{
 const struct dpk_cfg_pair *VAR_2 = VAR_1->data;
 const struct dpk_cfg_pair *VAR_3 = VAR_2 + VAR_1->size / 3;

 FUNC_0(sizeof(struct dpk_cfg_pair) != sizeof(u32) * 3);

 for (; VAR_2 < VAR_3; VAR_2++)
  FUNC_1(VAR_0, VAR_2->addr, VAR_2->bitmask, VAR_2->data);
}
