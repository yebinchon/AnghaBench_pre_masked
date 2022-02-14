
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct most_channel {unsigned int channel_id; TYPE_2__* iface; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* channel_vector; } ;
struct TYPE_3__ {int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 struct most_channel* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct most_channel *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6 = VAR_5->channel_id;

 FUNC_1(VAR_4, "");
 if (VAR_5->iface->channel_vector[VAR_6].direction & VAR_0)
  FUNC_0(VAR_4, "rx ");
 if (VAR_5->iface->channel_vector[VAR_6].direction & VAR_1)
  FUNC_0(VAR_4, "tx ");
 FUNC_0(VAR_4, "\n");
 return FUNC_2(VAR_4);
}
