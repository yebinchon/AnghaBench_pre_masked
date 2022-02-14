
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned int,struct net*,int *,struct sk_buff*,struct net_device*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct sk_buff *FUNC_2(u8 VAR_1, unsigned int VAR_2,
          struct sk_buff *VAR_3,
          struct net_device *VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_1, VAR_2, VAR_5, ((void*)0), VAR_3, VAR_4, ((void*)0), VAR_0) != 1)
  VAR_3 = ((void*)0);

 return VAR_3;
}
