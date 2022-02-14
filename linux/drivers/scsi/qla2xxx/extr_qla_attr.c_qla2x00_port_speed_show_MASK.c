
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {scalar_t__ link_data_rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_3 (char*,int ,char*,char*) ;
 struct scsi_qla_host* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_5, struct device_attribute *VAR_6,
    char *VAR_7)
{
 struct scsi_qla_host *VAR_8 = FUNC_4(FUNC_0(VAR_5));
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 ssize_t VAR_10;
 char *VAR_11[7] = {"0", "0", "0", "4", "8", "16", "32"};

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 != VAR_2) {
  FUNC_1(VAR_4, VAR_8, 0x70db,
      "Unable to get port speed rval:%zd\n", VAR_10);
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_8, 0x70d6,
     "port speed:%d\n", VAR_9->link_data_rate);

 return FUNC_3(VAR_7, VAR_1, "%s\n", VAR_11[VAR_9->link_data_rate]);
}
