
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int io_modes; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct hva_ctx* drv_priv; } ;
struct hva_ctx {TYPE_1__* hva_dev; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct hva_ctx *VAR_5, struct vb2_queue *VAR_6)
{
 VAR_6->io_modes = VAR_2 | VAR_1;
 VAR_6->drv_priv = VAR_5;
 VAR_6->ops = &VAR_3;
 VAR_6->mem_ops = &VAR_4;
 VAR_6->timestamp_flags = VAR_0;
 VAR_6->lock = &VAR_5->hva_dev->lock;

 return FUNC_0(VAR_6);
}
