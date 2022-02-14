
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct hisi_sas_itct {int dummy; } ;
struct hisi_sas_device {size_t device_id; int * completion; } ;
struct hisi_hba {struct hisi_sas_itct* itct; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 int FUNC_2 (struct hisi_hba*,int ,int) ;
 int FUNC_3 (struct hisi_sas_itct*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_6,
         struct hisi_sas_device *VAR_7)
{
 FUNC_0(VAR_5);
 u64 VAR_8 = VAR_7->device_id;
 struct hisi_sas_itct *VAR_9 = &VAR_6->itct[VAR_8];
 u32 VAR_10 = FUNC_1(VAR_6, VAR_0);
 int VAR_11;

 VAR_7->completion = &VAR_5;


 if (VAR_1 & VAR_10)
  FUNC_2(VAR_6, VAR_0,
     VAR_1);

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_10 = VAR_3 | (VAR_8 & VAR_4);
  FUNC_2(VAR_6, VAR_2, VAR_10);
  FUNC_4(VAR_7->completion);

  FUNC_3(VAR_9, 0, sizeof(struct hisi_sas_itct));
 }
}
