
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct hisi_sas_itct {int qw0; } ;
struct hisi_sas_device {size_t device_id; } ;
struct hisi_hba {struct hisi_sas_itct* itct; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 int FUNC_2 (struct hisi_hba*,int ,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_3,
         struct hisi_sas_device *VAR_4)
{
 u64 VAR_5 = VAR_4->device_id;
 struct hisi_sas_itct *VAR_6 = &VAR_3->itct[VAR_5];
 u64 VAR_7;
 u32 VAR_8 = FUNC_1(VAR_3, VAR_0);

 VAR_8 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_8);


 FUNC_4(1);
 VAR_8 = FUNC_1(VAR_3, VAR_0);
 VAR_8 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_8);

 VAR_7 = FUNC_3(VAR_6->qw0);
 VAR_7 &= ~VAR_2;
 VAR_6->qw0 = FUNC_0(VAR_7);
}
