
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct oid_par_priv {scalar_t__ information_buf_len; scalar_t__ type_of_oid; scalar_t__* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct _adapter*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (struct _adapter*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;

uint FUNC_4(struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_5->adapter_context);
 uint VAR_7 = VAR_4;
 u8 *VAR_8;

 *VAR_5->bytes_rw = 0;
 if (VAR_5->information_buf_len < VAR_0)
  return VAR_3;
 VAR_8 = (u8 *)VAR_5->information_buf;
 if (VAR_5->type_of_oid == VAR_1) {
  if (FUNC_0(VAR_6, 0, VAR_0, VAR_8))
   *VAR_5->bytes_rw = VAR_0;
  else
   VAR_7 = VAR_2;
 } else {

  if (FUNC_2(VAR_6)) {
   if (FUNC_1(VAR_6, 0,
       VAR_0, VAR_8))
    *VAR_5->bytes_rw = VAR_0;
   else
    VAR_7 = VAR_2;
   FUNC_3(VAR_6);
  } else {
   VAR_7 = VAR_2;
  }
 }
 return VAR_7;
}
