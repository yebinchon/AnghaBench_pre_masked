
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_sas_itct {int dummy; } ;
struct hisi_hba {struct hisi_sas_itct* itct; TYPE_1__* hw; void* debugfs_itct; void* debugfs_itct_cache; } ;
struct TYPE_2__ {int (* read_iost_itct_cache ) (struct hisi_hba*,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct hisi_sas_itct*,int) ;
 int FUNC_1 (struct hisi_hba*,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_2)
{
 void *VAR_3 = VAR_2->debugfs_itct_cache;
 void *VAR_4 = VAR_2->debugfs_itct;
 struct hisi_sas_itct *VAR_5;
 int VAR_6;

 VAR_2->hw->read_iost_itct_cache(VAR_2, VAR_0,
        VAR_3);

 VAR_5 = VAR_2->itct;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
  FUNC_0(VAR_4, VAR_5, sizeof(struct hisi_sas_itct));
  VAR_4 += sizeof(struct hisi_sas_itct);
 }
}
