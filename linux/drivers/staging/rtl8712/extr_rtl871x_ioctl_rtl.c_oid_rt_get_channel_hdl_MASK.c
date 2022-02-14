
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int * bytes_rw; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct NDIS_802_11_CONFIGURATION {int DSConfig; } ;
struct TYPE_5__ {struct NDIS_802_11_CONFIGURATION Configuration; } ;
struct TYPE_6__ {TYPE_1__ network; } ;
struct mlme_priv {TYPE_2__ cur_network; } ;
struct TYPE_7__ {struct NDIS_802_11_CONFIGURATION Configuration; } ;
struct TYPE_8__ {TYPE_3__ dev_network; } ;
struct _adapter {TYPE_4__ registrypriv; struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;

uint FUNC_1(struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = VAR_5->adapter_context;
 struct mlme_priv *VAR_7 = &VAR_6->mlmepriv;
 struct NDIS_802_11_CONFIGURATION *VAR_8;
 u32 VAR_9;

 if (VAR_5->type_of_oid != VAR_0)
  return VAR_1;
 if (FUNC_0(VAR_7, VAR_4) ||
     FUNC_0(VAR_7, VAR_3))
  VAR_8 = &VAR_7->cur_network.network.Configuration;
 else
  VAR_8 = &VAR_6->registrypriv.dev_network.Configuration;
 VAR_9 = VAR_8->DSConfig;
 *(u32 *)VAR_5->information_buf = VAR_9;
 *VAR_5->bytes_rw = VAR_5->information_buf_len;
 return VAR_2;
}
