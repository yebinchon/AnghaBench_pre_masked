
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int is_enabled; int active_reqs; } ;
struct ufs_hba {TYPE_2__ clk_gating; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int host_lock; } ;


 size_t VAR_0 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct ufs_hba *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 u32 VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 VAR_7 = !!VAR_7;
 if (VAR_7 == VAR_5->clk_gating.is_enabled)
  goto out;

 if (VAR_7) {
  FUNC_4(VAR_5);
 } else {
  FUNC_2(VAR_5->host->host_lock, VAR_6);
  VAR_5->clk_gating.active_reqs++;
  FUNC_3(VAR_5->host->host_lock, VAR_6);
 }

 VAR_5->clk_gating.is_enabled = VAR_7;
out:
 return VAR_4;
}
