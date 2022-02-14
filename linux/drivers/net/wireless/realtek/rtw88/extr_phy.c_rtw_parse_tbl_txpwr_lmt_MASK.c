
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_txpwr_lmt_cfg_pair {int txpwr_lmt; int ch; int rs; int bw; int band; int regd; } ;
struct rtw_table {int size; struct rtw_txpwr_lmt_cfg_pair* data; } ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtw_dev*) ;

void FUNC_2(struct rtw_dev *VAR_0,
        const struct rtw_table *VAR_1)
{
 const struct rtw_txpwr_lmt_cfg_pair *VAR_2 = VAR_1->data;
 const struct rtw_txpwr_lmt_cfg_pair *VAR_3 = VAR_2 + VAR_1->size;

 for (; VAR_2 < VAR_3; VAR_2++) {
  FUNC_0(VAR_0, VAR_2->regd, VAR_2->band,
        VAR_2->bw, VAR_2->rs, VAR_2->ch, VAR_2->txpwr_lmt);
 }

 FUNC_1(VAR_0);
}
