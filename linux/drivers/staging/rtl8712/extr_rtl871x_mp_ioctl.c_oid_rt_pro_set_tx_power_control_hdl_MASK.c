
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {scalar_t__ curr_txpoweridx; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct _adapter*) ;

uint FUNC_1(
     struct oid_par_priv *VAR_5)
{
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_5->adapter_context);
 u32 VAR_7;

 if (VAR_5->type_of_oid != VAR_4)
  return VAR_2;
 if (VAR_5->information_buf_len != sizeof(u32))
  return VAR_1;
 VAR_7 = *((u32 *)VAR_5->information_buf);
 if (VAR_7 > VAR_0)
  return VAR_2;
 VAR_6->mppriv.curr_txpoweridx = (u8)VAR_7;
 FUNC_0(VAR_6);
 return VAR_3;
}
