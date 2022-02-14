
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmpbuf ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int acciopath_status; TYPE_1__* pdev; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,char*) ;
 struct ctlr_info* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9;
 struct ctlr_info *VAR_10;
 struct Scsi_Host *VAR_11 = FUNC_1(VAR_4);
 char VAR_12[10];

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
  return -VAR_2;
 VAR_9 = VAR_7 > sizeof(VAR_12) - 1 ? sizeof(VAR_12) - 1 : VAR_7;
 FUNC_5(VAR_12, VAR_6, VAR_9);
 VAR_12[VAR_9] = '\0';
 if (FUNC_4(VAR_12, "%d", &VAR_8) != 1)
  return -VAR_3;
 VAR_10 = FUNC_3(VAR_11);
 VAR_10->acciopath_status = !!VAR_8;
 FUNC_2(&VAR_10->pdev->dev,
  "hpsa: HP SSD Smart Path %s via sysfs update.\n",
  VAR_10->acciopath_status ? "enabled" : "disabled");
 return VAR_7;
}
