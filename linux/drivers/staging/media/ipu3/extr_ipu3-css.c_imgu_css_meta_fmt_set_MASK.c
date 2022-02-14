
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_meta_format {int dataformat; int buffersize; } ;
struct ipu3_uapi_stats_3a {int dummy; } ;
struct ipu3_uapi_params {int dummy; } ;


 int VAR_0 ;



int FUNC_0(struct v4l2_meta_format *VAR_1)
{
 switch (VAR_1->dataformat) {
 case 129:
  VAR_1->buffersize = sizeof(struct ipu3_uapi_params);
  break;
 case 128:
  VAR_1->buffersize = sizeof(struct ipu3_uapi_stats_3a);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
