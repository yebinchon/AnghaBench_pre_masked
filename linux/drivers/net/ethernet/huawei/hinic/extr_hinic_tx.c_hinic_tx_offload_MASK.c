
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hinic_sq_task {int dummy; } ;
typedef enum hinic_offload_type { ____Placeholder_hinic_offload_type } hinic_offload_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct hinic_sq_task*,int ) ;
 int FUNC_4 (struct hinic_sq_task*,int *,struct sk_buff*) ;
 int FUNC_5 (struct hinic_sq_task*,int *,struct sk_buff*) ;
 int FUNC_6 (struct hinic_sq_task*,int *,int,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_9, struct hinic_sq_task *VAR_10,
       u32 *VAR_11)
{
 enum hinic_offload_type VAR_12 = 0;
 u16 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_5(VAR_10, VAR_11, VAR_9);
 if (VAR_14 > 0) {
  VAR_12 |= VAR_6;
 } else if (VAR_14 == 0) {
  VAR_14 = FUNC_4(VAR_10, VAR_11, VAR_9);
  if (VAR_14)
   VAR_12 |= VAR_5;
 } else {
  return -VAR_0;
 }

 if (FUNC_10(FUNC_9(VAR_9))) {
  VAR_13 = FUNC_8(VAR_9);
  FUNC_6(VAR_10, VAR_11, VAR_13,
        VAR_13 >> VAR_8);
  VAR_12 |= VAR_7;
 }

 if (VAR_12)
  FUNC_3(VAR_10, FUNC_7(VAR_9));


 if (FUNC_1(*VAR_11, VAR_4) >
     VAR_2) {
  return -VAR_0;
 }


 if (FUNC_1(*VAR_11, VAR_3) < VAR_1) {
  *VAR_11 = FUNC_0(*VAR_11, VAR_3);
  *VAR_11 |= FUNC_2(VAR_1, VAR_3);
 }

 return 0;
}
