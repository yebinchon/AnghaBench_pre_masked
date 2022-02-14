
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm9000_plat_data {int dev_addr; int flags; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dm9000_plat_data* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void const*) ;
 struct dm9000_plat_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int ,void const*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int *) ;
 void* FUNC_6 (struct device_node*) ;

__attribute__((used)) static struct dm9000_plat_data *FUNC_7(struct device *VAR_6)
{
 struct dm9000_plat_data *VAR_7;
 struct device_node *VAR_8 = VAR_6->of_node;
 const void *VAR_9;

 if (!FUNC_1(VAR_0) || !VAR_8)
  return FUNC_0(-VAR_4);

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_3);

 if (FUNC_5(VAR_8, "davicom,ext-phy", ((void*)0)))
  VAR_7->flags |= VAR_1;
 if (FUNC_5(VAR_8, "davicom,no-eeprom", ((void*)0)))
  VAR_7->flags |= VAR_2;

 VAR_9 = FUNC_6(VAR_8);
 if (!FUNC_2(VAR_9))
  FUNC_4(VAR_7->dev_addr, VAR_9);

 return VAR_7;
}
