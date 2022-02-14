
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_2__ data; TYPE_1__ src_addr; int flags; } ;
typedef scalar_t__ u8 ;
struct mlme_priv {int * assoc_bssid; } ;
struct iw_michaelmicfailure {TYPE_2__ data; TYPE_1__ src_addr; int flags; } ;
struct _adapter {int pnetdev; struct mlme_priv mlmepriv; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (union iwreq_data*,int,int) ;
 int FUNC_2 (int ,int ,union iwreq_data*,char*) ;

void FUNC_3(struct _adapter *VAR_4, u8 VAR_5)
{
 union iwreq_data VAR_6;
 struct iw_michaelmicfailure VAR_7;
 struct mlme_priv *VAR_8 = &VAR_4->mlmepriv;

 FUNC_1(&VAR_7, 0x00, sizeof(VAR_7));
 if (VAR_5)
  VAR_7.flags |= VAR_2;
 else
  VAR_7.flags |= VAR_3;
 VAR_7.src_addr.sa_family = VAR_0;
 FUNC_0(VAR_7.src_addr.sa_data, &VAR_8->assoc_bssid[0]);
 FUNC_1(&VAR_6, 0x00, sizeof(VAR_6));
 VAR_6.data.length = sizeof(VAR_7);
 FUNC_2(VAR_4->pnetdev, VAR_1, &VAR_6,
       (char *)&VAR_7);
}
