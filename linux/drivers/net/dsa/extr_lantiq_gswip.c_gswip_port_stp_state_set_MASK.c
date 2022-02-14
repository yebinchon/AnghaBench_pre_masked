
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct gswip_priv {int dev; } ;
struct dsa_switch {struct gswip_priv* priv; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct gswip_priv*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_5, int VAR_6, u8 VAR_7)
{
 struct gswip_priv *VAR_8 = VAR_5->priv;
 u32 VAR_9;

 switch (VAR_7) {
 case 131:
  FUNC_3(VAR_8, VAR_4, 0,
      FUNC_1(VAR_6));
  return;
 case 132:
 case 128:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_0;
  break;
 default:
  FUNC_2(VAR_8->dev, "invalid STP state: %d\n", VAR_7);
  return;
 }

 FUNC_3(VAR_8, 0, VAR_4,
     FUNC_1(VAR_6));
 FUNC_3(VAR_8, VAR_3, VAR_9,
     FUNC_0(VAR_6));
}
