
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dev; int protocol; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5, struct sock *VAR_6,
        struct sk_buff *VAR_7)
{
 VAR_7->protocol = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, VAR_3,
       VAR_5, VAR_6, VAR_7, ((void*)0), VAR_7->dev,
       VAR_4,
       !(FUNC_0(VAR_7)->flags & VAR_1));
}
