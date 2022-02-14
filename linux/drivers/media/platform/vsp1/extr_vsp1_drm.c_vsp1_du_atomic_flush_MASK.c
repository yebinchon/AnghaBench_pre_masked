
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsp1_pipeline {TYPE_3__* output; } ;
struct vsp1_du_writeback_config {int * mem; int pitch; scalar_t__ pixelformat; } ;
struct vsp1_du_atomic_pipe_config {struct vsp1_du_writeback_config writeback; int crc; } ;
struct vsp1_drm_pipeline {int crc; struct vsp1_pipeline pipe; } ;
struct vsp1_device {TYPE_2__* drm; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int * addr; } ;
struct TYPE_6__ {int writeback; TYPE_1__ mem; } ;
struct TYPE_5__ {int lock; struct vsp1_drm_pipeline* pipe; } ;


 scalar_t__ FUNC_0 (int) ;
 struct vsp1_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vsp1_pipeline*) ;
 int FUNC_5 (struct vsp1_device*,TYPE_3__*,scalar_t__,int ) ;
 int FUNC_6 (struct vsp1_device*,struct vsp1_pipeline*) ;

void FUNC_7(struct device *VAR_0, unsigned int VAR_1,
     const struct vsp1_du_atomic_pipe_config *VAR_2)
{
 struct vsp1_device *VAR_3 = FUNC_1(VAR_0);
 struct vsp1_drm_pipeline *VAR_4 = &VAR_3->drm->pipe[VAR_1];
 struct vsp1_pipeline *VAR_5 = &VAR_4->pipe;
 int VAR_6;

 VAR_4->crc = VAR_2->crc;

 FUNC_2(&VAR_3->drm->lock);

 if (VAR_2->writeback.pixelformat) {
  const struct vsp1_du_writeback_config *VAR_7 = &VAR_2->writeback;

  VAR_6 = FUNC_5(VAR_3, VAR_5->output,
             VAR_7->pixelformat,
             VAR_7->pitch);
  if (FUNC_0(VAR_6 < 0))
   goto done;

  VAR_5->output->mem.addr[0] = VAR_7->mem[0];
  VAR_5->output->mem.addr[1] = VAR_7->mem[1];
  VAR_5->output->mem.addr[2] = VAR_7->mem[2];
  VAR_5->output->writeback = 1;
 }

 FUNC_6(VAR_3, VAR_5);
 FUNC_4(VAR_5);

done:
 FUNC_3(&VAR_3->drm->lock);
}
