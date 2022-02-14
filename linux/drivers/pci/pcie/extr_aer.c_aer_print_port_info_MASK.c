
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int bus; } ;
struct aer_err_info {int id; size_t severity; scalar_t__ multi_error_valid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,char*,char*,int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1, struct aer_err_info *VAR_2)
{
 u8 VAR_3 = VAR_2->id >> 8;
 u8 VAR_4 = VAR_2->id & 0xff;

 FUNC_3(VAR_1, "%s%s error received: %04x:%02x:%02x.%d\n",
   VAR_2->multi_error_valid ? "Multiple " : "",
   VAR_0[VAR_2->severity],
   FUNC_2(VAR_1->bus), VAR_3, FUNC_1(VAR_4),
   FUNC_0(VAR_4));
}
