
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int,int,int,int,int) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int ) ;
 int FUNC_4 (struct hisi_hba*,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct hisi_hba *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 1000;
 struct device *VAR_9 = VAR_5->dev;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_10 = FUNC_4(VAR_5,
   VAR_2 + VAR_0);

  VAR_11 = FUNC_3(VAR_5, VAR_1);
  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_3);
  VAR_13 = FUNC_2(VAR_5,
   VAR_6, VAR_4);

  if ((VAR_10 == 0x3) && (VAR_11 == 0x0) &&
      (VAR_12 & FUNC_0(20)) && (VAR_13 & FUNC_0(10)))
   return 1;
  FUNC_5(10);
 }
 FUNC_1(VAR_9, "bus is not idle phy%d, axi150:0x%x axi100:0x%x port204:0x%x port240:0x%x\n",
   VAR_6, VAR_10, VAR_11,
   VAR_12, VAR_13);
 return 0;
}
