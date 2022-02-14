
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int protocol; struct net_device* dev; } ;
struct net_device {int dev_addr; int ptype_all; } ;
struct net {int dummy; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct ethhdr* FUNC_9 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_1, struct sock *VAR_2,
        struct sk_buff *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->dev;

 if (!FUNC_4(&VAR_4->ptype_all) &&
     FUNC_3(FUNC_7(VAR_3) >= VAR_0)) {
  struct ethhdr *VAR_5 = FUNC_9(VAR_3, VAR_0);

  FUNC_2(VAR_5->h_source, VAR_4->dev_addr);
  FUNC_1(VAR_5->h_dest);
  VAR_5->h_proto = VAR_3->protocol;

  FUNC_5();
  FUNC_0(VAR_3, VAR_4);
  FUNC_6();

  FUNC_8(VAR_3, VAR_0);
 }

 return 1;
}
