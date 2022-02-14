
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ql_adapter {int func; TYPE_1__* ndev; } ;
struct TYPE_2__ {int features; } ;


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




 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ql_adapter*,int ,TYPE_1__*,char*,int) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_12, u8 *VAR_13, u32 VAR_14,
          u16 VAR_15)
{
 u32 VAR_16 = 0;
 int VAR_17 = 0;

 switch (VAR_14) {
 case 129:
  {
   u32 VAR_18 = (VAR_13[0] << 8) | VAR_13[1];
   u32 VAR_19 = (VAR_13[2] << 24) | (VAR_13[3] << 16) |
     (VAR_13[4] << 8) | (VAR_13[5]);

   VAR_17 =
    FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, (VAR_16++) |
    (VAR_15 << VAR_8) |
    VAR_14 | VAR_6);
   FUNC_2(VAR_12, VAR_5, VAR_19);
   VAR_17 =
    FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, (VAR_16++) |
    (VAR_15 << VAR_8) |
    VAR_14 | VAR_6);

   FUNC_2(VAR_12, VAR_5, VAR_18);
   VAR_17 =
    FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   break;
  }
 case 131:
  {
   u32 VAR_20;
   u32 VAR_21 = (VAR_13[0] << 8) | VAR_13[1];
   u32 VAR_22 =
       (VAR_13[2] << 24) | (VAR_13[3] << 16) | (VAR_13[4] << 8) |
       (VAR_13[5]);
   VAR_17 =
       FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, (VAR_16++) |
       (VAR_15 << VAR_8) |
       VAR_14);
   FUNC_2(VAR_12, VAR_5, VAR_22);
   VAR_17 =
       FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, (VAR_16++) |
       (VAR_15 << VAR_8) |
       VAR_14);
   FUNC_2(VAR_12, VAR_5, VAR_21);
   VAR_17 =
       FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, (VAR_16) |
       (VAR_15 << VAR_8) |
       VAR_14);




   VAR_20 = (VAR_2 |
          (VAR_12->
           func << VAR_1) |
     (0 << VAR_0));
   if (VAR_12->ndev->features & VAR_10)
    VAR_20 |= VAR_3;

   FUNC_2(VAR_12, VAR_5, VAR_20);
   break;
  }
 case 128:
  {
   u32 VAR_23 = *((u32 *) &VAR_13[0]);





   VAR_17 =
       FUNC_1(VAR_12,
    VAR_7, VAR_9, 0);
   if (VAR_17)
    goto exit;
   FUNC_2(VAR_12, VAR_7, VAR_16 |
       (VAR_15 << VAR_8) |
       VAR_14 |
       VAR_23);
   break;
  }
 case 130:
 default:
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev,
      "Address type %d not yet supported.\n", VAR_14);
  VAR_17 = -VAR_4;
 }
exit:
 return VAR_17;
}
