
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct mp_rw_reg {int offset; int value; int width; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct _adapter*,int) ;
 int FUNC_1 (struct _adapter*,int,int) ;
 int FUNC_2 (struct _adapter*,int,unsigned short) ;
 int FUNC_3 (struct _adapter*,int,unsigned int) ;
 int FUNC_4 (struct _adapter*,int,unsigned char) ;

uint FUNC_5(struct oid_par_priv *VAR_3)
{
 struct _adapter *VAR_4 = (struct _adapter *)
       (VAR_3->adapter_context);
 uint VAR_5 = VAR_1;
 struct mp_rw_reg *VAR_6;
 u16 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = 0;

 if (VAR_3->type_of_oid != VAR_2)
  return VAR_0;
 VAR_6 = (struct mp_rw_reg *)VAR_3->information_buf;
 if ((VAR_6->offset >= 0x10250800) &&
     (VAR_6->offset <= 0x10250FFF)) {

  VAR_7 = (u16)(VAR_6->offset) & 0xFFF;
  VAR_8 = VAR_6->value;
  switch (VAR_6->width) {
  case 1:
   VAR_9 = FUNC_0(VAR_4, VAR_7);
   VAR_9 &= 0xFFFFFF00;
   VAR_8 &= 0x000000FF;
   VAR_8 |= VAR_9;
   break;
  case 2:
   VAR_9 = FUNC_0(VAR_4, VAR_7);
   VAR_9 &= 0xFFFF0000;
   VAR_8 &= 0x0000FFFF;
   VAR_8 |= VAR_9;
   break;
  }
  FUNC_1(VAR_4, VAR_7, VAR_8);
 } else {
  switch (VAR_6->width) {
  case 1:
   FUNC_4(VAR_4, VAR_6->offset,
          (unsigned char)VAR_6->value);
   break;
  case 2:
   FUNC_2(VAR_4, VAR_6->offset,
    (unsigned short)VAR_6->value);
   break;
  case 4:
   FUNC_3(VAR_4, VAR_6->offset,
    (unsigned int)VAR_6->value);
   break;
  default:
   VAR_5 = VAR_0;
   break;
  }
 }
 return VAR_5;
}
