
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vicodec_q_data {unsigned int sizeimage; unsigned int vb2_sizeimage; } ;
struct vicodec_ctx {int dummy; } ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vicodec_q_data* FUNC_0 (struct vicodec_ctx*,int ) ;
 struct vicodec_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1, unsigned int *VAR_2,
          unsigned int *VAR_3, unsigned int VAR_4[],
          struct device *VAR_5[])
{
 struct vicodec_ctx *VAR_6 = FUNC_1(VAR_1);
 struct vicodec_q_data *VAR_7 = FUNC_0(VAR_6, VAR_1->type);
 unsigned int VAR_8 = VAR_7->sizeimage;

 if (*VAR_3)
  return VAR_4[0] < VAR_8 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_8;
 VAR_7->vb2_sizeimage = VAR_8;
 return 0;
}
