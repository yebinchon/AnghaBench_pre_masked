
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {struct pqi_scsi_dev* hostdata; int host; } ;
struct pqi_scsi_dev {int bay; int active_path_index; int path_map; scalar_t__ devtype; int* box; int * phys_connector; int lun; int target; int bus; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; TYPE_1__* scsi_host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int phys_connector ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned char**,int *,int) ;
 scalar_t__ FUNC_1 (struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_2 (struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 struct pqi_ctrl_info* FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct scsi_device* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_6,
 struct device_attribute *VAR_7, char *VAR_8)
{
 struct pqi_ctrl_info *VAR_9;
 struct scsi_device *VAR_10;
 struct pqi_scsi_dev *VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 u8 VAR_15;
 u8 VAR_16;
 u8 VAR_17 = 0;
 char *VAR_18;
 unsigned char VAR_19[2];

 VAR_10 = FUNC_8(VAR_6);
 VAR_9 = FUNC_5(VAR_10->host);

 FUNC_6(&VAR_9->scsi_device_list_lock, VAR_12);

 VAR_11 = VAR_10->hostdata;
 if (!VAR_11) {
  FUNC_7(&VAR_9->scsi_device_list_lock,
   VAR_12);
  return -VAR_0;
 }

 VAR_16 = VAR_11->bay;
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_17 = 1<<VAR_13;
  if (VAR_13 == VAR_11->active_path_index)
   VAR_18 = "Active";
  else if (VAR_11->path_map & VAR_17)
   VAR_18 = "Inactive";
  else
   continue;

  VAR_14 += FUNC_3(VAR_8 + VAR_14,
     VAR_2 - VAR_14,
     "[%d:%d:%d:%d] %20.20s ",
     VAR_9->scsi_host->host_no,
     VAR_11->bus, VAR_11->target,
     VAR_11->lun,
     FUNC_4(VAR_11->devtype));

  if (VAR_11->devtype == VAR_4 ||
   FUNC_2(VAR_11))
   goto end_buffer;

  FUNC_0(&VAR_19, &VAR_11->phys_connector[VAR_13],
   sizeof(VAR_19));
  if (VAR_19[0] < '0')
   VAR_19[0] = '0';
  if (VAR_19[1] < '0')
   VAR_19[1] = '0';

  VAR_14 += FUNC_3(VAR_8 + VAR_14,
     VAR_2 - VAR_14,
     "PORT: %.2s ", VAR_19);

  VAR_15 = VAR_11->box[VAR_13];
  if (VAR_15 != 0 && VAR_15 != 0xFF)
   VAR_14 += FUNC_3(VAR_8 + VAR_14,
      VAR_2 - VAR_14,
      "BOX: %hhu ", VAR_15);

  if ((VAR_11->devtype == VAR_3 ||
   VAR_11->devtype == VAR_5) &&
   FUNC_1(VAR_11))
   VAR_14 += FUNC_3(VAR_8 + VAR_14,
      VAR_2 - VAR_14,
      "BAY: %hhu ", VAR_16);

end_buffer:
  VAR_14 += FUNC_3(VAR_8 + VAR_14,
     VAR_2 - VAR_14,
     "%s\n", VAR_18);
 }

 FUNC_7(&VAR_9->scsi_device_list_lock, VAR_12);
 return VAR_14;
}
