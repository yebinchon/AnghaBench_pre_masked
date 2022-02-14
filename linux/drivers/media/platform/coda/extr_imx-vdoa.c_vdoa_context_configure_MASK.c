
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vdoa_q_data {unsigned int width; unsigned int height; unsigned int bytesperline; unsigned int sizeimage; int pixelformat; } ;
struct vdoa_ctx {struct vdoa_q_data* q_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 unsigned int FUNC_0 (unsigned int,int) ;

int FUNC_1(struct vdoa_ctx *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      u32 VAR_6)
{
 struct vdoa_q_data *VAR_7;
 struct vdoa_q_data *VAR_8;

 if (VAR_4 < 16 || VAR_4 > 8192 || VAR_4 % 16 != 0 ||
     VAR_5 < 16 || VAR_5 > 4096 || VAR_5 % 16 != 0)
  return -VAR_0;

 if (VAR_6 != 128 &&
     VAR_6 != 129)
  return -VAR_0;


 if (!VAR_3)
  return 0;

 VAR_7 = &VAR_3->q_data[VAR_2];
 VAR_8 = &VAR_3->q_data[VAR_1];

 VAR_7->width = VAR_4;
 VAR_7->height = VAR_5;
 VAR_7->bytesperline = VAR_4;
 VAR_7->sizeimage =
  FUNC_0(VAR_7->bytesperline * VAR_5, 4096) +
  VAR_7->bytesperline * VAR_5 / 2;

 VAR_8->width = VAR_4;
 VAR_8->height = VAR_5;
 VAR_8->pixelformat = VAR_6;
 switch (VAR_6) {
 case 128:
  VAR_8->bytesperline = VAR_4 * 2;
  VAR_8->sizeimage = VAR_8->bytesperline * VAR_5;
  break;
 case 129:
 default:
  VAR_8->bytesperline = VAR_4;
  VAR_8->sizeimage =
   VAR_8->bytesperline * VAR_5 * 3 / 2;
  break;
 }

 return 0;
}
