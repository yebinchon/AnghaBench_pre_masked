
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10, struct iw_request_info *VAR_11,
        union iwreq_data *VAR_12, char *VAR_13)
{
 struct adapter *VAR_14 = (struct adapter *)FUNC_2(VAR_10);
 struct mlme_priv *VAR_15 = &(VAR_14->mlmepriv);

 FUNC_0(VAR_9, VAR_8, (" rtw_wx_get_mode\n"));

 if (FUNC_1(VAR_15, VAR_7))
  VAR_12->mode = VAR_2;
 else if ((FUNC_1(VAR_15, VAR_4)) ||
    (FUNC_1(VAR_15, VAR_5)))
  VAR_12->mode = VAR_0;
 else if (FUNC_1(VAR_15, VAR_6))
  VAR_12->mode = VAR_3;
 else
  VAR_12->mode = VAR_1;

 return 0;
}
