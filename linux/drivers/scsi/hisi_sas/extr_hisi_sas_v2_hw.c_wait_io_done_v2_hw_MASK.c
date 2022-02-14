
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int,int) ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct hisi_hba *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 1000;
 struct device *VAR_6 = VAR_2->dev;
 u32 VAR_7, VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1);
  VAR_7 = (VAR_7 & 0x3fc0) >> 6;

  if (VAR_7 != 0x1)
   return 1;

  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_0);
  if ((VAR_8 & 0x1ff) == 0x2)
   return 1;
  FUNC_2(10);
 }
 FUNC_0(VAR_6, "IO not done phy%d, port264:0x%x port200:0x%x\n",
   VAR_3, VAR_7, VAR_8);
 return 0;
}
