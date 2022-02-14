
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ,int *) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (unsigned int,int ,char*) ;

__attribute__((used)) static void FUNC_4(unsigned int *VAR_1)
{
 unsigned int *VAR_2, VAR_3;


 for (VAR_2 = VAR_1; (VAR_3 = *VAR_2); VAR_2++) {
  if (FUNC_3
      (VAR_3, VAR_0, "pcnet32_probe_vlbus")) {

   if ((FUNC_0(VAR_3 + 14) == 0x57) &&
       (FUNC_0(VAR_3 + 15) == 0x57)) {
    FUNC_1(VAR_3, 0, ((void*)0));
   } else {
    FUNC_2(VAR_3, VAR_0);
   }
  }
 }
}
