
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int num_planes; int index; } ;
struct s5p_mfc_fmt {int num_planes; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_3(struct s5p_mfc_fmt *VAR_1, struct vb2_buffer *VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;
 if (VAR_1->num_planes != VAR_2->num_planes) {
  FUNC_1("invalid plane number for the format\n");
  return -VAR_0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->num_planes; VAR_3++) {
  dma_addr_t VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (!VAR_4) {
   FUNC_1("failed to get plane cookie\n");
   return -VAR_0;
  }
  FUNC_0(2, "index: %d, plane[%d] cookie: %pad\n",
     VAR_2->index, VAR_3, &VAR_4);
 }
 return 0;
}
