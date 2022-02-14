
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct coda_q_data {int fourcc; int bytesperline; int height; } ;
struct coda_ctx {int dev; } ;







 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct coda_ctx *VAR_0, struct coda_q_data *VAR_1,
       struct vb2_v4l2_buffer *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_1(&VAR_2->vb2_buf, 0);
 u32 VAR_5, VAR_6;

 switch (VAR_1->fourcc) {
 case 129:

 case 132:
 case 131:
 default:
  VAR_5 = VAR_4 + VAR_1->bytesperline * VAR_1->height;
  VAR_6 = VAR_5 + VAR_1->bytesperline * VAR_1->height / 4;
  break;
 case 128:

  VAR_6 = VAR_4 + VAR_1->bytesperline * VAR_1->height;
  VAR_5 = VAR_6 + VAR_1->bytesperline * VAR_1->height / 4;
  break;
 case 130:
  VAR_5 = VAR_4 + VAR_1->bytesperline * VAR_1->height;
  VAR_6 = VAR_5 + VAR_1->bytesperline * VAR_1->height / 2;
 }

 FUNC_0(VAR_0->dev, VAR_4, VAR_3);
 FUNC_0(VAR_0->dev, VAR_5, VAR_3 + 4);
 FUNC_0(VAR_0->dev, VAR_6, VAR_3 + 8);
}
