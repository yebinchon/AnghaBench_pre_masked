
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*,scalar_t__) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_6 (struct hisi_hba*) ;
 int FUNC_7 (struct hisi_hba*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct hisi_hba*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct hisi_hba *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6, VAR_7;

 FUNC_7(VAR_4);
 FUNC_5(VAR_4, VAR_3, 0x0);
 FUNC_2(VAR_4);

 FUNC_4(VAR_4);

 FUNC_8(10);

 FUNC_5(VAR_4, VAR_2 + VAR_0, 0x1);


 VAR_7 = 0;
 while (1) {
  u32 VAR_8 = FUNC_3(VAR_4,
    VAR_2 + VAR_1);

  if (VAR_8 == 0x3)
   break;

  FUNC_10(10);
  if (VAR_7++ > 10) {
   FUNC_0(VAR_5, "wait axi bus state to idle timeout!\n");
   return -1;
  }
 }

 FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_9(VAR_4);

 return 0;
}
