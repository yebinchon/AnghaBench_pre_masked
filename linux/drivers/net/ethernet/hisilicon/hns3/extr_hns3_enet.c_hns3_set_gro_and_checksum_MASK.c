
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct hns3_enet_ring {int dummy; } ;
struct TYPE_4__ {void* count; } ;
struct TYPE_3__ {int gso_type; void* gso_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct hns3_enet_ring*,struct sk_buff*,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct hns3_enet_ring *VAR_11,
         struct sk_buff *VAR_12, u32 VAR_13,
         u32 VAR_14, u32 VAR_15)
{
 u32 VAR_16;

 FUNC_4(VAR_12)->gso_size = FUNC_1(VAR_14,
          VAR_5,
          VAR_6);

 if (!FUNC_4(VAR_12)->gso_size) {
  FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
  return 0;
 }

 FUNC_0(VAR_12)->count = FUNC_1(VAR_13,
        VAR_3,
        VAR_4);

 VAR_16 = FUNC_1(VAR_13, VAR_7, VAR_8);
 if (VAR_16 == VAR_1)
  FUNC_4(VAR_12)->gso_type = VAR_9;
 else if (VAR_16 == VAR_2)
  FUNC_4(VAR_12)->gso_type = VAR_10;
 else
  return -VAR_0;

 return FUNC_2(VAR_12, VAR_13);
}
