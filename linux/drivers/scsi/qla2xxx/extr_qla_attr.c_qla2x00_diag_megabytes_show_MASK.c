
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int transfer_bytes; } ;
struct TYPE_5__ {TYPE_1__ bidi_stats; int hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,...) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_3(FUNC_1(VAR_1));

 if (!FUNC_0(VAR_4->hw))
  return FUNC_2(VAR_3, VAR_0, "\n");

 return FUNC_2(VAR_3, VAR_0, "%llu\n",
     VAR_4->bidi_stats.transfer_bytes >> 20);
}
