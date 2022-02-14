
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct TYPE_2__ {scalar_t__ preamble; } ;
struct _adapter {TYPE_1__ registrypriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

uint FUNC_0(struct oid_par_priv *VAR_7)
{
 struct _adapter *VAR_8 = VAR_7->adapter_context;
 u32 VAR_9 = 0;

 if (VAR_7->type_of_oid != VAR_3)
  return VAR_5;
 if (VAR_7->information_buf_len >= sizeof(u32)) {
  if (VAR_8->registrypriv.preamble == VAR_1)
   VAR_9 = 0;
  else if (VAR_8->registrypriv.preamble == VAR_0)
   VAR_9 = 1;
  else if (VAR_8->registrypriv.preamble == VAR_2)
   VAR_9 = 2;
  *(u32 *)VAR_7->information_buf = VAR_9;
  *VAR_7->bytes_rw = VAR_7->information_buf_len;
 } else {
  return VAR_4;
 }
 return VAR_6;
}
