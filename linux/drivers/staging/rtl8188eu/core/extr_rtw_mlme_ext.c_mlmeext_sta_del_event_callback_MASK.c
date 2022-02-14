
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {int link_timer; int cur_bwmode; int cur_ch_offset; int cur_channel; struct mlme_ext_info mlmext_info; } ;
struct TYPE_2__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int * VAR_6 ;
 int FUNC_5 (struct adapter*,int ,int *) ;
 int FUNC_6 (struct adapter*,int ,int ,int ) ;
 int FUNC_7 (struct adapter*,int ) ;

void FUNC_8(struct adapter *VAR_7)
{
 struct mlme_ext_priv *VAR_8 = &VAR_7->mlmeextpriv;
 struct mlme_ext_info *VAR_9 = &VAR_8->mlmext_info;

 if (FUNC_4(VAR_7) || FUNC_3(VAR_7)) {
  FUNC_5(VAR_7, VAR_3, ((void*)0));
  FUNC_5(VAR_7, VAR_2, VAR_6);


  FUNC_7(VAR_7, VAR_7->registrypriv.wireless_mode);


  VAR_8->cur_bwmode = VAR_1;
  VAR_8->cur_ch_offset = VAR_0;


  FUNC_6(VAR_7, VAR_8->cur_channel, VAR_8->cur_ch_offset, VAR_8->cur_bwmode);

  FUNC_2(VAR_7);

  VAR_9->state = VAR_4;


  FUNC_0(VAR_7, VAR_5);

  FUNC_1(&VAR_8->link_timer);
 }
}
