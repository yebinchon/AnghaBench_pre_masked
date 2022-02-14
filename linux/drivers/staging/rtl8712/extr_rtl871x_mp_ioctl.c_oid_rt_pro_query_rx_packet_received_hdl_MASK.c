
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int rx_pktcount; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint FUNC_0(
     struct oid_par_priv *VAR_4)
{
 uint VAR_5 = VAR_3;
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_4->adapter_context);

 if (VAR_4->type_of_oid != VAR_0) {
  VAR_5 = VAR_2;
  return VAR_5;
 }
 if (VAR_4->information_buf_len == sizeof(u32)) {
  *(u32 *)VAR_4->information_buf =
     VAR_6->mppriv.rx_pktcount;
  *VAR_4->bytes_rw = VAR_4->information_buf_len;
 } else {
  VAR_5 = VAR_1;
 }
 return VAR_5;
}
