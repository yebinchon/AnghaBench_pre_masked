
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; } ;
typedef int info ;
typedef enum mt76_msg_port { ____Placeholder_mt76_msg_port } mt76_msg_port ;
typedef enum mt76_info_type { ____Placeholder_mt76_info_type } mt76_info_type ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_3,
           enum mt76_msg_port VAR_4,
           enum mt76_info_type VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 VAR_7 = VAR_6 |
  FUNC_0(VAR_1, FUNC_2(VAR_3->len, 4)) |
  FUNC_0(VAR_0, VAR_4) |
  FUNC_0(VAR_2, VAR_5);

 FUNC_1(VAR_7, FUNC_3(VAR_3, sizeof(VAR_7)));
 return FUNC_4(VAR_3, FUNC_2(VAR_3->len, 4) + 4);
}
