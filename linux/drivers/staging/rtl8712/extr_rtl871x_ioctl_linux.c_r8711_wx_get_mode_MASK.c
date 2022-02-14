
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 struct _adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8, struct iw_request_info *VAR_9,
        union iwreq_data *VAR_10, char *VAR_11)
{
 struct _adapter *VAR_12 = FUNC_1(VAR_8);
 struct mlme_priv *VAR_13 = &VAR_12->mlmepriv;

 if (FUNC_0(VAR_13, VAR_7))
  VAR_10->mode = VAR_2;
 else if (FUNC_0(VAR_13,
   VAR_4 | VAR_5))
  VAR_10->mode = VAR_0;
 else if (FUNC_0(VAR_13, VAR_6))
  VAR_10->mode = VAR_3;
 else
  VAR_10->mode = VAR_1;
 return 0;
}
