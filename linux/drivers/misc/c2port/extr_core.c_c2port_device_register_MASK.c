
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2port_ops {int blocks_num; int block_size; int (* access ) (struct c2port_device*,int ) ;int c2d_set; int c2d_get; int c2ck_set; int c2d_dir; } ;
struct c2port_device {int id; int dev; scalar_t__ flash_access; scalar_t__ access; int mutex; struct c2port_ops* ops; int name; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct c2port_device* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (int ,struct c2port_device*) ;
 int FUNC_5 (int ,int *,int ,struct c2port_device*,char*,int) ;
 int FUNC_6 (int *,struct c2port_device*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct c2port_device*) ;
 struct c2port_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (struct c2port_device*,int ) ;
 scalar_t__ FUNC_17 (int) ;

struct c2port_device *FUNC_18(char *VAR_9,
     struct c2port_ops *VAR_10, void *VAR_11)
{
 struct c2port_device *VAR_12;
 int VAR_13;

 if (FUNC_17(!VAR_10) || FUNC_17(!VAR_10->access) || FUNC_17(!VAR_10->c2d_dir) || FUNC_17(!VAR_10->c2ck_set) || FUNC_17(!VAR_10->c2d_get) || FUNC_17(!VAR_10->c2d_set))


  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_11(sizeof(struct c2port_device), VAR_3);
 if (FUNC_17(!VAR_12))
  return FUNC_0(-VAR_2);

 FUNC_7(VAR_3);
 FUNC_13(&VAR_8);
 VAR_13 = FUNC_6(&VAR_7, VAR_12, 0, 0, VAR_4);
 FUNC_14(&VAR_8);
 FUNC_8();

 if (VAR_13 < 0)
  goto error_idr_alloc;
 VAR_12->id = VAR_13;

 VAR_5.size = VAR_10->blocks_num * VAR_10->block_size;

 VAR_12->dev = FUNC_5(VAR_6, ((void*)0), 0, VAR_12,
       "c2port%d", VAR_12->id);
 if (FUNC_1(VAR_12->dev)) {
  VAR_13 = FUNC_2(VAR_12->dev);
  goto error_device_create;
 }
 FUNC_4(VAR_12->dev, VAR_12);

 FUNC_15(VAR_12->name, VAR_9, VAR_0);
 VAR_12->ops = VAR_10;
 FUNC_12(&VAR_12->mutex);


 VAR_12->access = VAR_12->flash_access = 0;
 VAR_10->access(VAR_12, 0);

 FUNC_3(VAR_12->dev, "C2 port %s added\n", VAR_9);
 FUNC_3(VAR_12->dev, "%s flash has %d blocks x %d bytes "
    "(%d bytes total)\n",
    VAR_9, VAR_10->blocks_num, VAR_10->block_size,
    VAR_10->blocks_num * VAR_10->block_size);

 return VAR_12;

error_device_create:
 FUNC_13(&VAR_8);
 FUNC_9(&VAR_7, VAR_12->id);
 FUNC_14(&VAR_8);

error_idr_alloc:
 FUNC_10(VAR_12);

 return FUNC_0(VAR_13);
}
