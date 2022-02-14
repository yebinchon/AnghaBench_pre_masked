
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int debugfs_dir; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,struct hisi_hba*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct hisi_hba*) ;
 int FUNC_6 (struct hisi_hba*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_7(struct hisi_hba *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;

 VAR_2->debugfs_dir = FUNC_0(FUNC_4(VAR_3),
         VAR_0);
 FUNC_1("trigger_dump", 0600,
       VAR_2->debugfs_dir,
       VAR_2,
       &VAR_1);


 FUNC_6(VAR_2);

 if (FUNC_5(VAR_2)) {
  FUNC_2(VAR_2->debugfs_dir);
  FUNC_3(VAR_3, "failed to init debugfs!\n");
 }
}
