
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct camif_vp {scalar_t__ payload; int vdev; int * out_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 struct camif_vp* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct camif_vp *VAR_2 = FUNC_1(VAR_1->vb2_queue);

 if (VAR_2->out_fmt == ((void*)0))
  return -VAR_0;

 if (FUNC_2(VAR_1, 0) < VAR_2->payload) {
  FUNC_0(&VAR_2->vdev, "buffer too small: %lu, required: %u\n",
    FUNC_2(VAR_1, 0), VAR_2->payload);
  return -VAR_0;
 }
 FUNC_3(VAR_1, 0, VAR_2->payload);

 return 0;
}
