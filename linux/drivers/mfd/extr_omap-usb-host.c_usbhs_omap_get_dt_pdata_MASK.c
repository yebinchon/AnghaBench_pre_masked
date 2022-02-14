
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {int nports; int* port_mode; int single_ulpi_bypass; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int prop ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int,char const*,int) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,char const**) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 int VAR_3 ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4,
     struct usbhs_omap_platform_data *VAR_5)
{
 int VAR_6, VAR_7;
 struct device_node *VAR_8 = VAR_4->of_node;

 VAR_6 = FUNC_6(VAR_8, "num-ports", &VAR_5->nports);
 if (VAR_6)
  VAR_5->nports = 0;

 if (VAR_5->nports > VAR_1) {
  FUNC_2(VAR_4, "Too many num_ports <%d> in device tree. Max %d\n",
    VAR_5->nports, VAR_1);
  return -VAR_0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  char VAR_9[11];
  const char *VAR_10;

  VAR_5->port_mode[VAR_7] = VAR_2;

  FUNC_7(VAR_9, sizeof(VAR_9), "port%d-mode", VAR_7 + 1);
  VAR_6 = FUNC_5(VAR_8, VAR_9, &VAR_10);
  if (VAR_6 < 0)
   continue;


  VAR_6 = FUNC_3(VAR_3, FUNC_0(VAR_3), VAR_10);
  if (VAR_6 < 0) {
   FUNC_2(VAR_4, "Invalid port%d-mode \"%s\" in device tree\n",
     VAR_7, VAR_10);
   return -VAR_0;
  }

  FUNC_1(VAR_4, "port%d-mode: %s -> %d\n", VAR_7, VAR_10, VAR_6);
  VAR_5->port_mode[VAR_7] = VAR_6;
 }


 VAR_5->single_ulpi_bypass = FUNC_4(VAR_8,
      "single-ulpi-bypass");

 return 0;
}
