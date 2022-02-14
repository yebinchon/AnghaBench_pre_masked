
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {int paddr; int vaddr; int size; } ;
struct TYPE_3__ {int entity; } ;
struct sun4i_csi {TYPE_2__ scratch; int dev; TYPE_1__ vdev; int qlock; int src_subdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sun4i_csi*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct sun4i_csi*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct sun4i_csi* FUNC_8 (struct vb2_queue*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(struct vb2_queue *VAR_3)
{
 struct sun4i_csi *VAR_4 = FUNC_8(VAR_3);
 unsigned long VAR_5;

 FUNC_0(VAR_4->dev, "Stopping capture\n");

 FUNC_7(VAR_4->src_subdev, VAR_2, VAR_1, 0);
 FUNC_6(VAR_4);


 FUNC_4(&VAR_4->qlock, VAR_5);
 FUNC_3(VAR_4, VAR_0);
 FUNC_5(&VAR_4->qlock, VAR_5);

 FUNC_2(&VAR_4->vdev.entity);

 FUNC_1(VAR_4->dev, VAR_4->scratch.size, VAR_4->scratch.vaddr,
     VAR_4->scratch.paddr);
}
