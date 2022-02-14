
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sja1105_private {int dummy; } ;
struct sja1105_l2_lookup_entry {int destports; int index; int vlanid; int macaddr; int member_0; } ;
struct dsa_switch {struct device* dev; struct sja1105_private* priv; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int,unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct sja1105_private*,int ,int,struct sja1105_l2_lookup_entry*,int) ;
 int FUNC_5 (struct sja1105_private*,int,struct sja1105_l2_lookup_entry*,int) ;
 int FUNC_6 (struct sja1105_private*,unsigned char const*,int ) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (struct sja1105_private*,int,unsigned char const*,int ,struct sja1105_l2_lookup_entry*,int*) ;

int FUNC_9(struct dsa_switch *VAR_2, int VAR_3,
        const unsigned char *VAR_4, u16 VAR_5)
{
 struct sja1105_l2_lookup_entry VAR_6 = {0};
 struct sja1105_private *VAR_7 = VAR_2->priv;
 struct device *VAR_8 = VAR_2->dev;
 int VAR_9 = -1;
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_6(VAR_7, VAR_4, VAR_5);

 VAR_11 = FUNC_8(VAR_7, VAR_10, VAR_4, VAR_5,
         &VAR_6, &VAR_9);
 if (VAR_11 >= 0) {




  if (VAR_6.destports & FUNC_0(VAR_3))
   return 0;
  VAR_6.destports |= FUNC_0(VAR_3);
 } else {
  int VAR_13 = FUNC_7(VAR_10, VAR_11);




  VAR_6.macaddr = FUNC_2(VAR_4);
  VAR_6.destports = FUNC_0(VAR_3);
  VAR_6.vlanid = VAR_5;

  if (VAR_9 >= 0) {
   VAR_11 = VAR_9;
  } else {






   FUNC_3(&VAR_11, sizeof(u8));
   VAR_11 %= VAR_1;
   FUNC_1(VAR_8, "Warning, FDB bin %d full while adding entry for %pM. Evicting entry %u.\n",
     VAR_10, VAR_4, VAR_11);

   FUNC_4(VAR_7, VAR_0,
           VAR_13, ((void*)0), 0);
  }
 }
 VAR_6.index = FUNC_7(VAR_10, VAR_11);

 VAR_12 = FUNC_4(VAR_7, VAR_0,
       VAR_6.index, &VAR_6,
       1);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_5(VAR_7, VAR_3, &VAR_6, 1);
}
