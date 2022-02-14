
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; struct _adapter* adapter_context; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct _adapter*,unsigned char,unsigned long) ;

uint FUNC_1(struct oid_par_priv*
          VAR_4)
{
 uint VAR_5 = VAR_2;
 struct _adapter *VAR_6 = VAR_4->adapter_context;

 if (VAR_4->type_of_oid != VAR_3)
  return VAR_1;
 if (VAR_4->information_buf_len ==
    (sizeof(unsigned long) * 3)) {
  if (FUNC_0(VAR_6,
   *(unsigned char *)VAR_4->information_buf,
   (unsigned long)(*((unsigned long *)
     VAR_4->information_buf + 2))))
   VAR_5 = VAR_1;
 } else {
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
