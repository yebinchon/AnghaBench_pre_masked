
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; int * bytes_rw; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct mp_rw_reg {int offset; int width; int value; } ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct _adapter*,int) ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int) ;
 int FUNC_3 (struct _adapter*,int) ;

uint FUNC_4(struct oid_par_priv
      *VAR_3)
{
 struct _adapter *VAR_4 = (struct _adapter *)
       (VAR_3->adapter_context);
 uint VAR_5 = VAR_2;
 struct mp_rw_reg *VAR_6;
 u16 VAR_7;

 if (VAR_3->type_of_oid != VAR_0)
  return VAR_1;
 VAR_6 = (struct mp_rw_reg *)VAR_3->information_buf;
 if ((VAR_6->offset >= 0x10250800) &&
     (VAR_6->offset <= 0x10250FFF)) {


  VAR_7 = (u16)(VAR_6->offset) & 0xFFF;
  VAR_6->value = FUNC_0(VAR_4, VAR_7);
 } else {
  switch (VAR_6->width) {
  case 1:
   VAR_6->value = FUNC_3(VAR_4,
         VAR_6->offset);
   break;
  case 2:
   VAR_6->value = FUNC_1(VAR_4,
          VAR_6->offset);
   break;
  case 4:
   VAR_6->value = FUNC_2(VAR_4,
          VAR_6->offset);
   break;
  default:
   VAR_5 = VAR_1;
   break;
  }
 }
 *VAR_3->bytes_rw = VAR_3->information_buf_len;
 return VAR_5;
}
