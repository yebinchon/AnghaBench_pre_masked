
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct TYPE_2__ {scalar_t__ rx_drop; scalar_t__ rx_pkts; } ;
struct _adapter {TYPE_1__ recvpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint FUNC_0(struct oid_par_priv *VAR_4)
{
 struct _adapter *VAR_5 = VAR_4->adapter_context;

 if (VAR_4->type_of_oid != VAR_0)
  return VAR_2;
 if (VAR_4->information_buf_len >= sizeof(u32)) {
  *(u32 *)VAR_4->information_buf =
      VAR_5->recvpriv.rx_pkts +
      VAR_5->recvpriv.rx_drop;
  *VAR_4->bytes_rw = VAR_4->information_buf_len;
 } else {
  return VAR_1;
 }
 return VAR_3;
}
