
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_6 (struct hisi_hba*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hisi_hba *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 u32 VAR_7, VAR_8;
 int VAR_9;

 FUNC_6(VAR_5);
 FUNC_5(VAR_5, VAR_4, 0x0);
 FUNC_1(VAR_5);

 FUNC_4(VAR_5);

 FUNC_7(10);

 VAR_8 = FUNC_2(VAR_5, VAR_3 +
      VAR_0);
 VAR_8 |= VAR_1;
 FUNC_5(VAR_5, VAR_3 +
    VAR_0, VAR_8);


 VAR_9 = FUNC_3(VAR_3 +
       VAR_2, VAR_7,
       VAR_7 == 0x3, 10, 100);
 if (VAR_9) {
  FUNC_0(VAR_6, "axi bus is not idle, rc=%d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
