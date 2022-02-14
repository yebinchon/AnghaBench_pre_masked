
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int map; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct realtek_smi *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->dev, "%s VLAN\n", VAR_3 ? "enable" : "disable");
 return FUNC_1(VAR_2->map,
      VAR_0, VAR_1,
      VAR_3 ? VAR_1 : 0);
}
