
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int set_scan_deny; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ FUNC_0 (int *) ;

inline bool FUNC_1(struct adapter *VAR_0)
{
 struct mlme_priv *VAR_1 = &VAR_0->mlmepriv;
 return (FUNC_0(&VAR_1->set_scan_deny) != 0) ? 1 : 0;
}
