
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_test_priv {int ok; int comp; } ;
struct sk_buff {int dummy; } ;
struct packet_type {struct stmmac_test_priv* af_packet_priv; } ;
struct net_device {int dev_addr; } ;
struct ethhdr {scalar_t__ h_proto; int h_source; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1,
      struct net_device *VAR_2,
      struct packet_type *VAR_3,
      struct net_device *VAR_4)
{
 struct stmmac_test_priv *VAR_5 = VAR_3->af_packet_priv;
 struct ethhdr *VAR_6;

 VAR_6 = (struct ethhdr *)FUNC_4(VAR_1);
 if (!FUNC_1(VAR_6->h_source, VAR_4->dev_addr))
  goto out;
 if (VAR_6->h_proto != FUNC_2(VAR_0))
  goto out;

 VAR_5->ok = 1;
 FUNC_0(&VAR_5->comp);
out:
 FUNC_3(VAR_1);
 return 0;
}
