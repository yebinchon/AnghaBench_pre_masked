
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct raid_map {int structure_size; } ;
struct pqi_scsi_dev {struct raid_map* raid_map; int scsi3addr; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct raid_map*) ;
 struct raid_map* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pqi_ctrl_info*,int ,int ,struct raid_map*,int,int ,int *,int ) ;
 int FUNC_5 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,struct raid_map*) ;

__attribute__((used)) static int FUNC_6(struct pqi_ctrl_info *VAR_4,
 struct pqi_scsi_dev *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct raid_map *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_4, VAR_0,
  VAR_5->scsi3addr, VAR_8, sizeof(*VAR_8),
  0, ((void*)0), VAR_3);

 if (VAR_6)
  goto error;

 VAR_7 = FUNC_1(&VAR_8->structure_size);

 if (VAR_7 > sizeof(*VAR_8)) {

  FUNC_2(VAR_8);

  VAR_8 = FUNC_3(VAR_7, VAR_2);
  if (!VAR_8)
   return -VAR_1;

  VAR_6 = FUNC_4(VAR_4, VAR_0,
   VAR_5->scsi3addr, VAR_8, VAR_7,
   0, ((void*)0), VAR_3);
  if (VAR_6)
   goto error;

  if (FUNC_1(&VAR_8->structure_size)
   != VAR_7) {
   FUNC_0(&VAR_4->pci_dev->dev,
    "Requested %d bytes, received %d bytes",
    VAR_7,
    FUNC_1(&VAR_8->structure_size));
   goto error;
  }
 }

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_8);
 if (VAR_6)
  goto error;

 VAR_5->raid_map = VAR_8;

 return 0;

error:
 FUNC_2(VAR_8);

 return VAR_6;
}
