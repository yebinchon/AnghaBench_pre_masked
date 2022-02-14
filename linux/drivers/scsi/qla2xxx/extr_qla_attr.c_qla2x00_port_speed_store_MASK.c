
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int set_data_rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_10 ;
 int FUNC_5 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*,int) ;
 struct scsi_qla_host* FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_13, struct device_attribute *VAR_14,
    const char *VAR_15, size_t VAR_16)
{
 struct scsi_qla_host *VAR_17 = FUNC_8(FUNC_2(VAR_13));
 ulong VAR_18, VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = VAR_7;
 struct qla_hw_data *VAR_23 = VAR_17->hw;

 if (!FUNC_0(VAR_23) && !FUNC_1(VAR_23)) {
  FUNC_5(VAR_12, VAR_17, 0x70d8,
      "Speed setting not supported \n");
  return -VAR_0;
 }

 VAR_21 = FUNC_3(VAR_15, 10, &VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_19 = VAR_18;
 if (VAR_18 == 40 || VAR_18 == 80 || VAR_18 == 160 ||
     VAR_18 == 320) {
  FUNC_4(VAR_10, VAR_17, 0x70d9,
      "Setting will be affected after a loss of sync\n");
  VAR_18 = VAR_18/10;
  VAR_22 = VAR_8;
 }

 VAR_20 = VAR_23->set_data_rate;

 switch (VAR_18) {
 case 0:
  VAR_23->set_data_rate = VAR_6;
  break;
 case 4:
  VAR_23->set_data_rate = VAR_4;
  break;
 case 8:
  VAR_23->set_data_rate = VAR_5;
  break;
 case 16:
  VAR_23->set_data_rate = VAR_2;
  break;
 case 32:
  VAR_23->set_data_rate = VAR_3;
  break;
 default:
  FUNC_5(VAR_12, VAR_17, 0x1199,
      "Unrecognized speed setting:%lx. Setting Autoneg\n",
      VAR_19);
  VAR_23->set_data_rate = VAR_6;
 }

 if (FUNC_6(VAR_17) || (VAR_20 == VAR_23->set_data_rate))
  return -VAR_0;

 FUNC_5(VAR_11, VAR_17, 0x70da,
     "Setting speed to %lx Gbps \n", VAR_18);

 VAR_21 = FUNC_7(VAR_17, VAR_22);
 if (VAR_21 != VAR_9)
  return -VAR_1;

 return FUNC_9(VAR_15);
}
