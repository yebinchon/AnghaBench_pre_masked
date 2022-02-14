
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {unsigned int width; unsigned int height; unsigned int sizeimage; unsigned int bytesperline; int pixelformat; int field; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 unsigned int FUNC_1 (unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct v4l2_pix_format *VAR_5)
{
 unsigned int VAR_6 = VAR_5->width;
 unsigned int VAR_7 = VAR_5->height;
 unsigned int VAR_8 = VAR_5->sizeimage;
 unsigned int VAR_9 = VAR_5->bytesperline;

 VAR_5->field = VAR_4;


 VAR_6 = FUNC_1(VAR_6, VAR_3, VAR_1);
 VAR_7 = FUNC_1(VAR_7, VAR_2, VAR_0);

 switch (VAR_5->pixelformat) {
 case 130:
 case 131:

  VAR_9 = 0;

  break;

 case 128:

  VAR_9 = FUNC_0(VAR_6, 32);


  VAR_7 = FUNC_0(VAR_7, 32);


  VAR_8 = VAR_9 * VAR_7;


  VAR_8 += VAR_9 * VAR_7 / 2;

  break;

 case 129:

  VAR_9 = FUNC_0(VAR_6, 16);


  VAR_7 = FUNC_0(VAR_7, 16);


  VAR_8 = VAR_9 * VAR_7;


  VAR_8 += VAR_9 * VAR_7 / 2;

  break;
 }

 VAR_5->width = VAR_6;
 VAR_5->height = VAR_7;

 VAR_5->bytesperline = VAR_9;
 VAR_5->sizeimage = VAR_8;
}
