
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sta_info {int hwaddr; } ;
struct mlme_ext_info {int accept_addba_req; } ;
struct TYPE_2__ {struct mlme_ext_info mlmext_info; } ;
struct adapter {int mlmepriv; int stapriv; TYPE_1__ mlmeextpriv; } ;


 int FUNC_0 (int *) ;
 struct sta_info* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct adapter*,int ,int ) ;

void FUNC_3(struct adapter *VAR_0, u8 VAR_1)
{
 struct mlme_ext_info *VAR_2;
 struct sta_info *VAR_3;

 VAR_2 = &VAR_0->mlmeextpriv.mlmext_info;
 VAR_3 = FUNC_1(&VAR_0->stapriv, FUNC_0(&VAR_0->mlmepriv));

 if (VAR_1) {
  VAR_2->accept_addba_req = 0;
  if (VAR_3)
   FUNC_2(VAR_0, 0, VAR_3->hwaddr);
 } else {
  VAR_2->accept_addba_req = 1;
 }
}
