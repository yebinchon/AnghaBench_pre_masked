
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long delay_ms; } ;
struct ufs_hba {TYPE_2__* host; TYPE_1__ clk_gating; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int host_lock; } ;


 size_t VAR_0 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct ufs_hba *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6, VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 FUNC_2(VAR_5->host->host_lock, VAR_6);
 VAR_5->clk_gating.delay_ms = VAR_7;
 FUNC_3(VAR_5->host->host_lock, VAR_6);
 return VAR_4;
}
