
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; struct vxge_vpath* vpaths; scalar_t__ intr_cnt; } ;
struct TYPE_4__ {int tx_vector_no; } ;
struct TYPE_3__ {int rx_vector_no; } ;
struct vxge_vpath {int device_id; int handle; TYPE_2__ fifo; TYPE_1__ ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vxgedev*) ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct vxgedev *VAR_2)
{

 int VAR_3, VAR_4 = 0;

 int VAR_5[4] = {0, 1, 0, 0};

 VAR_2->intr_cnt = 0;


 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) {
  for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++) {
   struct vxge_vpath *VAR_6 = &VAR_2->vpaths[VAR_3];




   VAR_6->ring.rx_vector_no = (VAR_6->device_id *
      VAR_1) + 1;

   VAR_6->fifo.tx_vector_no = (VAR_6->device_id *
      VAR_1);

   FUNC_1(VAR_6->handle, VAR_5,
            VAR_0);
  }
 }

 return VAR_4;
}
