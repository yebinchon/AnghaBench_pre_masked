
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_adapter {int nvram_semaphore; int nvram; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*,int ,int ,int) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct esas2r_adapter *VAR_1)
{
 bool VAR_2;

 if (FUNC_0(&VAR_1->nvram_semaphore))
  return 0;

 if (!FUNC_3(VAR_1, VAR_1->nvram, VAR_0,
         sizeof(struct esas2r_sas_nvram))) {
  FUNC_1("NVRAM read failed, using defaults");
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1);

 FUNC_4(&VAR_1->nvram_semaphore);

 return VAR_2;
}
