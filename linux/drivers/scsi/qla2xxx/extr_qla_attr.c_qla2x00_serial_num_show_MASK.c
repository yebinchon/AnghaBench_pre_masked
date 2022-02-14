
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int serial_num; } ;
struct qla_hw_data {int serial0; int serial2; int serial1; TYPE_1__ mr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ IS_FWI2_CAPABLE (struct qla_hw_data*) ;
 scalar_t__ IS_QLAFX00 (struct qla_hw_data*) ;
 scalar_t__ PAGE_SIZE ;
 int class_to_shost (struct device*) ;
 int qla2xxx_get_vpd_field (TYPE_2__*,char*,char*,scalar_t__) ;
 int scnprintf (char*,scalar_t__,char*,char,...) ;
 TYPE_2__* shost_priv (int ) ;
 int strcat (char*,char*) ;
 int strlen (int ) ;

__attribute__((used)) static ssize_t
qla2x00_serial_num_show(struct device *dev, struct device_attribute *attr,
   char *buf)
{
 scsi_qla_host_t *vha = shost_priv(class_to_shost(dev));
 struct qla_hw_data *ha = vha->hw;
 uint32_t sn;

 if (IS_QLAFX00(vha->hw)) {
  return scnprintf(buf, PAGE_SIZE, "%s\n",
      vha->hw->mr.serial_num);
 } else if (IS_FWI2_CAPABLE(ha)) {
  qla2xxx_get_vpd_field(vha, "SN", buf, PAGE_SIZE - 1);
  return strlen(strcat(buf, "\n"));
 }

 sn = ((ha->serial0 & 0x1f) << 16) | (ha->serial2 << 8) | ha->serial1;
 return scnprintf(buf, PAGE_SIZE, "%c%05d\n", 'A' + sn / 100000,
     sn % 100000);
}
