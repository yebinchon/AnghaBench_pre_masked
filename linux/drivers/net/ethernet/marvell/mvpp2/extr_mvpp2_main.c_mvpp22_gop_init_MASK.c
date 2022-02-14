
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int phy_interface; int dev; int gop_id; struct mvpp2* priv; } ;
struct mvpp2 {int sysctrl_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct mvpp2_port *VAR_6)
{
 struct mvpp2 *VAR_7 = VAR_6->priv;
 u32 VAR_8;

 if (!VAR_7->sysctrl_base)
  return 0;

 switch (VAR_6->phy_interface) {
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_6->gop_id == 0)
   goto invalid_conf;
  FUNC_3(VAR_6);
  break;
 case 128:
 case 135:
 case 133:
  FUNC_4(VAR_6);
  break;
 case 134:
  if (VAR_6->gop_id != 0)
   goto invalid_conf;
  FUNC_2(VAR_6);
  break;
 default:
  goto unsupported_conf;
 }

 FUNC_6(VAR_7->sysctrl_base, VAR_3, &VAR_8);
 VAR_8 |= FUNC_1(VAR_6->gop_id) |
        FUNC_0(VAR_6->gop_id);
 FUNC_7(VAR_7->sysctrl_base, VAR_3, VAR_8);

 FUNC_6(VAR_7->sysctrl_base, VAR_1, &VAR_8);
 VAR_8 |= VAR_2;
 FUNC_7(VAR_7->sysctrl_base, VAR_1, VAR_8);

 FUNC_6(VAR_7->sysctrl_base, VAR_4, &VAR_8);
 VAR_8 |= VAR_5;
 FUNC_7(VAR_7->sysctrl_base, VAR_4, VAR_8);

unsupported_conf:
 return 0;

invalid_conf:
 FUNC_5(VAR_6->dev, "Invalid port configuration\n");
 return -VAR_0;
}
