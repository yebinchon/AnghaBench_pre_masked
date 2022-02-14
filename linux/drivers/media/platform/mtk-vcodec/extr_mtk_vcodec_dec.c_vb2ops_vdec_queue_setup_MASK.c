
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct mtk_vcodec_ctx {int id; } ;
struct mtk_q_data {unsigned int* sizeimage; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (char*,int ) ;
 struct mtk_q_data* FUNC_2 (struct mtk_vcodec_ctx*,int ) ;
 struct mtk_vcodec_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_2,
    unsigned int *VAR_3,
    unsigned int *VAR_4,
    unsigned int VAR_5[],
    struct device *VAR_6[])
{
 struct mtk_vcodec_ctx *VAR_7 = FUNC_3(VAR_2);
 struct mtk_q_data *VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_2(VAR_7, VAR_2->type);

 if (VAR_8 == ((void*)0)) {
  FUNC_1("vq->type=%d err\n", VAR_2->type);
  return -VAR_0;
 }

 if (*VAR_4) {
  for (VAR_9 = 0; VAR_9 < *VAR_4; VAR_9++) {
   if (VAR_5[VAR_9] < VAR_8->sizeimage[VAR_9])
    return -VAR_0;
  }
 } else {
  if (VAR_2->type == VAR_1)
   *VAR_4 = 2;
  else
   *VAR_4 = 1;

  for (VAR_9 = 0; VAR_9 < *VAR_4; VAR_9++)
   VAR_5[VAR_9] = VAR_8->sizeimage[VAR_9];
 }

 FUNC_0(1,
   "[%d]\t type = %d, get %d plane(s), %d buffer(s) of size 0x%x 0x%x ",
   VAR_7->id, VAR_2->type, *VAR_4, *VAR_3,
   VAR_5[0], VAR_5[1]);

 return 0;
}
