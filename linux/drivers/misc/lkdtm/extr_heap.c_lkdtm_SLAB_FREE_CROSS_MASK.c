
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;

void FUNC_3(void)
{
 int *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3) {
  FUNC_2("Unable to allocate a_cache memory.\n");
  return;
 }


 *VAR_3 = 0x12345679;
 FUNC_2("Attempting cross-cache slab free ...\n");
 FUNC_1(VAR_2, VAR_3);
}
