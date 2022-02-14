
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
struct TYPE_3__ {int num_buffers_packet; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct most_channel* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct most_channel *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = VAR_4->channel_id;

 return FUNC_0(VAR_3, VAR_0, "%d\n",
   VAR_4->iface->channel_vector[VAR_5].num_buffers_packet);
}
