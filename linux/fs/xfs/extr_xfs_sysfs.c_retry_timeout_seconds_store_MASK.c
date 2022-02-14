
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_error_cfg {scalar_t__ retry_timeout; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*,int ,int*) ;
 scalar_t__ FUNC_2 (int) ;
 struct xfs_error_cfg* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_4(
 struct kobject *VAR_4,
 const char *VAR_5,
 size_t VAR_6)
{
 struct xfs_error_cfg *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_5, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;


 if (VAR_9 < -1 || VAR_9 > 86400)
  return -VAR_0;

 if (VAR_9 == -1)
  VAR_7->retry_timeout = VAR_3;
 else {
  VAR_7->retry_timeout = FUNC_2(VAR_9 * VAR_2);
  FUNC_0(FUNC_2(VAR_9 * VAR_2) < VAR_1);
 }
 return VAR_6;
}
