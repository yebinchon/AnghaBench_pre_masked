
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxbf_tmfifo_vring {int * vq; int * va; int dma; int align; int num; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct mlxbf_tmfifo_vdev {TYPE_2__ vdev; struct mlxbf_tmfifo_vring* vrings; } ;
struct mlxbf_tmfifo {int dummy; } ;


 int FUNC_0 (struct mlxbf_tmfifo_vring*) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mlxbf_tmfifo *VAR_0,
         struct mlxbf_tmfifo_vdev *VAR_1)
{
 struct mlxbf_tmfifo_vring *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->vrings); VAR_3++) {
  VAR_2 = &VAR_1->vrings[VAR_3];
  if (VAR_2->va) {
   VAR_4 = FUNC_3(VAR_2->num, VAR_2->align);
   FUNC_1(VAR_1->vdev.dev.parent, VAR_4,
       VAR_2->va, VAR_2->dma);
   VAR_2->va = ((void*)0);
   if (VAR_2->vq) {
    FUNC_2(VAR_2->vq);
    VAR_2->vq = ((void*)0);
   }
  }
 }
}
