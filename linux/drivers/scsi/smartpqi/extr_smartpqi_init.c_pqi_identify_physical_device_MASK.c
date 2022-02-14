
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct pqi_scsi_dev {int scsi3addr; } ;
struct pqi_raid_path_request {int sg_descriptors; int header; void** cdb; } ;
struct pqi_ctrl_info {int pci_dev; } ;
struct bmic_identify_physical_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pqi_ctrl_info*,struct pqi_raid_path_request*,int ,int ,struct bmic_identify_physical_device*,size_t,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct pqi_ctrl_info*,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_3,
 struct pqi_scsi_dev *VAR_4,
 struct bmic_identify_physical_device *VAR_5,
 size_t VAR_6)
{
 int VAR_7;
 enum dma_data_direction VAR_8;
 u16 VAR_9;
 struct pqi_raid_path_request VAR_10;

 VAR_7 = FUNC_1(VAR_3, &VAR_10,
  VAR_0, VAR_2, VAR_5,
  VAR_6, 0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_9 = FUNC_0(VAR_4->scsi3addr);
 VAR_10.cdb[2] = (u8)VAR_9;
 VAR_10.cdb[9] = (u8)(VAR_9 >> 8);

 VAR_7 = FUNC_3(VAR_3, &VAR_10.header,
  0, ((void*)0), VAR_1);

 FUNC_2(VAR_3->pci_dev, VAR_10.sg_descriptors, 1, VAR_8);
 return VAR_7;
}
