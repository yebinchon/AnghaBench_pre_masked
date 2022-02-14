
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int fw_name; int dev; int fw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct rtl_fw*) ;
 int FUNC_4 (struct rtl_fw*) ;

int FUNC_5(struct rtl_fw *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->fw, VAR_1->fw_name, VAR_1->dev);
 if (VAR_2 < 0)
  goto out;

 if (!FUNC_4(VAR_1) || !FUNC_3(VAR_1)) {
  FUNC_1(VAR_1->fw);
  VAR_2 = -VAR_0;
  goto out;
 }

 return 0;
out:
 FUNC_0(VAR_1->dev, "Unable to load firmware %s (%d)\n",
  VAR_1->fw_name, VAR_2);
 return VAR_2;
}
