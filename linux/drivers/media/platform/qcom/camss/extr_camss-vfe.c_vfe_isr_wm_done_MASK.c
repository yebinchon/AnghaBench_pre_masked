
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vfe_output {scalar_t__ active_buf; scalar_t__ state; unsigned int wm_num; struct camss_buffer* last_buffer; int * wm_idx; struct camss_buffer** buf; int sequence; } ;
struct vfe_device {size_t* wm_output_map; int output_lock; TYPE_3__* ops; TYPE_2__* camss; TYPE_1__* line; } ;
struct TYPE_10__ {int timestamp; } ;
struct TYPE_9__ {TYPE_5__ vb2_buf; scalar_t__ sequence; } ;
struct camss_buffer {TYPE_4__ vb; int * addr; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {scalar_t__ (* wm_get_ping_pong_status ) (struct vfe_device*,size_t) ;int (* wm_set_pong_addr ) (struct vfe_device*,int ,int ) ;int (* wm_set_ping_addr ) (struct vfe_device*,int ,int ) ;} ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct vfe_output output; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct vfe_device*,size_t) ;
 int FUNC_5 (struct vfe_device*,int ,int ) ;
 int FUNC_6 (struct vfe_device*,int ,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 struct camss_buffer* FUNC_8 (struct vfe_output*) ;
 int FUNC_9 (struct vfe_device*,struct vfe_output*) ;
 int FUNC_10 (struct vfe_device*,struct vfe_output*) ;

__attribute__((used)) static void FUNC_11(struct vfe_device *VAR_3, u8 VAR_4)
{
 struct camss_buffer *VAR_5;
 struct vfe_output *VAR_6;
 dma_addr_t *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9;
 u64 VAR_10 = FUNC_1();
 unsigned int VAR_11;

 VAR_9 = VAR_3->ops->wm_get_ping_pong_status(VAR_3, VAR_4);

 FUNC_2(&VAR_3->output_lock, VAR_8);

 if (VAR_3->wm_output_map[VAR_4] == VAR_1) {
  FUNC_0(VAR_3->camss->dev,
        "Received wm done for unmapped index\n");
  goto out_unlock;
 }
 VAR_6 = &VAR_3->line[VAR_3->wm_output_map[VAR_4]].output;

 if (VAR_6->active_buf == VAR_9) {
  FUNC_0(VAR_3->camss->dev,
        "Active buffer mismatch!\n");
  goto out_unlock;
 }
 VAR_6->active_buf = VAR_9;

 VAR_5 = VAR_6->buf[!VAR_9];
 if (!VAR_5) {
  FUNC_0(VAR_3->camss->dev,
        "Missing ready buf %d %d!\n",
        !VAR_9, VAR_6->state);
  goto out_unlock;
 }

 VAR_5->vb.vb2_buf.timestamp = VAR_10;
 VAR_5->vb.sequence = VAR_6->sequence++;


 VAR_6->buf[!VAR_9] = FUNC_8(VAR_6);
 if (!VAR_6->buf[!VAR_9]) {

  VAR_7 = VAR_5->addr;
  FUNC_9(VAR_3, VAR_6);
 } else {
  VAR_7 = VAR_6->buf[!VAR_9]->addr;
  FUNC_10(VAR_3, VAR_6);
 }

 if (VAR_9)
  for (VAR_11 = 0; VAR_11 < VAR_6->wm_num; VAR_11++)
   VAR_3->ops->wm_set_ping_addr(VAR_3, VAR_6->wm_idx[VAR_11],
         VAR_7[VAR_11]);
 else
  for (VAR_11 = 0; VAR_11 < VAR_6->wm_num; VAR_11++)
   VAR_3->ops->wm_set_pong_addr(VAR_3, VAR_6->wm_idx[VAR_11],
         VAR_7[VAR_11]);

 FUNC_3(&VAR_3->output_lock, VAR_8);

 if (VAR_6->state == VAR_2)
  VAR_6->last_buffer = VAR_5;
 else
  FUNC_7(&VAR_5->vb.vb2_buf, VAR_0);

 return;

out_unlock:
 FUNC_3(&VAR_3->output_lock, VAR_8);
}
