
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd_data ;
struct pci_dev {int dummy; } ;
struct ef4_nic {int vpd_sn; int net_dev; struct pci_dev* pci_dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,int,char*) ;
 int FUNC_3 (struct pci_dev*,int ,int,char*) ;
 int FUNC_4 (char*,int,int,char*) ;
 int FUNC_5 (char*,int ,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_9(struct ef4_nic *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pci_dev;
 char VAR_8[VAR_4];
 ssize_t VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;


 VAR_9 = FUNC_3(VAR_7, 0, sizeof(VAR_8), VAR_8);
 if (VAR_9 <= 0) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "Unable to read VPD\n");
  return;
 }


 VAR_10 = FUNC_5(VAR_8, 0, VAR_9, VAR_2);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "VPD Read-only not found\n");
  return;
 }

 VAR_11 = FUNC_7(&VAR_8[VAR_10]);
 VAR_13 = VAR_11;
 VAR_12 = VAR_10 + VAR_3;
 if (VAR_12 + VAR_13 > VAR_9)
  VAR_13 = VAR_9 - VAR_12;


 VAR_12 = FUNC_4(VAR_8, VAR_12, VAR_13, "PN");
 if (VAR_12 < 0) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "Part number not found\n");
  return;
 }

 VAR_13 = FUNC_6(&VAR_8[VAR_12]);
 VAR_12 += VAR_1;
 if (VAR_12 + VAR_13 > VAR_9) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "Incomplete part number\n");
  return;
 }

 FUNC_2(VAR_6, VAR_5, VAR_6->net_dev,
     "Part Number : %.*s\n", VAR_13, &VAR_8[VAR_12]);

 VAR_12 = VAR_10 + VAR_3;
 VAR_13 = VAR_11;
 VAR_12 = FUNC_4(VAR_8, VAR_12, VAR_13, "SN");
 if (VAR_12 < 0) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "Serial number not found\n");
  return;
 }

 VAR_13 = FUNC_6(&VAR_8[VAR_12]);
 VAR_12 += VAR_1;
 if (VAR_12 + VAR_13 > VAR_9) {
  FUNC_1(VAR_6, VAR_5, VAR_6->net_dev, "Incomplete serial number\n");
  return;
 }

 VAR_6->vpd_sn = FUNC_0(VAR_13 + 1, VAR_0);
 if (!VAR_6->vpd_sn)
  return;

 FUNC_8(VAR_6->vpd_sn, VAR_13 + 1, "%s", &VAR_8[VAR_12]);
}
