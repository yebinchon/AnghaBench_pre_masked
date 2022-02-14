
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int curr_ch; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct _adapter*) ;

uint FUNC_1(struct oid_par_priv
         *VAR_4)
{
 struct _adapter *VAR_5 = (struct _adapter *)
       (VAR_4->adapter_context);
 u32 VAR_6;

 if (VAR_4->type_of_oid != VAR_3)
  return VAR_1;
 if (VAR_4->information_buf_len != sizeof(u32))
  return VAR_0;
 VAR_6 = *((u32 *)VAR_4->information_buf);
 if (VAR_6 > 14)
  return VAR_1;
 VAR_5->mppriv.curr_ch = VAR_6;
 FUNC_0(VAR_5);
 return VAR_2;
}
