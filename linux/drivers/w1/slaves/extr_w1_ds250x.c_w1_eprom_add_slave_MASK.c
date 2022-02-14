
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int family; scalar_t__ id; } ;
struct w1_slave {int dev; TYPE_4__ reg_num; TYPE_3__* master; TYPE_1__* family; struct w1_eprom_data* family_data; } ;
struct w1_eprom_data {int size; int nvmem_name; void* read; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int read_only; int word_size; int id; int size; int name; struct w1_slave* priv; int type; int reg_read; int * dev; } ;
struct TYPE_7__ {TYPE_2__* bus_master; } ;
struct TYPE_6__ {char* dev_id; } ;
struct TYPE_5__ {int fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvmem_device*) ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 struct w1_eprom_data* FUNC_1 (int *,int,int ) ;
 struct nvmem_device* FUNC_2 (int *,struct nvmem_config*) ;
 int FUNC_3 (int ,int,char*,...) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_9)
{
 struct w1_eprom_data *VAR_10;
 struct nvmem_device *VAR_11;
 struct nvmem_config VAR_12 = {
  .dev = &VAR_9->dev,
  .reg_read = VAR_8,
  .type = VAR_2,
  .read_only = 1,
  .word_size = 1,
  .priv = VAR_9,
  .id = -1
 };

 VAR_10 = FUNC_1(&VAR_9->dev, sizeof(struct w1_eprom_data), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9->family_data = VAR_10;
 switch (VAR_9->family->fid) {
 case 131:
  VAR_10->size = VAR_3;
  VAR_10->read = VAR_6;
  break;
 case 130:
 case 129:
  VAR_10->size = VAR_4;
  VAR_10->read = VAR_6;
  break;
 case 128:
  VAR_10->size = VAR_5;
  VAR_10->read = VAR_7;
  break;
 }

 if (VAR_9->master->bus_master->dev_id)
  FUNC_3(VAR_10->nvmem_name, sizeof(VAR_10->nvmem_name),
    "%s-%02x-%012llx",
    VAR_9->master->bus_master->dev_id, VAR_9->reg_num.family,
    (unsigned long long)VAR_9->reg_num.id);
 else
  FUNC_3(VAR_10->nvmem_name, sizeof(VAR_10->nvmem_name),
    "%02x-%012llx",
    VAR_9->reg_num.family,
    (unsigned long long)VAR_9->reg_num.id);

 VAR_12.name = VAR_10->nvmem_name;
 VAR_12.size = VAR_10->size;

 VAR_11 = FUNC_2(&VAR_9->dev, &VAR_12);
 return FUNC_0(VAR_11);
}
