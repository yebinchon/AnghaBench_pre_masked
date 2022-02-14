
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int companion_ports; int hcs_params; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct ehci_hcd* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (int,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct ehci_hcd *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = VAR_0;
 char *VAR_9 = VAR_3;

 VAR_4 = FUNC_2(FUNC_1(VAR_1));
 VAR_5 = FUNC_0(VAR_4->hcs_params);

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  if (FUNC_4(VAR_6, &VAR_4->companion_ports)) {
   VAR_7 = FUNC_3(VAR_9, VAR_8, "%d\n", VAR_6 + 1);
   VAR_9 += VAR_7;
   VAR_8 -= VAR_7;
  }
 }
 return VAR_9 - VAR_3;
}
