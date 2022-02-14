
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vim2m_q_data {int width; int height; TYPE_1__* fmt; } ;
struct vim2m_ctx {int dev; } ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int,char*,int ,unsigned int,unsigned int) ;
 struct vim2m_q_data* FUNC_1 (struct vim2m_ctx*,int ) ;
 int FUNC_2 (int ) ;
 struct vim2m_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_2,
        unsigned int *VAR_3,
        unsigned int *VAR_4,
        unsigned int VAR_5[],
        struct device *VAR_6[])
{
 struct vim2m_ctx *VAR_7 = FUNC_3(VAR_2);
 struct vim2m_q_data *VAR_8;
 unsigned int VAR_9, VAR_10 = *VAR_3;

 VAR_8 = FUNC_1(VAR_7, VAR_2->type);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = VAR_8->width * VAR_8->height * VAR_8->fmt->depth >> 3;

 while (VAR_9 * VAR_10 > VAR_1)
  (VAR_10)--;
 *VAR_3 = VAR_10;

 if (*VAR_4)
  return VAR_5[0] < VAR_9 ? -VAR_0 : 0;

 *VAR_4 = 1;
 VAR_5[0] = VAR_9;

 FUNC_0(VAR_7->dev, 1, "%s: get %d buffer(s) of size %d each.\n",
  FUNC_2(VAR_2->type), VAR_10, VAR_9);

 return 0;
}
