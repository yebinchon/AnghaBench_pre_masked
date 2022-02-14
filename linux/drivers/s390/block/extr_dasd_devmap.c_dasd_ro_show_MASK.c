
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_devmap {int features; struct dasd_device* device; } ;
struct dasd_device {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct dasd_devmap* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5, char *VAR_6)
{
 struct dasd_devmap *VAR_7;
 struct dasd_device *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_1(FUNC_2(VAR_4));
 if (FUNC_0(VAR_7))
  goto out;

 VAR_9 = !!(VAR_7->features & VAR_0);

 FUNC_4(&VAR_3);
 VAR_8 = VAR_7->device;
 if (VAR_8)
  VAR_9 |= FUNC_6(VAR_1, &VAR_8->flags);
 FUNC_5(&VAR_3);

out:
 return FUNC_3(VAR_6, VAR_2, VAR_9 ? "1\n" : "0\n");
}
