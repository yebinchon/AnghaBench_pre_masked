
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
struct TYPE_3__ {int data_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 struct most_channel* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
     struct device_attribute *VAR_5,
     char *VAR_6)
{
 struct most_channel *VAR_7 = FUNC_3(VAR_4);
 unsigned int VAR_8 = VAR_7->channel_id;

 FUNC_1(VAR_6, "");
 if (VAR_7->iface->channel_vector[VAR_8].data_type & VAR_1)
  FUNC_0(VAR_6, "control ");
 if (VAR_7->iface->channel_vector[VAR_8].data_type & VAR_0)
  FUNC_0(VAR_6, "async ");
 if (VAR_7->iface->channel_vector[VAR_8].data_type & VAR_3)
  FUNC_0(VAR_6, "sync ");
 if (VAR_7->iface->channel_vector[VAR_8].data_type & VAR_2)
  FUNC_0(VAR_6, "isoc ");
 FUNC_0(VAR_6, "\n");
 return FUNC_2(VAR_6);
}
