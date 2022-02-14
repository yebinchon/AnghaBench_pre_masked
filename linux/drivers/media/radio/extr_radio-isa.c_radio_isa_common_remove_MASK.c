
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radio_isa_ops {int (* s_mute_volume ) (struct radio_isa_card*,int,int ) ;} ;
struct radio_isa_card {TYPE_3__* drv; int v4l2_dev; int io; int hdl; int vdev; TYPE_2__* volume; } ;
struct TYPE_6__ {int card; struct radio_isa_ops* ops; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_5__ {TYPE_1__ cur; } ;


 int FUNC_0 (struct radio_isa_card*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct radio_isa_card*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct radio_isa_card *VAR_0,
       unsigned VAR_1)
{
 const struct radio_isa_ops *VAR_2 = VAR_0->drv->ops;

 VAR_2->s_mute_volume(VAR_0, 1, VAR_0->volume ? VAR_0->volume->cur.val : 0);
 FUNC_6(&VAR_0->vdev);
 FUNC_3(&VAR_0->hdl);
 FUNC_4(&VAR_0->v4l2_dev);
 FUNC_1(VAR_0->io, VAR_1);
 FUNC_5(&VAR_0->v4l2_dev, "Removed radio card %s\n", VAR_0->drv->card);
 FUNC_0(VAR_0);
 return 0;
}
