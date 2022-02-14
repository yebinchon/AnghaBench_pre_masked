
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_wwn {struct se_device* t10_dev; } ;
struct TYPE_2__ {unsigned char* unit_serial; } ;
struct se_device {int dev_flags; int export_count; TYPE_1__ t10_wwn; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (char*,unsigned char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned char*,int,char*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (unsigned char*) ;
 struct t10_wwn* FUNC_6 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct t10_wwn *VAR_9 = FUNC_6(VAR_6);
 struct se_device *VAR_10 = VAR_9->t10_dev;
 unsigned char VAR_11[VAR_5];
 if (VAR_10->dev_flags & VAR_1) {
  FUNC_2("Underlying SCSI device firmware provided VPD"
   " Unit Serial, ignoring request\n");
  return -VAR_3;
 }

 if (FUNC_4(VAR_7) >= VAR_5) {
  FUNC_2("Emulated VPD Unit Serial exceeds"
  " INQUIRY_VPD_SERIAL_LEN: %d\n", VAR_5);
  return -VAR_4;
 }






 if (VAR_10->export_count) {
  FUNC_2("Unable to set VPD Unit Serial while"
   " active %d $FABRIC_MOD exports exist\n",
   VAR_10->export_count);
  return -VAR_2;
 }







 FUNC_0(VAR_11, 0, VAR_5);
 FUNC_3(VAR_11, VAR_5, "%s", VAR_7);
 FUNC_3(VAR_10->t10_wwn.unit_serial, VAR_5,
   "%s", FUNC_5(VAR_11));
 VAR_10->dev_flags |= VAR_0;

 FUNC_1("Target_Core_ConfigFS: Set emulated VPD Unit Serial:"
   " %s\n", VAR_10->t10_wwn.unit_serial);

 return VAR_8;
}
