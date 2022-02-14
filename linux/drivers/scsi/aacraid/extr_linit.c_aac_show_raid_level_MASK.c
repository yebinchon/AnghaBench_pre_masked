
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; scalar_t__ no_uld_attach; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aac_dev {TYPE_2__* fsa_dev; scalar_t__ jbod; } ;
typedef int ssize_t ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 size_t FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (char*,int ,char*,...) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct scsi_device *VAR_6 = FUNC_4(VAR_3);
 struct aac_dev *VAR_7 = (struct aac_dev *)(VAR_6->host->hostdata);
 if (FUNC_1(VAR_6) != VAR_0)
  return FUNC_3(VAR_5, VAR_1, VAR_6->no_uld_attach
    ? "Hidden\n" :
    ((VAR_7->jbod && (VAR_6->type == VAR_2)) ? "JBOD\n" : ""));
 return FUNC_3(VAR_5, VAR_1, "%s\n",
   FUNC_0(VAR_7->fsa_dev[FUNC_2(VAR_6)].type));
}
