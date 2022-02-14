
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct net_device *VAR_2,
      struct sock *VAR_3,
      struct sk_buff *VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_4->dev = VAR_2;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3,
        VAR_4, ((void*)0), VAR_2, FUNC_4);

 if (FUNC_1(VAR_6 == 1))
  VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);


 if (FUNC_1(VAR_6 == 1))
  FUNC_3(VAR_4);
 else
  VAR_4 = ((void*)0);

 return VAR_4;
}
