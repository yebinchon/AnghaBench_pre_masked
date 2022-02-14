
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int boot_sram_len; int boot_sram; } ;


 unsigned int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 void* FUNC_1 (int ,void*,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3, VAR_0);

 if (VAR_1.boot_sram_len < VAR_4) {
  FUNC_2("standby code will not fit in SRAM\n");
  return ((void*)0);
 }

 return FUNC_1(VAR_1.boot_sram, VAR_2, VAR_4);
}
