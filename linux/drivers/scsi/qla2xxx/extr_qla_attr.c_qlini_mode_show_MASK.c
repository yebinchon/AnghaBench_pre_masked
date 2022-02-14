
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int qlini_mode; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;




 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_5, struct device_attribute *VAR_6, char *VAR_7)
{
 scsi_qla_host_t *VAR_8 = FUNC_2(FUNC_0(VAR_5));
 int VAR_9 = 0;

 VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9,
     "Supported options: enabled | disabled | dual | exclusive\n");


 VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9, "Current selection: ");

 switch (VAR_8->qlini_mode) {
 case 128:
  VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9,
      VAR_4);
  break;
 case 131:
  VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9,
      VAR_1);
  break;
 case 129:
  VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9,
      VAR_3);
  break;
 case 130:
  VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9,
      VAR_2);
  break;
 }
 VAR_9 += FUNC_1(VAR_7 + VAR_9, VAR_0-VAR_9, "\n");

 return VAR_9;
}
