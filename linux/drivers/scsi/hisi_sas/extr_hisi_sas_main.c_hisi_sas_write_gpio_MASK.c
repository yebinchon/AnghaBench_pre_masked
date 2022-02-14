
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct hisi_hba {TYPE_1__* hw; } ;
struct TYPE_2__ {int (* write_gpio ) (struct hisi_hba*,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_hba*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct sas_ha_struct *VAR_1, u8 VAR_2,
   u8 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct hisi_hba *VAR_6 = VAR_1->lldd_ha;

 if (!VAR_6->hw->write_gpio)
  return -VAR_0;

 return VAR_6->hw->write_gpio(VAR_6, VAR_2,
    VAR_3, VAR_4, VAR_5);
}
