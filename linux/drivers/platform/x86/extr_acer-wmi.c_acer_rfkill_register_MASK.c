
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rfkill {int dummy; } ;
struct device {int dummy; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct rfkill* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 struct rfkill* FUNC_3 (char*,struct device*,int,int *,void*) ;
 int FUNC_4 (struct rfkill*) ;
 int FUNC_5 (struct rfkill*) ;
 int FUNC_6 (struct rfkill*,int) ;

__attribute__((used)) static struct rfkill *FUNC_7(struct device *VAR_2,
        enum rfkill_type VAR_3,
        char *VAR_4, u32 VAR_5)
{
 int VAR_6;
 struct rfkill *VAR_7;
 u32 VAR_8;
 acpi_status VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_3,
      &VAR_1,
      (void *)(unsigned long)VAR_5);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_9 = FUNC_2(&VAR_8, VAR_5);

 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6) {
  FUNC_4(VAR_7);
  return FUNC_1(VAR_6);
 }

 if (FUNC_0(VAR_9))
  FUNC_6(VAR_7, !VAR_8);

 return VAR_7;
}
