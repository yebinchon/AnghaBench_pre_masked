
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct m_can_classdev {struct device* dev; struct net_device* net; } ;
struct device {int dummy; } ;
typedef int mram_config_vals ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct device*) ;
 struct net_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ,char*,int *,int) ;
 int FUNC_5 (struct m_can_classdev*,int *) ;
 struct m_can_classdev* FUNC_6 (struct net_device*) ;

struct m_can_classdev *FUNC_7(struct device *VAR_1)
{
 struct m_can_classdev *VAR_2 = ((void*)0);
 u32 VAR_3[VAR_0];
 struct net_device *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(FUNC_3(VAR_1),
          "bosch,mram-cfg",
          VAR_3,
          sizeof(VAR_3) / 4);
 if (VAR_6) {
  FUNC_2(VAR_1, "Could not get Message RAM configuration.");
  goto out;
 }




 VAR_5 = VAR_3[7];


 VAR_4 = FUNC_1(sizeof(*VAR_2), VAR_5);
 if (!VAR_4) {
  FUNC_2(VAR_1, "Failed to allocate CAN device");
  goto out;
 }

 VAR_2 = FUNC_6(VAR_4);
 if (!VAR_2) {
  FUNC_2(VAR_1, "Failed to init netdev cdevate");
  goto out;
 }

 VAR_2->net = VAR_4;
 VAR_2->dev = VAR_1;
 FUNC_0(VAR_4, VAR_1);

 FUNC_5(VAR_2, VAR_3);
out:
 return VAR_2;
}
