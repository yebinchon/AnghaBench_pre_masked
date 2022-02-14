
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int features; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,struct ethhdr*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct net_device *VAR_4, struct sk_buff *VAR_5)
{
 struct ethhdr *VAR_6;
 u16 VAR_7;
 if ((VAR_4->features & VAR_2) &&
     !FUNC_0(VAR_5, &VAR_7)) {
  VAR_6 = (struct ethhdr *)VAR_5->data;
  FUNC_3(VAR_5->data + VAR_3, VAR_6, VAR_0 * 2);
  FUNC_4(VAR_5, VAR_3);
  FUNC_1(VAR_5, FUNC_2(VAR_1), VAR_7);
 }
}
