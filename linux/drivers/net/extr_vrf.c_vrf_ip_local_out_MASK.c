
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int (*) (struct net*,struct sock*,struct sk_buff*)) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct sock *VAR_3,
       struct sk_buff *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, ((void*)0), FUNC_3(VAR_4)->dev, FUNC_0);
 if (FUNC_1(VAR_5 == 1))
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
