
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_sas_iost {int dummy; } ;
struct hisi_hba {struct hisi_sas_iost* iost; TYPE_1__* hw; void* debugfs_iost; void* debugfs_iost_cache; } ;
struct TYPE_2__ {int (* read_iost_itct_cache ) (struct hisi_hba*,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct hisi_sas_iost*,int) ;
 int FUNC_1 (struct hisi_hba*,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_2)
{
 int VAR_3 = VAR_1;
 void *VAR_4 = VAR_2->debugfs_iost_cache;
 void *VAR_5 = VAR_2->debugfs_iost;
 struct hisi_sas_iost *VAR_6;
 int VAR_7;

 VAR_2->hw->read_iost_itct_cache(VAR_2, VAR_0,
        VAR_4);

 VAR_6 = VAR_2->iost;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++, VAR_6++) {
  FUNC_0(VAR_5, VAR_6, sizeof(struct hisi_sas_iost));
  VAR_5 += sizeof(struct hisi_sas_iost);
 }
}
