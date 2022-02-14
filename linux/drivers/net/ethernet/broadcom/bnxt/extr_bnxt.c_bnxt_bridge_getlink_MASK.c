
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bnxt {int br_mode; } ;


 int FUNC_0 (struct sk_buff*,int ,int ,struct net_device*,int ,int ,int ,int,int ,int *) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, u32 VAR_1, u32 VAR_2,
          struct net_device *VAR_3, u32 VAR_4,
          int VAR_5)
{
 struct bnxt *VAR_6 = FUNC_1(VAR_3);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6->br_mode, 0, 0,
           VAR_5, VAR_4, ((void*)0));
}
