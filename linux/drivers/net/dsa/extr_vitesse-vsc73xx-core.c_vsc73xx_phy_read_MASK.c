
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc73xx {int dev; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vsc73xx*,int ,int ,int,int*) ;
 int FUNC_5 (struct vsc73xx*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct dsa_switch *VAR_2, int VAR_3, int VAR_4)
{
 struct vsc73xx *VAR_5 = VAR_2->priv;
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8;


 VAR_6 = FUNC_0(26) | (VAR_3 << 21) | (VAR_4 << 16);
 VAR_8 = FUNC_5(VAR_5, VAR_1, 0, 1, VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_3(2);
 VAR_8 = FUNC_4(VAR_5, VAR_1, 0, 2, &VAR_7);
 if (VAR_8)
  return VAR_8;
 if (VAR_7 & FUNC_0(16)) {
  FUNC_2(VAR_5->dev, "reading reg %02x from phy%d failed\n",
   VAR_4, VAR_3);
  return -VAR_0;
 }
 VAR_7 &= 0xFFFFU;

 FUNC_1(VAR_5->dev, "read reg %02x from phy%d = %04x\n",
  VAR_4, VAR_3, VAR_7);

 return VAR_7;
}
