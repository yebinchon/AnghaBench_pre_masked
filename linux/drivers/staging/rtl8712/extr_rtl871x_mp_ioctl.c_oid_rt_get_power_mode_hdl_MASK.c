
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {scalar_t__ low_power; } ;
struct _adapter {TYPE_1__ registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

uint FUNC_0(struct oid_par_priv *VAR_6)
{
 struct _adapter *VAR_7 = (struct _adapter *)
       (VAR_6->adapter_context);

 if (VAR_6->type_of_oid != VAR_2)
  return VAR_4;
 if (VAR_6->information_buf_len < sizeof(u32))
  return VAR_3;
 *(int *)VAR_6->information_buf =
   VAR_7->registrypriv.low_power ? VAR_0 : VAR_1;
 *VAR_6->bytes_rw = VAR_6->information_buf_len;
 return VAR_5;
}
