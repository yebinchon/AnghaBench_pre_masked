
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct most_interface {int mod; TYPE_1__* p; } ;
struct TYPE_8__ {scalar_t__ refs; int num_buffers; struct core_component* comp; } ;
struct TYPE_7__ {scalar_t__ refs; int num_buffers; struct core_component* comp; } ;
struct TYPE_10__ {scalar_t__ direction; int num_buffers; scalar_t__ extra_len; } ;
struct most_channel {int start_mutex; TYPE_3__ pipe1; TYPE_2__ pipe0; int mbo_ref; TYPE_5__ cfg; scalar_t__ is_starving; int hdm_fifo_wq; int channel_id; TYPE_4__* iface; } ;
struct core_component {int dummy; } ;
struct TYPE_9__ {scalar_t__ (* configure ) (TYPE_4__*,int ,TYPE_5__*) ;} ;
struct TYPE_6__ {struct most_channel** channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct most_channel*,scalar_t__,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct most_channel*,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct most_interface *VAR_6, int VAR_7,
         struct core_component *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct most_channel *VAR_11 = VAR_6->p->channel[VAR_7];

 if (FUNC_10(!VAR_11))
  return -VAR_0;

 FUNC_4(&VAR_11->start_mutex);
 if (VAR_11->pipe0.refs + VAR_11->pipe1.refs > 0)
  goto out;

 if (!FUNC_9(VAR_6->mod)) {
  FUNC_6("failed to acquire HDM lock\n");
  FUNC_5(&VAR_11->start_mutex);
  return -VAR_1;
 }

 VAR_11->cfg.extra_len = 0;
 if (VAR_11->iface->configure(VAR_11->iface, VAR_11->channel_id, &VAR_11->cfg)) {
  FUNC_6("channel configuration failed. Go check settings...\n");
  VAR_10 = -VAR_0;
  goto err_put_module;
 }

 FUNC_2(&VAR_11->hdm_fifo_wq);

 if (VAR_11->cfg.direction == VAR_3)
  VAR_9 = FUNC_0(VAR_11, VAR_11->cfg.direction,
        VAR_4);
 else
  VAR_9 = FUNC_0(VAR_11, VAR_11->cfg.direction,
        VAR_5);
 if (FUNC_10(!VAR_9)) {
  VAR_10 = -VAR_2;
  goto err_put_module;
 }

 VAR_10 = FUNC_7(VAR_11, VAR_7);
 if (VAR_10)
  goto err_put_module;

 VAR_11->is_starving = 0;
 VAR_11->pipe0.num_buffers = VAR_11->cfg.num_buffers / 2;
 VAR_11->pipe1.num_buffers = VAR_11->cfg.num_buffers - VAR_11->pipe0.num_buffers;
 FUNC_1(&VAR_11->mbo_ref, VAR_9);

out:
 if (VAR_8 == VAR_11->pipe0.comp)
  VAR_11->pipe0.refs++;
 if (VAR_8 == VAR_11->pipe1.comp)
  VAR_11->pipe1.refs++;
 FUNC_5(&VAR_11->start_mutex);
 return 0;

err_put_module:
 FUNC_3(VAR_6->mod);
 FUNC_5(&VAR_11->start_mutex);
 return VAR_10;
}
