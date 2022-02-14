
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct chv_pinctrl {scalar_t__ regs; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static acpi_status FUNC_4(u32 VAR_5,
 acpi_physical_address VAR_6, u32 VAR_7, u64 *VAR_8,
 void *VAR_9, void *VAR_10)
{
 struct chv_pinctrl *VAR_11 = VAR_10;
 unsigned long VAR_12;
 acpi_status VAR_13 = VAR_3;

 FUNC_1(&VAR_4, VAR_12);

 if (VAR_5 == VAR_1)
  FUNC_0((u32)(*VAR_8), VAR_11->regs + (u32)VAR_6);
 else if (VAR_5 == VAR_0)
  *VAR_8 = FUNC_3(VAR_11->regs + (u32)VAR_6);
 else
  VAR_13 = VAR_2;

 FUNC_2(&VAR_4, VAR_12);

 return VAR_13;
}
