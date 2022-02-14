
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxbf_tmfifo_vring {int index; int dma; void* va; int align; int num; int vdev_id; struct mlxbf_tmfifo* fifo; } ;
struct device {int parent; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {struct device dev; TYPE_1__ id; } ;
struct mlxbf_tmfifo_vdev {TYPE_2__ vdev; struct mlxbf_tmfifo_vring* vrings; } ;
struct mlxbf_tmfifo {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (struct mlxbf_tmfifo*,struct mlxbf_tmfifo_vdev*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mlxbf_tmfifo *VAR_4,
         struct mlxbf_tmfifo_vdev *VAR_5)
{
 struct mlxbf_tmfifo_vring *VAR_6;
 struct device *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5->vrings); VAR_9++) {
  VAR_6 = &VAR_5->vrings[VAR_9];
  VAR_6->fifo = VAR_4;
  VAR_6->num = VAR_2;
  VAR_6->align = VAR_3;
  VAR_6->index = VAR_9;
  VAR_6->vdev_id = VAR_5->vdev.id.device;
  VAR_7 = &VAR_5->vdev.dev;

  VAR_10 = FUNC_4(VAR_6->num, VAR_6->align);
  VAR_11 = FUNC_2(VAR_7->parent, VAR_10, &VAR_8, VAR_1);
  if (!VAR_11) {
   FUNC_3(VAR_4, VAR_5);
   FUNC_1(VAR_7->parent, "dma_alloc_coherent failed\n");
   return -VAR_0;
  }

  VAR_6->va = VAR_11;
  VAR_6->dma = VAR_8;
 }

 return 0;
}
