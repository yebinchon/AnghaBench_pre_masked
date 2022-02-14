
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct oid_par_priv {scalar_t__ type_of_oid; scalar_t__ information_buf; scalar_t__ adapter_context; } ;
struct TYPE_2__ {int mode; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*,int ) ;
 int FUNC_5 (struct _adapter*,int ,int) ;
 int FUNC_6 (struct _adapter*,scalar_t__,int) ;

uint FUNC_7(struct oid_par_priv *VAR_8)
{
 struct _adapter *VAR_9 = (struct _adapter *)
       (VAR_8->adapter_context);
 uint VAR_10 = VAR_4;
 u32 VAR_11;
 u8 VAR_12;

 if (VAR_8->type_of_oid != VAR_6)
  return VAR_3;
 VAR_11 = *((u32 *)VAR_8->information_buf);
 VAR_9->mppriv.mode = VAR_11;
 if (FUNC_0(VAR_9))
  VAR_10 = VAR_3;
 FUNC_6(VAR_9, VAR_1, 1);
 FUNC_6(VAR_9, VAR_2, 0);

 FUNC_6(VAR_9, VAR_2 + 2, 0x57);

 FUNC_5(VAR_9, VAR_5, 0x0);
 VAR_12 = FUNC_4(VAR_9, VAR_0);
 if (!(VAR_12 & VAR_7)) {
  FUNC_2(VAR_9);
  FUNC_1(VAR_9);
  FUNC_3(VAR_9);
 }
 return VAR_10;
}
