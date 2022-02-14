
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vsc73xx {int dev; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct vsc73xx*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_1, int VAR_2, int VAR_3,
        u16 VAR_4)
{
 struct vsc73xx *VAR_5 = VAR_1->priv;
 u32 VAR_6;
 int VAR_7;







 if (VAR_3 == 0 && (VAR_4 & FUNC_0(15))) {
  FUNC_2(VAR_5->dev, "reset PHY - disallowed\n");
  return 0;
 }

 VAR_6 = (VAR_2 << 21) | (VAR_3 << 16);
 VAR_7 = FUNC_3(VAR_5, VAR_0, 0, 1, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_5->dev, "write %04x to reg %02x in phy%d\n",
  VAR_4, VAR_3, VAR_2);
 return 0;
}
