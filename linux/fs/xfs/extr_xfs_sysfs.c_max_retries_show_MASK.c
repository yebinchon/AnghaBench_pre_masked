
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_error_cfg {int max_retries; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct xfs_error_cfg* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_2(
 struct kobject *VAR_2,
 char *VAR_3)
{
 int VAR_4;
 struct xfs_error_cfg *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->max_retries == VAR_1)
  VAR_4 = -1;
 else
  VAR_4 = VAR_5->max_retries;

 return FUNC_0(VAR_3, VAR_0, "%d\n", VAR_4);
}
