
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sja1105_private {int dummy; } ;
struct sja1105_l2_lookup_entry {int mask_iotag; int destports; int lockeds; int index; scalar_t__ mask_vlanid; int mask_macaddr; int iotag; int vlanid; int macaddr; int member_0; } ;
struct dsa_switch {int dev; int * ports; struct sja1105_private* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned char const*) ;
 int FUNC_5 (struct sja1105_private*,int ,int,struct sja1105_l2_lookup_entry*) ;
 int FUNC_6 (struct sja1105_private*,int ,int,struct sja1105_l2_lookup_entry*,int) ;
 int FUNC_7 (struct sja1105_private*,int,struct sja1105_l2_lookup_entry*,int) ;

int FUNC_8(struct dsa_switch *VAR_7, int VAR_8,
   const unsigned char *VAR_9, u16 VAR_10)
{
 struct sja1105_l2_lookup_entry VAR_11 = {0};
 struct sja1105_private *VAR_12 = VAR_7->priv;
 int VAR_13, VAR_14;


 VAR_11.macaddr = FUNC_4(VAR_9);
 VAR_11.vlanid = VAR_10;
 VAR_11.iotag = VAR_5;
 VAR_11.mask_macaddr = FUNC_1(VAR_2 * 8 - 1, 0);
 if (FUNC_3(&VAR_7->ports[VAR_8])) {
  VAR_11.mask_vlanid = VAR_6;
  VAR_11.mask_iotag = FUNC_0(0);
 } else {
  VAR_11.mask_vlanid = 0;
  VAR_11.mask_iotag = 0;
 }
 VAR_11.destports = FUNC_0(VAR_8);

 VAR_13 = FUNC_5(VAR_12, VAR_0,
      VAR_4, &VAR_11);
 if (VAR_13 == 0) {



  if (VAR_11.destports & FUNC_0(VAR_8))
   return 0;



  VAR_11.destports |= FUNC_0(VAR_8);
  goto skip_finding_an_index;
 }





 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_13 = FUNC_5(VAR_12, VAR_0,
       VAR_14, ((void*)0));
  if (VAR_13 < 0)
   break;
 }
 if (VAR_14 == VAR_3) {
  FUNC_2(VAR_7->dev, "FDB is full, cannot add entry.\n");
  return -VAR_1;
 }
 VAR_11.lockeds = 1;
 VAR_11.index = VAR_14;

skip_finding_an_index:
 VAR_13 = FUNC_6(VAR_12, VAR_0,
       VAR_11.index, &VAR_11,
       1);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_7(VAR_12, VAR_8, &VAR_11, 1);
}
