
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int direction; } ;
struct most_channel {TYPE_1__ cfg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 struct most_channel* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4,
      char *VAR_5)
{
 struct most_channel *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->cfg.direction & VAR_1)
  return FUNC_0(VAR_5, VAR_2, "tx\n");
 else if (VAR_6->cfg.direction & VAR_0)
  return FUNC_0(VAR_5, VAR_2, "rx\n");
 return FUNC_0(VAR_5, VAR_2, "unconfigured\n");
}
