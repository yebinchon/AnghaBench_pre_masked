
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*) ;

__attribute__((used)) static int FUNC_4(struct hisi_hba *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "soft reset: disable host failed rc=%d\n", VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_0);

 return FUNC_3(VAR_0);
}
