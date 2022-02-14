
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_link_state {int interface; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {int dev; struct gswip_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gswip_priv*,int ,int ,int) ;
 int FUNC_2 (struct gswip_priv*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_8, int VAR_9,
         unsigned int VAR_10,
         const struct phylink_link_state *VAR_11)
{
 struct gswip_priv *VAR_12 = VAR_8->priv;
 u32 VAR_13 = 0;

 VAR_13 |= VAR_0;

 switch (VAR_11->interface) {
 case 134:
 case 135:
  VAR_13 |= VAR_2;
  break;
 case 133:
  VAR_13 |= VAR_3;
  break;
 case 128:
  VAR_13 |= VAR_5;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_13 |= VAR_4;
  break;
 default:
  FUNC_0(VAR_8->dev,
   "Unsupported interface: %d\n", VAR_11->interface);
  return;
 }
 FUNC_1(VAR_12, VAR_1, VAR_13, VAR_9);

 switch (VAR_11->interface) {
 case 131:
  FUNC_2(VAR_12, VAR_7 |
       VAR_6, 0, VAR_9);
  break;
 case 130:
  FUNC_2(VAR_12, VAR_6, 0, VAR_9);
  break;
 case 129:
  FUNC_2(VAR_12, VAR_7, 0, VAR_9);
  break;
 default:
  break;
 }
}
