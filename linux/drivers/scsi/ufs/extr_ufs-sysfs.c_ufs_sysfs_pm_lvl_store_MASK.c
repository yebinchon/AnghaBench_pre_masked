
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {unsigned long rpm_lvl; unsigned long spm_lvl; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int host_lock; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static inline ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5,
          bool VAR_6)
{
 struct ufs_hba *VAR_7 = FUNC_0(VAR_2);
 unsigned long VAR_8, VAR_9;

 if (FUNC_1(VAR_4, 0, &VAR_9))
  return -VAR_0;

 if (VAR_9 >= VAR_1)
  return -VAR_0;

 FUNC_2(VAR_7->host->host_lock, VAR_8);
 if (VAR_6)
  VAR_7->rpm_lvl = VAR_9;
 else
  VAR_7->spm_lvl = VAR_9;
 FUNC_3(VAR_7->host->host_lock, VAR_8);
 return VAR_5;
}
