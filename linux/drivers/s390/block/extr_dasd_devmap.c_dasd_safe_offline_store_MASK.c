
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int flags; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct ccw_device*) ;
 struct dasd_device* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct ccw_device* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_4, struct device_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 struct ccw_device *VAR_8 = FUNC_10(VAR_4);
 struct dasd_device *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_7(FUNC_5(VAR_8), VAR_10);
 VAR_9 = FUNC_3(VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  FUNC_8(FUNC_5(VAR_8), VAR_10);
  goto out;
 }

 if (FUNC_9(VAR_0, &VAR_9->flags) ||
     FUNC_9(VAR_2, &VAR_9->flags)) {

  FUNC_4(VAR_9);
  FUNC_8(FUNC_5(VAR_8), VAR_10);
  VAR_11 = -VAR_3;
  goto out;
 }

 FUNC_6(VAR_1, &VAR_9->flags);
 FUNC_4(VAR_9);
 FUNC_8(FUNC_5(VAR_8), VAR_10);

 VAR_11 = FUNC_2(VAR_8);

out:
 return VAR_11 ? VAR_11 : VAR_7;
}
