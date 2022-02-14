
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tb_nhi {TYPE_1__* pdev; } ;
struct tb_ctl {TYPE_3__** rx_packets; int rx; int tx; int frame_pool; int request_queue; int request_queue_lock; void* callback_data; int callback; struct tb_nhi* nhi; } ;
typedef int event_cb ;
struct TYPE_5__ {int callback; } ;
struct TYPE_6__ {TYPE_2__ frame; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int *,int ,int,int ) ;
 struct tb_ctl* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb_ctl*,char*) ;
 int FUNC_5 (struct tb_ctl*) ;
 TYPE_3__* FUNC_6 (struct tb_ctl*) ;
 int VAR_4 ;
 int FUNC_7 (struct tb_nhi*,int ,int,int ,int,int,int *,int *) ;
 int FUNC_8 (struct tb_nhi*,int ,int,int ) ;

struct tb_ctl *FUNC_9(struct tb_nhi *VAR_5, event_cb VAR_6, void *VAR_7)
{
 int VAR_8;
 struct tb_ctl *VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);
 VAR_9->nhi = VAR_5;
 VAR_9->callback = VAR_6;
 VAR_9->callback_data = VAR_7;

 FUNC_3(&VAR_9->request_queue_lock);
 FUNC_0(&VAR_9->request_queue);
 VAR_9->frame_pool = FUNC_1("thunderbolt_ctl", &VAR_5->pdev->dev,
      VAR_3, 4, 0);
 if (!VAR_9->frame_pool)
  goto err;

 VAR_9->tx = FUNC_8(VAR_5, 0, 10, VAR_1);
 if (!VAR_9->tx)
  goto err;

 VAR_9->rx = FUNC_7(VAR_5, 0, 10, VAR_1, 0xffff,
    0xffff, ((void*)0), ((void*)0));
 if (!VAR_9->rx)
  goto err;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9->rx_packets[VAR_8] = FUNC_6(VAR_9);
  if (!VAR_9->rx_packets[VAR_8])
   goto err;
  VAR_9->rx_packets[VAR_8]->frame.callback = VAR_4;
 }

 FUNC_4(VAR_9, "control channel created\n");
 return VAR_9;
err:
 FUNC_5(VAR_9);
 return ((void*)0);
}
