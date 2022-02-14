
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; int information_buf_len; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int check_mp_pkt; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 scalar_t__ VAR_10 ;
 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (struct _adapter*,int ,int) ;

uint FUNC_2(struct oid_par_priv
        *VAR_11)
{
 struct _adapter *VAR_12 = (struct _adapter *)
       (VAR_11->adapter_context);
 u8 VAR_13;
 u32 VAR_14;

 if (VAR_11->type_of_oid != VAR_10)
  return VAR_8;
 if (VAR_11->information_buf_len < sizeof(u8))
  return VAR_7;
 VAR_13 = *((u8 *)VAR_11->information_buf);
 VAR_14 = FUNC_0(VAR_12, VAR_0);
 VAR_14 &= ~(VAR_6 | VAR_2 | VAR_4 | VAR_5 | VAR_1);
 switch (VAR_13) {
 case 130:
  VAR_14 |= (VAR_2 | VAR_4 | VAR_5 | VAR_1 | VAR_3);
  break;
 case 129:
  VAR_14 |= (VAR_2 | VAR_4 | VAR_5 | VAR_1 | VAR_3);
  break;
 case 128:
  VAR_14 |= (VAR_5 | VAR_3);
  break;
 default:
  VAR_14 &= ~(VAR_1 |
          VAR_5 |
          VAR_4 |
          VAR_2 |
          VAR_3);
  break;
 }
 if (VAR_13 == 129)
  VAR_12->mppriv.check_mp_pkt = 1;
 else
  VAR_12->mppriv.check_mp_pkt = 0;
 FUNC_1(VAR_12, VAR_0, VAR_14);
 return VAR_9;
}
