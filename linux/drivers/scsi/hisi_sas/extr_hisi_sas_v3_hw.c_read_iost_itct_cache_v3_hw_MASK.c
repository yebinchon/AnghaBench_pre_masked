
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;
typedef enum hisi_sas_debugfs_cache_type { ____Placeholder_hisi_sas_debugfs_cache_type } hisi_sas_debugfs_cache_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hisi_hba*,int ) ;
 int FUNC_1 (struct hisi_hba*,int ,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_4,
           enum hisi_sas_debugfs_cache_type VAR_5,
           u32 *VAR_6)
{
 u32 VAR_7 = VAR_0 *
       VAR_1;
 u32 *VAR_8 = VAR_6;
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_4, VAR_3, VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_10 = FUNC_0(VAR_4, VAR_2);
  if (VAR_10 == 0xffffffff)
   break;
 }

 if (VAR_10 != 0xffffffff) {
  FUNC_3("Issue occur when reading IOST/ITCT cache!\n");
  return;
 }

 FUNC_2(VAR_8, 0, VAR_7 * 4);
 VAR_8[0] = VAR_10;

 for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
  VAR_8[VAR_9] = FUNC_0(VAR_4, VAR_2);
}
