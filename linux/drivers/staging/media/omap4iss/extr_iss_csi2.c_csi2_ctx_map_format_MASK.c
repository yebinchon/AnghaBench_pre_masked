
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_mbus_framefmt {int code; } ;
struct iss_csi2_device {int output; size_t dpcm_decompress; scalar_t__ frame_skip; struct v4l2_mbus_framefmt* formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int *** VAR_4 ;

__attribute__((used)) static u16 FUNC_1(struct iss_csi2_device *VAR_5)
{
 const struct v4l2_mbus_framefmt *VAR_6 = &VAR_5->formats[VAR_2];
 int VAR_7, VAR_8;

 switch (VAR_6->code) {
 case 135:
 case 132:
 case 141:
 case 138:
  VAR_7 = 0;
  break;
 case 134:
 case 131:
 case 140:
 case 137:
  VAR_7 = 1;
  break;
 case 139:
 case 136:
 case 133:
 case 130:
  VAR_7 = 2;
  break;
 case 129:
 case 128:
  VAR_7 = 3;
  break;
 default:
  FUNC_0(1, "CSI2: pixel format %08x unsupported!\n",
       VAR_6->code);
  return 0;
 }

 if (!(VAR_5->output & VAR_0) &&
     !(VAR_5->output & VAR_1)) {

  return VAR_3;
 }




 VAR_8 = VAR_5->frame_skip ? 0 : !!(VAR_5->output & VAR_0);

 return VAR_4[VAR_7][VAR_8][VAR_5->dpcm_decompress];
}
