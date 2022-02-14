
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int* bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*) ;

uint FUNC_3(struct oid_par_priv
           *VAR_4)
{
 struct _adapter *VAR_5 = (struct _adapter *)
       (VAR_4->adapter_context);

 if (VAR_4->type_of_oid != VAR_0)
  return VAR_2;
 if (VAR_4->information_buf_len < sizeof(int))
  return VAR_1;
 FUNC_1(VAR_5);
 *(int *)VAR_4->information_buf =
     FUNC_0(VAR_5);
 FUNC_2(VAR_5);
 *VAR_4->bytes_rw = VAR_4->information_buf_len;
 return VAR_3;
}
