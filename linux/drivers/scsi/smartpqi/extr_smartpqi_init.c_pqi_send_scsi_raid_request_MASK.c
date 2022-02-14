
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pqi_raid_path_request {int sg_descriptors; int header; } ;
struct pqi_raid_error_info {int dummy; } ;
struct pqi_ctrl_info {int pci_dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_raid_path_request*,int ,int *,void*,size_t,int ,int*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct pqi_ctrl_info*,int *,int ,struct pqi_raid_error_info*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_0, u8 VAR_1,
  u8 *VAR_2, void *VAR_3, size_t VAR_4, u16 VAR_5,
  struct pqi_raid_error_info *VAR_6,
  unsigned long VAR_7)
{
 int VAR_8;
 enum dma_data_direction VAR_9;
 struct pqi_raid_path_request VAR_10;

 VAR_8 = FUNC_0(VAR_0, &VAR_10,
  VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_0, &VAR_10.header,
   0, VAR_6, VAR_7);

 FUNC_1(VAR_0->pci_dev, VAR_10.sg_descriptors, 1, VAR_9);
 return VAR_8;
}
