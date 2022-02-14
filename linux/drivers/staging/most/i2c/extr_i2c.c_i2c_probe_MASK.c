
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_8__ {int num_channels; int poison_channel; int enqueue; int configure; TYPE_2__* channel_vector; int description; int interface; } ;
struct TYPE_7__ {int dwork; int list; } ;
struct hdm_i2c {TYPE_4__ most_iface; struct i2c_client* client; TYPE_3__ rx; TYPE_2__* capabilities; int name; } ;
struct TYPE_6__ {char* name_suffix; int direction; int buffer_size_packet; int num_buffers_packet; int data_type; } ;
struct TYPE_5__ {int nr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct i2c_client*,struct hdm_i2c*) ;
 int FUNC_3 (struct hdm_i2c*) ;
 struct hdm_i2c* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int,char*,int,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_15, const struct i2c_device_id *VAR_16)
{
 struct hdm_i2c *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;


 FUNC_7(VAR_17->name, sizeof(VAR_17->name), "i2c-%d-%04x",
   VAR_15->adapter->nr, VAR_15->addr);

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_17->capabilities[VAR_19].data_type = VAR_7;
  VAR_17->capabilities[VAR_19].num_buffers_packet = VAR_5;
  VAR_17->capabilities[VAR_19].buffer_size_packet = VAR_6;
 }
 VAR_17->capabilities[VAR_0].direction = VAR_8;
 VAR_17->capabilities[VAR_0].name_suffix = "rx";
 VAR_17->capabilities[VAR_1].direction = VAR_9;
 VAR_17->capabilities[VAR_1].name_suffix = "tx";

 VAR_17->most_iface.interface = VAR_4;
 VAR_17->most_iface.description = VAR_17->name;
 VAR_17->most_iface.num_channels = VAR_10;
 VAR_17->most_iface.channel_vector = VAR_17->capabilities;
 VAR_17->most_iface.configure = VAR_11;
 VAR_17->most_iface.enqueue = VAR_12;
 VAR_17->most_iface.poison_channel = VAR_14;

 FUNC_1(&VAR_17->rx.list);

 FUNC_0(&VAR_17->rx.dwork, VAR_13);

 VAR_17->client = VAR_15;
 FUNC_2(VAR_15, VAR_17);

 VAR_18 = FUNC_5(&VAR_17->most_iface);
 if (VAR_18) {
  FUNC_6("Failed to register i2c as a MOST interface\n");
  FUNC_3(VAR_17);
  return VAR_18;
 }

 return 0;
}
