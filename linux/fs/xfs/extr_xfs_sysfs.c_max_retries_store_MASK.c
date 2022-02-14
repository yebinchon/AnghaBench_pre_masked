
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_error_cfg {int max_retries; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;
 struct xfs_error_cfg* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_2(
 struct kobject *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 struct xfs_error_cfg *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 < -1)
  return -VAR_0;

 if (VAR_7 == -1)
  VAR_5->max_retries = VAR_1;
 else
  VAR_5->max_retries = VAR_7;
 return VAR_4;
}
