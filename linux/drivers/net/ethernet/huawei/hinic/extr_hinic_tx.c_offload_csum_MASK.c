
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hinic_l4 {int hdr; } ;
union hinic_l3 {void* hdr; TYPE_1__* v4; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct hinic_sq_task {int dummy; } ;
typedef enum hinic_l4_offload_type { ____Placeholder_hinic_l4_offload_type } hinic_l4_offload_type ;
typedef enum hinic_l3_offload_type { ____Placeholder_hinic_l3_offload_type } hinic_l3_offload_type ;
struct TYPE_2__ {int version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,union hinic_l3*,union hinic_l4*,int ,int*,int *) ;
 int FUNC_1 (struct sk_buff*,union hinic_l4*,int ,int ,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct hinic_sq_task*,scalar_t__*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct hinic_sq_task*,int,scalar_t__) ;
 int FUNC_4 (struct hinic_sq_task*,int,scalar_t__) ;
 int FUNC_5 (struct hinic_sq_task*,int ,scalar_t__) ;
 void* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 void* FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct hinic_sq_task *VAR_6, u32 *VAR_7,
   struct sk_buff *VAR_8)
{
 enum hinic_l4_offload_type VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 enum hinic_l3_offload_type VAR_13;
 union hinic_l3 VAR_14;
 union hinic_l4 VAR_15;
 u8 VAR_16;

 if (VAR_8->ip_summed != VAR_0)
  return 0;

 if (VAR_8->encapsulation) {
  u32 VAR_17;

  VAR_14.hdr = FUNC_10(VAR_8);

  if (VAR_14.v4->version == 4)
   VAR_13 = VAR_1;
  else if (VAR_14.v4->version == 6)
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_3;

  FUNC_4(VAR_6, VAR_13,
      FUNC_11(VAR_8));

  VAR_17 = FUNC_8(VAR_8) -
    FUNC_13(VAR_8);

  FUNC_5(VAR_6, VAR_4,
      VAR_17);

  VAR_14.hdr = FUNC_6(VAR_8);
  VAR_15 = FUNC_9(VAR_8);
  VAR_12 = FUNC_7(VAR_8);
 } else {
  VAR_14.hdr = FUNC_10(VAR_8);
  VAR_15 = FUNC_12(VAR_8);
  VAR_12 = FUNC_11(VAR_8);
 }

 FUNC_0(VAR_8, &VAR_14, &VAR_15, VAR_5, &VAR_13,
        &VAR_16);

 FUNC_3(VAR_6, VAR_13, VAR_12);

 FUNC_1(VAR_8, &VAR_15, VAR_5, VAR_16, &VAR_9,
     &VAR_11, &VAR_10);

 FUNC_2(VAR_6, VAR_7, VAR_9, VAR_11, VAR_10);

 return 1;
}
