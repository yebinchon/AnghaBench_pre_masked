
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chsc_ssd_info {int path_mask; TYPE_1__* chpid; } ;
struct subchannel {struct chsc_ssd_info ssd_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*,char*,...) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct subchannel *VAR_3 = FUNC_1(VAR_0);
 struct chsc_ssd_info *VAR_4 = &VAR_3->ssd_info;
 ssize_t VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6 = 0x80 >> VAR_7;
  if (VAR_4->path_mask & VAR_6)
   VAR_5 += FUNC_0(VAR_2 + VAR_5, "%02x ", VAR_4->chpid[VAR_7].id);
  else
   VAR_5 += FUNC_0(VAR_2 + VAR_5, "00 ");
 }
 VAR_5 += FUNC_0(VAR_2 + VAR_5, "\n");
 return VAR_5;
}
