
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ state; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct rproc*) ;
 int FUNC_2 (struct rproc*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 struct rproc* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct rproc *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = 0;

 if (FUNC_3(VAR_5, "start")) {
  if (VAR_7->state == VAR_2)
   return -VAR_0;

  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8)
   FUNC_0(&VAR_7->dev, "Boot failed: %d\n", VAR_8);
 } else if (FUNC_3(VAR_5, "stop")) {
  if (VAR_7->state != VAR_2)
   return -VAR_1;

  FUNC_2(VAR_7);
 } else {
  FUNC_0(&VAR_7->dev, "Unrecognised option: %s\n", VAR_5);
  VAR_8 = -VAR_1;
 }
 return VAR_8 ? VAR_8 : VAR_6;
}
