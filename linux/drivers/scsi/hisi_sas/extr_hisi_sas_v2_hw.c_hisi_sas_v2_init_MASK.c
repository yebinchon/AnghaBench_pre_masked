
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int sata_dev_bitmap; } ;


 int FUNC_0 (struct hisi_hba*) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hisi_hba *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0->sata_dev_bitmap, 0, sizeof(VAR_0->sata_dev_bitmap));

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
