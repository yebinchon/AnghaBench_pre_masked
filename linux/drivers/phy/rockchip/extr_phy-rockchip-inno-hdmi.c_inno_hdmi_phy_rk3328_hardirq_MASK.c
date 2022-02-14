
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi_phy {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inno_hdmi_phy*,int) ;
 int FUNC_1 (struct inno_hdmi_phy*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct inno_hdmi_phy *VAR_4 = VAR_3;
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_4, 0x04);
 VAR_6 = FUNC_0(VAR_4, 0x06);
 VAR_7 = FUNC_0(VAR_4, 0x08);

 if (VAR_5)
  FUNC_1(VAR_4, 0x04, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_4, 0x06, VAR_6);
 if (VAR_7)
  FUNC_1(VAR_4, 0x08, VAR_7);

 if (VAR_5 || VAR_6 || VAR_7)
  return VAR_1;

 return VAR_0;
}
