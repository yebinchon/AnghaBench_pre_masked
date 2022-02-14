
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {scalar_t__ fw_type; scalar_t__ fw; scalar_t__ need_fw_reset; TYPE_1__ ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct netxen_adapter*,int ) ;
 int FUNC_3 (struct netxen_adapter*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct netxen_adapter*) ;

int
FUNC_7(struct netxen_adapter *VAR_11)
{
 u32 VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 u8 VAR_21;


 if (FUNC_4(VAR_11->ahw.revision_id))
  return 1;

 if (VAR_11->need_fw_reset)
  return 1;


 if (FUNC_2(VAR_11, VAR_0) == VAR_10)
  return 1;

 VAR_13 = FUNC_2(VAR_11, VAR_6);

 for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {

  VAR_20 = FUNC_5(200);
  if (VAR_20) {
   FUNC_3(VAR_11, VAR_0,
     VAR_10);
   return -VAR_1;
  }

  VAR_12 = FUNC_2(VAR_11, VAR_6);
  if (VAR_12 != VAR_13)
   break;
 }


 if (VAR_12 == VAR_13)
  return 1;


 if (VAR_11->fw) {

  VAR_14 = FUNC_6(VAR_11);

  VAR_15 = FUNC_0(VAR_14);

  VAR_16 = FUNC_2(VAR_11, VAR_2);
  VAR_17 = FUNC_2(VAR_11, VAR_3);
  VAR_18 = FUNC_2(VAR_11, VAR_4);

  if (VAR_15 > FUNC_1(VAR_16, VAR_17, VAR_18))
   return 1;

  if (VAR_15 == FUNC_1(VAR_16, VAR_17, VAR_18) &&
   VAR_11->fw_type != VAR_9) {

   VAR_14 = FUNC_2(VAR_11, VAR_5);
   VAR_21 = (VAR_14 & 0x4) ?
    VAR_7 : VAR_8;

   if (VAR_11->fw_type != VAR_21)
    return 1;
  }
 }

 return 0;
}
