
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ adapter_context; } ;
struct TYPE_2__ {scalar_t__ tx_pktcount; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

uint FUNC_0(struct oid_par_priv
      *VAR_3)
{
 struct _adapter *VAR_4 = (struct _adapter *)
       (VAR_3->adapter_context);

 if (VAR_3->type_of_oid != VAR_2)
  return VAR_0;
 VAR_4->mppriv.tx_pktcount = 0;
 return VAR_1;
}
