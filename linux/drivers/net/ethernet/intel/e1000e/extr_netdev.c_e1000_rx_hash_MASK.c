
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int features; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_2, __le32 VAR_3,
     struct sk_buff *VAR_4)
{
 if (VAR_2->features & VAR_0)
  FUNC_1(VAR_4, FUNC_0(VAR_3), VAR_1);
}
