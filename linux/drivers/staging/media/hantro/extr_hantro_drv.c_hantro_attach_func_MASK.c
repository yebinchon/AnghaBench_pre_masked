
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct media_link {int dummy; } ;
struct media_device {int dummy; } ;
struct TYPE_7__ {int entity; int minor; } ;
struct TYPE_6__ {void* flags; } ;
struct hantro_func {TYPE_4__ vdev; int proc; int sink; TYPE_1__* intf_devnode; TYPE_3__ sink_pad; int id; TYPE_3__* proc_pads; TYPE_3__ source_pad; } ;
struct hantro_dev {struct media_device mdev; } ;
struct TYPE_5__ {int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct media_device*,int *,char*,TYPE_3__*,int,int ,TYPE_4__*) ;
 struct media_link* FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int *,int,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct media_device*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hantro_dev *VAR_8,
         struct hantro_func *VAR_9)
{
 struct media_device *VAR_10 = &VAR_8->mdev;
 struct media_link *VAR_11;
 int VAR_12;


 VAR_9->source_pad.flags = VAR_6;
 VAR_12 = FUNC_0(VAR_10, &VAR_9->vdev.entity, "source",
         &VAR_9->source_pad, 1, VAR_1,
         &VAR_9->vdev);
 if (VAR_12)
  return VAR_12;

 VAR_9->proc_pads[0].flags = VAR_5;
 VAR_9->proc_pads[1].flags = VAR_6;
 VAR_12 = FUNC_0(VAR_10, &VAR_9->proc, "proc",
         VAR_9->proc_pads, 2, VAR_9->id,
         &VAR_9->vdev);
 if (VAR_12)
  goto err_rel_entity0;

 VAR_9->sink_pad.flags = VAR_5;
 VAR_12 = FUNC_0(VAR_10, &VAR_9->sink, "sink",
         &VAR_9->sink_pad, 1, VAR_1,
         &VAR_9->vdev);
 if (VAR_12)
  goto err_rel_entity1;


 VAR_12 = FUNC_2(&VAR_9->vdev.entity, 0, &VAR_9->proc, 1,
        VAR_4 |
        VAR_3);
 if (VAR_12)
  goto err_rel_entity2;

 VAR_12 = FUNC_2(&VAR_9->proc, 0, &VAR_9->sink, 0,
        VAR_4 |
        VAR_3);
 if (VAR_12)
  goto err_rm_links0;


 VAR_9->intf_devnode = FUNC_4(VAR_10, VAR_2,
        0, VAR_7,
        VAR_9->vdev.minor);
 if (!VAR_9->intf_devnode) {
  VAR_12 = -VAR_0;
  goto err_rm_links1;
 }


 VAR_11 = FUNC_1(&VAR_9->vdev.entity,
          &VAR_9->intf_devnode->intf,
          VAR_4 |
          VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto err_rm_devnode;
 }

 VAR_11 = FUNC_1(&VAR_9->sink, &VAR_9->intf_devnode->intf,
          VAR_4 |
          VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto err_rm_devnode;
 }
 return 0;

err_rm_devnode:
 FUNC_5(VAR_9->intf_devnode);

err_rm_links1:
 FUNC_6(&VAR_9->sink);

err_rm_links0:
 FUNC_6(&VAR_9->proc);
 FUNC_6(&VAR_9->vdev.entity);

err_rel_entity2:
 FUNC_3(&VAR_9->sink);

err_rel_entity1:
 FUNC_3(&VAR_9->proc);

err_rel_entity0:
 FUNC_3(&VAR_9->vdev.entity);
 return VAR_12;
}
