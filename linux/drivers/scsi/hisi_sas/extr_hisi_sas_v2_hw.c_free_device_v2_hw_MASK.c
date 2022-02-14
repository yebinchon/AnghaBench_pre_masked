
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_device {int sata_idx; int sas_device; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {int sata_dev_bitmap; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hisi_sas_device *VAR_0)
{
 struct hisi_hba *VAR_1 = VAR_0->hisi_hba;


 if (FUNC_1(VAR_0->sas_device))
  FUNC_0(VAR_0->sata_idx, VAR_1->sata_dev_bitmap);
}
