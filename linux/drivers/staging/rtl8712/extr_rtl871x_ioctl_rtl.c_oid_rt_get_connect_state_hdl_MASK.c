
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int * bytes_rw; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct mlme_priv {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;

uint FUNC_1(struct oid_par_priv *VAR_10)
{
 struct _adapter *VAR_11 = VAR_10->adapter_context;
 struct mlme_priv *VAR_12 = &(VAR_11->mlmepriv);
 u32 VAR_13;

 if (VAR_10->type_of_oid != VAR_4)
  return VAR_5;





 if (FUNC_0(VAR_12, VAR_9))
  VAR_13 = VAR_2;
 else if (FUNC_0(VAR_12, VAR_8))
  VAR_13 = VAR_1;
 else if (FUNC_0(VAR_12, VAR_7))
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_3;
 *(u32 *)VAR_10->information_buf = VAR_13;
 *VAR_10->bytes_rw = VAR_10->information_buf_len;
 return VAR_6;
}
