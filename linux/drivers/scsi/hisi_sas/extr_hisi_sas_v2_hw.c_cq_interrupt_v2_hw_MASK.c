
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_cq {int id; int tasklet; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct hisi_sas_cq *VAR_4 = VAR_3;
 struct hisi_hba *VAR_5 = VAR_4->hisi_hba;
 int VAR_6 = VAR_4->id;

 FUNC_0(VAR_5, VAR_1, 1 << VAR_6);

 FUNC_1(&VAR_4->tasklet);

 return VAR_0;
}
