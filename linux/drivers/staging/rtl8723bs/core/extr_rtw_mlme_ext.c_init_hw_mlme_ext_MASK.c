
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {int cur_bwmode; int cur_ch_offset; int cur_channel; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,int ) ;

int FUNC_1(struct adapter *VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &VAR_1->mlmeextpriv;

 FUNC_0(VAR_1, VAR_2->cur_channel, VAR_2->cur_ch_offset, VAR_2->cur_bwmode);
 return VAR_0;
}
