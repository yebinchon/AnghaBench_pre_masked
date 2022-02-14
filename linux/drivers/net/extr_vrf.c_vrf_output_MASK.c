
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int protocol; struct net_device* dev; int len; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct net *VAR_6, struct sock *VAR_7, struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = FUNC_4(VAR_8)->dev;

 FUNC_1(VAR_6, VAR_2, VAR_8->len);

 VAR_8->dev = VAR_9;
 VAR_8->protocol = FUNC_3(VAR_0);

 return FUNC_2(VAR_3, VAR_4,
       VAR_6, VAR_7, VAR_8, ((void*)0), VAR_9,
       VAR_5,
       !(FUNC_0(VAR_8)->flags & VAR_1));
}
