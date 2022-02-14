
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * type; int * bus; } ;
struct pci_epf {struct device dev; int name; } ;


 int VAR_0 ;
 struct pci_epf* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,char const*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct pci_epf*) ;
 int FUNC_5 (char const*,int,int ) ;
 struct pci_epf* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct device*) ;
 char const* FUNC_8 (char const*,char) ;

struct pci_epf *FUNC_9(const char *VAR_4)
{
 int VAR_5;
 struct pci_epf *VAR_6;
 struct device *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_8(VAR_4, '.') - VAR_4;
 VAR_6->name = FUNC_5(VAR_4, VAR_8, VAR_1);
 if (!VAR_6->name) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_0);
 }

 VAR_7 = &VAR_6->dev;
 FUNC_3(VAR_7);
 VAR_7->bus = &VAR_2;
 VAR_7->type = &VAR_3;

 VAR_5 = FUNC_1(VAR_7, "%s", VAR_4);
 if (VAR_5) {
  FUNC_7(VAR_7);
  return FUNC_0(VAR_5);
 }

 VAR_5 = FUNC_2(VAR_7);
 if (VAR_5) {
  FUNC_7(VAR_7);
  return FUNC_0(VAR_5);
 }

 return VAR_6;
}
