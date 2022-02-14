
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct chp_id {size_t id; int cssid; } ;
struct channel_subsystem {int mutex; struct channel_path** chps; scalar_t__ cm_enabled; int device; } ;
struct TYPE_7__ {int release; int groups; int * parent; } ;
struct TYPE_6__ {int flags; } ;
struct channel_path {int state; TYPE_2__ dev; TYPE_1__ desc; int lock; struct chp_id chpid; } ;


 int FUNC_0 (int ,char*,int ,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct channel_path*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct chp_id) ;
 int VAR_4 ;
 int FUNC_3 (struct channel_path*) ;
 struct channel_subsystem* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int ,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct channel_path*) ;
 struct channel_path* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;

int FUNC_14(struct chp_id VAR_5)
{
 struct channel_subsystem *VAR_6 = FUNC_4(VAR_5.cssid);
 struct channel_path *VAR_7;
 int VAR_8 = 0;

 FUNC_11(&VAR_6->mutex);
 if (FUNC_2(VAR_5))
  goto out;

 VAR_7 = FUNC_9(sizeof(struct channel_path), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7->chpid = VAR_5;
 VAR_7->state = 1;
 VAR_7->dev.parent = &VAR_6->device;
 VAR_7->dev.groups = VAR_3;
 VAR_7->dev.release = VAR_4;
 FUNC_10(&VAR_7->lock);


 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  goto out_free;
 if ((VAR_7->desc.flags & 0x80) == 0) {
  VAR_8 = -VAR_0;
  goto out_free;
 }
 FUNC_5(&VAR_7->dev, "chp%x.%02x", VAR_5.cssid, VAR_5.id);


 VAR_8 = FUNC_6(&VAR_7->dev);
 if (VAR_8) {
  FUNC_0(0, "Could not register chp%x.%02x: %d\n",
         VAR_5.cssid, VAR_5.id, VAR_8);
  FUNC_13(&VAR_7->dev);
  goto out;
 }

 if (VAR_6->cm_enabled) {
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8) {
   FUNC_7(&VAR_7->dev);
   goto out;
  }
 }
 VAR_6->chps[VAR_5.id] = VAR_7;
 goto out;
out_free:
 FUNC_8(VAR_7);
out:
 FUNC_12(&VAR_6->mutex);
 return VAR_8;
}
