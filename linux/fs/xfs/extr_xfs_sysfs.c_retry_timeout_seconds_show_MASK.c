
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_error_cfg {scalar_t__ retry_timeout; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct xfs_error_cfg* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_3(
 struct kobject *VAR_3,
 char *VAR_4)
{
 int VAR_5;
 struct xfs_error_cfg *VAR_6 = FUNC_2(VAR_3);

 if (VAR_6->retry_timeout == VAR_2)
  VAR_5 = -1;
 else
  VAR_5 = FUNC_0(VAR_6->retry_timeout) / VAR_0;

 return FUNC_1(VAR_4, VAR_1, "%d\n", VAR_5);
}
