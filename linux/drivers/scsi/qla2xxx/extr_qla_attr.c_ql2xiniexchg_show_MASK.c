
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int host_no; int ql2xiniexchg; int u_ql2xiniexchg; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,int ,...) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 int VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0-VAR_5,
  "target exchange: new %d : current: %d\n\n",
  VAR_4->u_ql2xiniexchg, VAR_4->ql2xiniexchg);

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0-VAR_5,
     "Please (re)set operating mode via \"/sys/class/scsi_host/host%ld/qlini_mode\" to load new setting.\n",
     VAR_4->host_no);

 return VAR_5;
}
