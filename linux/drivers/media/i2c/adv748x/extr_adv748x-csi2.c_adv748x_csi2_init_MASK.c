
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adv748x_state {int * endpoints; } ;
struct TYPE_4__ {int entity; int * internal_ops; int fwnode; } ;
struct adv748x_csi2 {size_t port; TYPE_1__ sd; int ctrl_hdl; TYPE_2__* pads; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adv748x_csi2*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct adv748x_csi2*,int ) ;
 int FUNC_2 (TYPE_1__*,struct adv748x_state*,int *,int ,char*) ;
 int FUNC_3 (struct adv748x_csi2*) ;
 scalar_t__ FUNC_4 (struct adv748x_csi2*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct adv748x_state *VAR_8, struct adv748x_csi2 *VAR_9)
{
 int VAR_10;

 if (!FUNC_3(VAR_9))
  return 0;


 FUNC_1(VAR_9, 0);

 FUNC_2(&VAR_9->sd, VAR_8, &VAR_7,
       VAR_3,
       FUNC_4(VAR_9) ? "txa" : "txb");


 VAR_9->sd.fwnode = FUNC_7(VAR_8->endpoints[VAR_9->port]);


 VAR_9->sd.internal_ops = &VAR_6;

 VAR_9->pads[VAR_1].flags = VAR_4;
 VAR_9->pads[VAR_2].flags = VAR_5;

 VAR_10 = FUNC_6(&VAR_9->sd.entity, VAR_0,
         VAR_9->pads);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto err_free_media;

 VAR_10 = FUNC_8(&VAR_9->sd);
 if (VAR_10)
  goto err_free_ctrl;

 return 0;

err_free_ctrl:
 FUNC_9(&VAR_9->ctrl_hdl);
err_free_media:
 FUNC_5(&VAR_9->sd.entity);

 return VAR_10;
}
