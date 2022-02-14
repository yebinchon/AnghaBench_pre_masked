
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yenta_socket {int dummy; } ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct yenta_socket*,int) ;
 unsigned char FUNC_1 (struct yenta_socket*,int) ;
 int FUNC_2 (char*,char*,int) ;
 struct yenta_socket* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (char*,scalar_t__,char*,...) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_1);
 struct yenta_socket *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0, VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_0, "CB registers:");
 for (VAR_7 = 0; VAR_7 < 0x24; VAR_7 += 4) {
  unsigned VAR_8;
  if (!(VAR_7 & 15))
   VAR_6 += FUNC_4(VAR_3 + VAR_6, VAR_0 - VAR_6, "\n%02x:", VAR_7);
  VAR_8 = FUNC_0(VAR_5, VAR_7);
  VAR_6 += FUNC_4(VAR_3 + VAR_6, VAR_0 - VAR_6, " %08x", VAR_8);
 }

 VAR_6 += FUNC_4(VAR_3 + VAR_6, VAR_0 - VAR_6, "\n\nExCA registers:");
 for (VAR_7 = 0; VAR_7 < 0x45; VAR_7++) {
  unsigned char VAR_9;
  if (!(VAR_7 & 7)) {
   if (VAR_7 & 8) {
    FUNC_2(VAR_3 + VAR_6, " -", 2);
    VAR_6 += 2;
   } else
    VAR_6 += FUNC_4(VAR_3 + VAR_6, VAR_0 - VAR_6, "\n%02x:", VAR_7);
  }
  VAR_9 = FUNC_1(VAR_5, VAR_7);
  VAR_6 += FUNC_4(VAR_3 + VAR_6, VAR_0 - VAR_6, " %02x", VAR_9);
 }
 VAR_3[VAR_6++] = '\n';
 return VAR_6;
}
