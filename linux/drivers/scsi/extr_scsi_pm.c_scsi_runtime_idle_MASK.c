
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 FUNC_0(VAR_1, "scsi_runtime_idle\n");



 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
  return -VAR_0;
 }

 return 0;
}
