
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_dec23_private {int lock; } ;
struct pwc_device {int height; int width; int vbandlength; struct pwc_dec23_private dec23; } ;


 int FUNC_0 (struct pwc_dec23_private*,void const*,unsigned char*,unsigned char*,unsigned char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pwc_device *VAR_0,
     const void *VAR_1,
     void *VAR_2)
{
 int VAR_3, VAR_4;
 struct pwc_dec23_private *VAR_5 = &VAR_0->dec23;


 unsigned char *VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;
 unsigned int VAR_9;

 FUNC_1(&VAR_5->lock);

 VAR_3 = VAR_0->height / 4;
 VAR_4 = VAR_0->width * 4;
 VAR_9 = VAR_0->height * VAR_0->width;

 VAR_6 = VAR_2;
 VAR_7 = VAR_2 + VAR_9;
 VAR_8 = VAR_2 + VAR_9 + VAR_9 / 4;

 while (VAR_3--) {
  FUNC_0(VAR_5, VAR_1,
     VAR_6, VAR_7, VAR_8,
     VAR_0->width, VAR_0->width);
  VAR_1 += VAR_0->vbandlength;
  VAR_6 += VAR_4;
  VAR_7 += VAR_0->width;
  VAR_8 += VAR_0->width;
 }
 FUNC_2(&VAR_5->lock);
}
