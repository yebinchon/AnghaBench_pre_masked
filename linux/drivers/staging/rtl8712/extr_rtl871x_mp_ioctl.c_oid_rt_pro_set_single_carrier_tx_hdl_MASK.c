
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct _adapter*,int ) ;

uint FUNC_1(struct oid_par_priv
       *VAR_3)
{
 struct _adapter *VAR_4 = (struct _adapter *)
       (VAR_3->adapter_context);
 u32 VAR_5;

 if (VAR_3->type_of_oid != VAR_2)
  return VAR_0;
 VAR_5 = *((u32 *)VAR_3->information_buf);
 FUNC_0(VAR_4, (u8)VAR_5);
 return VAR_1;
}
