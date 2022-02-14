
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_2__* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_8__ {scalar_t__ eeh_busy; } ;
struct TYPE_9__ {int optrom_mutex; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_3__*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (char*,int ,char*,...) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{
 scsi_qla_host_t *VAR_6 = FUNC_7(FUNC_0(VAR_3));
 uint16_t VAR_7 = 0;
 int VAR_8;

 FUNC_1(&VAR_6->hw->optrom_mutex);
 if (FUNC_4(VAR_6)) {
  FUNC_2(&VAR_6->hw->optrom_mutex);
  FUNC_3(VAR_2, VAR_6, 0x70dc, "ISP reset active.\n");
  goto done;
 }

 if (VAR_6->hw->flags.eeh_busy) {
  FUNC_2(&VAR_6->hw->optrom_mutex);
  FUNC_3(VAR_2, VAR_6, 0x70dd, "PCI EEH busy.\n");
  goto done;
 }

 VAR_8 = FUNC_5(VAR_6, &VAR_7);
 FUNC_2(&VAR_6->hw->optrom_mutex);
 if (VAR_8 == VAR_1)
  return FUNC_6(VAR_5, VAR_0, "%d\n", VAR_7);

done:
 return FUNC_6(VAR_5, VAR_0, "\n");
}
