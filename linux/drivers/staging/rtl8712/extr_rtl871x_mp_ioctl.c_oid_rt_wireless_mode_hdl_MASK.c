
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int wireless_mode; } ;
struct _adapter {TYPE_1__ registrypriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

uint FUNC_0(struct oid_par_priv *VAR_5)
{
 uint VAR_6 = VAR_3;
 struct _adapter *VAR_7 = (struct _adapter *)
       (VAR_5->adapter_context);

 if (VAR_5->type_of_oid == VAR_4) {
  if (VAR_5->information_buf_len >= sizeof(u8))
   VAR_7->registrypriv.wireless_mode =
     *(u8 *)VAR_5->information_buf;
  else
   VAR_6 = VAR_1;
 } else if (VAR_5->type_of_oid == VAR_0) {
  if (VAR_5->information_buf_len >= sizeof(u8)) {
   *(u8 *)VAR_5->information_buf =
      VAR_7->registrypriv.wireless_mode;
   *VAR_5->bytes_rw =
     VAR_5->information_buf_len;
  } else {
   VAR_6 = VAR_1;
  }
 } else {
  VAR_6 = VAR_2;
 }
 return VAR_6;
}
