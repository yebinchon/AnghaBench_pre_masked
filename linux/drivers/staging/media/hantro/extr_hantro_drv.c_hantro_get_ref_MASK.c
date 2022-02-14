
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct vb2_buffer*,int ) ;
 int FUNC_1 (struct vb2_queue*,int ,int ) ;
 struct vb2_buffer* FUNC_2 (struct vb2_queue*,int) ;

dma_addr_t FUNC_3(struct vb2_queue *VAR_0, u64 VAR_1)
{
 struct vb2_buffer *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 if (VAR_3 < 0)
  return 0;
 VAR_2 = FUNC_2(VAR_0, VAR_3);
 return FUNC_0(VAR_2, 0);
}
