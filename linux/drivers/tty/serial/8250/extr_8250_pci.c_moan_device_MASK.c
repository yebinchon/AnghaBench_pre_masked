
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int subsystem_vendor; int device; int vendor; int dev; } ;


 int FUNC_0 (int *,char*,int ,char const*,int ,int ,int ,int ) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, struct pci_dev *VAR_1)
{
 FUNC_0(&VAR_1->dev,
        "%s: %s\n"
        "Please send the output of lspci -vv, this\n"
        "message (0x%04x,0x%04x,0x%04x,0x%04x), the\n"
        "manufacturer and name of serial board or\n"
        "modem board to <linux-serial@vger.kernel.org>.\n",
        FUNC_1(VAR_1), VAR_0, VAR_1->vendor, VAR_1->device,
        VAR_1->subsystem_vendor, VAR_1->subsystem_device);
}
