
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_1,
          int VAR_2, int VAR_3)
{
 struct device *VAR_4 = VAR_1->dev;
 int VAR_5, VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_2) {
  VAR_5 = FUNC_1(VAR_1, VAR_0);
  if (VAR_5 == VAR_6)
   break;

  VAR_6 = VAR_5;
  FUNC_2(VAR_2);
 }

 if (VAR_7 >= VAR_3) {
  FUNC_0(VAR_4, "Wait commands complete timeout!\n");
  return;
 }

 FUNC_0(VAR_4, "wait commands complete %dms\n", VAR_7);

}
