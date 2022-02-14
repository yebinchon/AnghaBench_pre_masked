
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sas_phy_linkrates {int minimum_linkrate; int maximum_linkrate; } ;
struct domain_device {int sas_addr; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_1 (int ) ;
 int* FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (struct domain_device*,int*,int ,int*,int ) ;

int FUNC_6(struct domain_device *VAR_5, int VAR_6,
   enum phy_func VAR_7,
   struct sas_phy_linkrates *VAR_8)
{
 u8 *VAR_9;
 u8 *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_2);
 if (!VAR_10) {
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 VAR_9[1] = VAR_3;
 VAR_9[9] = VAR_6;
 VAR_9[10]= VAR_7;
 if (VAR_8) {
  VAR_9[32] = VAR_8->minimum_linkrate << 4;
  VAR_9[33] = VAR_8->maximum_linkrate << 4;
 }

 VAR_11 = FUNC_5(VAR_5, VAR_9, VAR_1, VAR_10,VAR_2);
 if (VAR_11) {
  FUNC_4("ex %016llx phy%02d PHY control failed: %d\n",
         FUNC_0(VAR_5->sas_addr), VAR_6, VAR_11);
 } else if (VAR_10[2] != VAR_4) {
  FUNC_4("ex %016llx phy%02d PHY control failed: function result 0x%x\n",
         FUNC_0(VAR_5->sas_addr), VAR_6, VAR_10[2]);
  VAR_11 = VAR_10[2];
 }
 FUNC_3(VAR_10);
 FUNC_3(VAR_9);
 return VAR_11;
}
