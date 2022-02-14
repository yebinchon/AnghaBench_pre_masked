
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sja1105_private {TYPE_2__* ds; } ;
struct sja1105_mgmt_entry {int enfport; int takets; scalar_t__ tsreg; int destports; int macaddr; int member_0; } ;
struct ethhdr {int h_dest; } ;
struct dsa_switch {TYPE_1__* ports; struct sja1105_private* priv; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int slave; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 struct ethhdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sja1105_private*,int ,int,struct sja1105_mgmt_entry*) ;
 int FUNC_8 (struct sja1105_private*,int ,int,struct sja1105_mgmt_entry*,int) ;

__attribute__((used)) static int FUNC_9(struct dsa_switch *VAR_2, int VAR_3, int VAR_4,
        struct sk_buff *VAR_5, bool VAR_6)
{
 struct sja1105_mgmt_entry VAR_7 = {0};
 struct sja1105_private *VAR_8 = VAR_2->priv;
 struct ethhdr *VAR_9;
 int VAR_10 = 10;
 int VAR_11;

 VAR_9 = FUNC_4(VAR_5);

 VAR_7.macaddr = FUNC_5(VAR_9->h_dest);
 VAR_7.destports = FUNC_0(VAR_3);
 VAR_7.enfport = 1;
 VAR_7.tsreg = 0;
 VAR_7.takets = VAR_6;

 VAR_11 = FUNC_8(VAR_8, VAR_0,
       VAR_4, &VAR_7, 1);
 if (VAR_11 < 0) {
  FUNC_6(VAR_5);
  return VAR_11;
 }


 FUNC_3(VAR_5, VAR_2->ports[VAR_3].slave);


 do {
  VAR_11 = FUNC_7(VAR_8, VAR_0,
       VAR_4, &VAR_7);
  if (VAR_11 < 0) {
   FUNC_2(VAR_8->ds->dev,
         "failed to poll for mgmt route\n");
   continue;
  }





  FUNC_1();
 } while (VAR_7.enfport && --VAR_10);

 if (!VAR_10) {





  FUNC_8(VAR_8, VAR_0,
          VAR_4, &VAR_7, 0);
  FUNC_2(VAR_8->ds->dev, "xmit timed out\n");
 }

 return VAR_1;
}
