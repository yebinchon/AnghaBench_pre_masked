
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ adapter_context; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct _adapter*) ;

uint FUNC_1(struct oid_par_priv *VAR_4)
{
 struct _adapter *VAR_5 = (struct _adapter *)
       (VAR_4->adapter_context);
 uint VAR_6 = VAR_1;

 if (VAR_4->type_of_oid != VAR_2)
  return VAR_0;
 if (FUNC_0(VAR_5) == VAR_3)
  VAR_6 = VAR_0;
 return VAR_6;
}
