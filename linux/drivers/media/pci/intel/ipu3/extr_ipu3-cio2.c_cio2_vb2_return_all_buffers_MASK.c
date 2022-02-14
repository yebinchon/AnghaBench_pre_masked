
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cio2_queue {TYPE_2__** bufs; int bufs_queued; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_3__ {int vb2_buf; } ;
struct TYPE_4__ {TYPE_1__ vbb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct cio2_queue *VAR_1,
     enum vb2_buffer_state VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->bufs[VAR_3]) {
   FUNC_0(&VAR_1->bufs_queued);
   FUNC_1(&VAR_1->bufs[VAR_3]->vbb.vb2_buf,
     VAR_2);
  }
 }
}
