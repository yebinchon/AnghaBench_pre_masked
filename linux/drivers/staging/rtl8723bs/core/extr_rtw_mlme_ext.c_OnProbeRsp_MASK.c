
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union recv_frame {int dummy; } recv_frame ;
struct TYPE_2__ {scalar_t__ state; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct adapter*,union recv_frame*) ;

unsigned int FUNC_1(struct adapter *VAR_2, union recv_frame *VAR_3)
{
 struct mlme_ext_priv *VAR_4 = &VAR_2->mlmeextpriv;

 if (VAR_4->sitesurvey_res.state == VAR_0) {
  FUNC_0(VAR_2, VAR_3);
  return VAR_1;
 }

 return VAR_1;

}
