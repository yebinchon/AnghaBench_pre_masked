
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {int bytesperline; int sizeimage; int height; int width; int pixelformat; } ;
struct mcam_camera {struct v4l2_pix_format pix_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;







 int FUNC_0 (struct mcam_camera*,char*,int,int) ;
 int FUNC_1 (struct mcam_camera*,char*,int) ;
 int FUNC_2 (struct mcam_camera*,int ,int) ;
 int FUNC_3 (struct mcam_camera*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct mcam_camera *VAR_24)
{
 struct v4l2_pix_format *VAR_25 = &VAR_24->pix_format;
 u32 VAR_26 = 0, VAR_27 = 0, VAR_28, VAR_29;

 FUNC_0(VAR_24, "camera: bytesperline = %d; height = %d\n",
  VAR_25->bytesperline, VAR_25->sizeimage / VAR_25->bytesperline);
 VAR_28 = (VAR_25->height << VAR_19) & VAR_18;
 VAR_29 = (VAR_25->width * 2) & VAR_17;

 switch (VAR_25->pixelformat) {
 case 130:
 case 128:
  VAR_26 = VAR_25->width * 2;
  VAR_27 = 0;
  break;
 case 131:
 case 129:
  VAR_26 = VAR_25->width;
  VAR_27 = VAR_25->width / 2;
  break;
 default:
  VAR_26 = VAR_25->bytesperline;
  VAR_27 = 0;
  break;
 }

 FUNC_3(VAR_24, VAR_22, VAR_27 << 16 | VAR_26,
   VAR_16 | VAR_15);
 FUNC_2(VAR_24, VAR_23, VAR_28 | VAR_29);
 FUNC_2(VAR_24, VAR_21, 0x0);




 switch (VAR_25->pixelformat) {
 case 131:
 case 129:
  FUNC_3(VAR_24, VAR_20,
   VAR_2 | VAR_13 | VAR_12, VAR_0);
  break;
 case 130:
  FUNC_3(VAR_24, VAR_20,
   VAR_2 | VAR_14 | VAR_10, VAR_0);
  break;
 case 128:
  FUNC_3(VAR_24, VAR_20,
   VAR_2 | VAR_14 | VAR_11, VAR_0);
  break;
 case 132:
  FUNC_3(VAR_24, VAR_20,
   VAR_1 | VAR_6 | VAR_3, VAR_0);
  break;
 case 134:
  FUNC_3(VAR_24, VAR_20,
   VAR_1 | VAR_7 | VAR_4, VAR_0);
  break;
 case 133:
  FUNC_3(VAR_24, VAR_20,
   VAR_1 | VAR_5, VAR_0);
  break;
 default:
  FUNC_1(VAR_24, "camera: unknown format: %#x\n", VAR_25->pixelformat);
  break;
 }




 FUNC_3(VAR_24, VAR_20, VAR_9, VAR_8);
}
