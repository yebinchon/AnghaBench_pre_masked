
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int registeredbufs; } ;
struct venus_buffer {int reg_list; int dma_addr; int size; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {scalar_t__ type; int vb2_queue; } ;
struct sg_table {int sgl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct vb2_buffer*) ;
 struct venus_buffer* FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct sg_table* FUNC_4 (struct vb2_buffer*,int ) ;
 struct venus_inst* FUNC_5 (int ) ;
 int FUNC_6 (struct vb2_buffer*,int ) ;

int FUNC_7(struct vb2_buffer *VAR_2)
{
 struct venus_inst *VAR_3 = FUNC_5(VAR_2->vb2_queue);
 struct vb2_v4l2_buffer *VAR_4 = FUNC_2(VAR_2);
 struct venus_buffer *VAR_5 = FUNC_3(VAR_4);
 struct sg_table *VAR_6;

 VAR_6 = FUNC_4(VAR_2, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->size = FUNC_6(VAR_2, 0);
 VAR_5->dma_addr = FUNC_1(VAR_6->sgl);

 if (VAR_2->type == VAR_1)
  FUNC_0(&VAR_5->reg_list, &VAR_3->registeredbufs);

 return 0;
}
