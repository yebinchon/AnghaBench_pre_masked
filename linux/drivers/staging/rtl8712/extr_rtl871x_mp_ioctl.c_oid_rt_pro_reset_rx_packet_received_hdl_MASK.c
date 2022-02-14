
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ adapter_context; } ;
struct TYPE_2__ {scalar_t__ rx_crcerrpktcount; scalar_t__ rx_pktcount; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

uint FUNC_0(struct oid_par_priv
          *VAR_4)
{
 uint VAR_5 = VAR_2;
 struct _adapter *VAR_6 = (struct _adapter *)
       (VAR_4->adapter_context);

 if (VAR_4->type_of_oid != VAR_3)
  return VAR_1;
 if (VAR_4->information_buf_len == sizeof(u32)) {
  VAR_6->mppriv.rx_pktcount = 0;
  VAR_6->mppriv.rx_crcerrpktcount = 0;
 } else {
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
