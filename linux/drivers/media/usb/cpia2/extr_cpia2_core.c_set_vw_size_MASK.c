
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int video_size; } ;
struct TYPE_6__ {TYPE_2__ roi; TYPE_1__ vp_params; } ;
struct camera_data {int width; int height; TYPE_3__ params; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
__attribute__((used)) static int FUNC_1(struct camera_data *VAR_9, int VAR_10)
{
 int VAR_11 = 0;

 VAR_9->params.vp_params.video_size = VAR_10;

 switch (VAR_10) {
 case 128:
  FUNC_0("Setting size to VGA\n");
  VAR_9->params.roi.width = VAR_7;
  VAR_9->params.roi.height = VAR_8;
  VAR_9->width = VAR_7;
  VAR_9->height = VAR_8;
  break;
 case 131:
  FUNC_0("Setting size to CIF\n");
  VAR_9->params.roi.width = VAR_1;
  VAR_9->params.roi.height = VAR_2;
  VAR_9->width = VAR_1;
  VAR_9->height = VAR_2;
  break;
 case 129:
  FUNC_0("Setting size to QVGA\n");
  VAR_9->params.roi.width = VAR_5;
  VAR_9->params.roi.height = VAR_6;
  VAR_9->width = VAR_5;
  VAR_9->height = VAR_6;
  break;
 case 132:
  VAR_9->params.roi.width = 288;
  VAR_9->params.roi.height = 216;
  VAR_9->width = 288;
  VAR_9->height = 216;
  break;
 case 133:
  VAR_9->width = 256;
  VAR_9->height = 192;
  VAR_9->params.roi.width = 256;
  VAR_9->params.roi.height = 192;
  break;
 case 134:
  VAR_9->width = 224;
  VAR_9->height = 168;
  VAR_9->params.roi.width = 224;
  VAR_9->params.roi.height = 168;
  break;
 case 135:
  VAR_9->width = 192;
  VAR_9->height = 144;
  VAR_9->params.roi.width = 192;
  VAR_9->params.roi.height = 144;
  break;
 case 130:
  FUNC_0("Setting size to QCIF\n");
  VAR_9->params.roi.width = VAR_3;
  VAR_9->params.roi.height = VAR_4;
  VAR_9->width = VAR_3;
  VAR_9->height = VAR_4;
  break;
 default:
  VAR_11 = -VAR_0;
 }
 return VAR_11;
}
