
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int companion_ports; int hcs_params; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct device*) ;
 struct ehci_hcd* FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct ehci_hcd*,int,int) ;
 int FUNC_6 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct ehci_hcd *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(FUNC_2(VAR_3));
 VAR_9 = VAR_2;
 if (FUNC_6(VAR_5, "%d", &VAR_8) != 1)
  return -VAR_0;
 if (VAR_8 < 0) {
  VAR_8 = - VAR_8;
  VAR_9 = 0;
 }
 if (VAR_8 <= 0 || VAR_8 > FUNC_0(VAR_7->hcs_params))
  return -VAR_1;
 VAR_8--;
 if (VAR_9)
  FUNC_4(VAR_8, &VAR_7->companion_ports);
 else
  FUNC_1(VAR_8, &VAR_7->companion_ports);
 FUNC_5(VAR_7, VAR_8, VAR_9);
 return VAR_6;
}
