
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct dsa_switch*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_2);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1->dev, "Failed to setup VLAN tagging for port %d: %d\n",
    VAR_4, VAR_3);
   return VAR_3;
  }
 }
 FUNC_1(VAR_1->dev, "%s switch tagging\n",
   VAR_2 ? "Enabled" : "Disabled");
 return 0;
}
