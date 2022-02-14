
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cros_ec_device {int event_notifier; scalar_t__ mkbp_event_supported; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,struct cros_ec_device*) ;
 scalar_t__ FUNC_1 (struct cros_ec_device*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct cros_ec_device *VAR_4 = VAR_3;

 if (VAR_4->mkbp_event_supported &&
     FUNC_1(VAR_4, ((void*)0)) > 0)
  FUNC_0(&VAR_4->event_notifier, 0,
          VAR_4);

 if (VAR_2 == VAR_0)
  FUNC_2();
}
