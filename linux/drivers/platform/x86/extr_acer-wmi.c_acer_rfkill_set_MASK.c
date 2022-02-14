
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, bool VAR_3)
{
 acpi_status VAR_4;
 u32 VAR_5 = (unsigned long)VAR_2;

 if (VAR_1) {
  VAR_4 = FUNC_1(!VAR_3, VAR_5);
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }

 return 0;
}
