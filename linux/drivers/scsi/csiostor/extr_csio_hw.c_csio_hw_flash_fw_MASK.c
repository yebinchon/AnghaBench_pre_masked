
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct pci_dev {int device; struct device dev; } ;
struct fw_info {int dummy; } ;
struct fw_hdr {int dummy; } ;
struct firmware {unsigned int size; int * data; } ;
struct csio_hw {int fw_state; int chip_id; struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct csio_hw*,char*,char const*,...) ;
 int FUNC_2 (struct csio_hw*,struct fw_info*,int const*,unsigned int,struct fw_hdr*,int ,int*) ;
 scalar_t__ FUNC_3 (int) ;
 struct fw_info* FUNC_4 (int ) ;
 int FUNC_5 (struct fw_hdr*) ;
 struct fw_hdr* FUNC_6 (int,int ) ;
 int FUNC_7 (struct firmware const*) ;
 scalar_t__ FUNC_8 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_7, int *VAR_8)
{
 int VAR_9 = -VAR_1;
 const struct firmware *VAR_10;
 struct fw_info *VAR_11;
 struct fw_hdr *VAR_12;
 struct pci_dev *VAR_13 = VAR_7->pdev;
 struct device *VAR_14 = &VAR_13->dev ;
 const u8 *VAR_15 = ((void*)0);
 unsigned int VAR_16 = 0;
 const char *VAR_17;




 VAR_11 = FUNC_4(FUNC_0(VAR_7->chip_id));
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_7,
   "unable to get firmware info for chip %d.\n",
   FUNC_0(VAR_7->chip_id));
  return -VAR_2;
 }




 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_3;

 if (FUNC_3(VAR_13->device & VAR_0))
  VAR_17 = VAR_4;
 else
  VAR_17 = VAR_5;

 if (FUNC_8(&VAR_10, VAR_17, VAR_14) < 0) {
  FUNC_1(VAR_7, "could not find firmware image %s, err: %d\n",
    VAR_17, VAR_9);
 } else {
  VAR_15 = VAR_10->data;
  VAR_16 = VAR_10->size;
 }


 VAR_9 = FUNC_2(VAR_7, VAR_11, VAR_15, VAR_16, VAR_12,
    VAR_7->fw_state, VAR_8);


 if (VAR_10 != ((void*)0))
  FUNC_7(VAR_10);
 FUNC_5(VAR_12);
 return VAR_9;
}
