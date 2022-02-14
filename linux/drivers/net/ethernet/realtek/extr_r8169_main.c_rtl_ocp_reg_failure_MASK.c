
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ,int ,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct rtl8169_private *VAR_1, u32 VAR_2)
{
 if (VAR_2 & 0xffff0001) {
  FUNC_0(VAR_1, VAR_0, VAR_1->dev, "Invalid ocp reg %x!\n", VAR_2);
  return 1;
 }
 return 0;
}
