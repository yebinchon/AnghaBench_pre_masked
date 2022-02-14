
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlme_priv {int dummy; } ;
struct TYPE_2__ {int ips_deny_time; } ;
struct adapter {TYPE_1__ pwrctrlpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct adapter *VAR_8)
{
 struct mlme_priv *VAR_9 = &(VAR_8->mlmepriv);
 bool VAR_10 = 0;

 if (FUNC_1(VAR_8->pwrctrlpriv.ips_deny_time, VAR_7))
  goto exit;

 if (FUNC_0(VAR_9, VAR_3|VAR_4) ||
     FUNC_0(VAR_9, VAR_5|VAR_6) ||
     FUNC_0(VAR_9, VAR_2) ||
     FUNC_0(VAR_9, VAR_0|VAR_1))
  goto exit;

 VAR_10 = 1;

exit:
 return VAR_10;
}
