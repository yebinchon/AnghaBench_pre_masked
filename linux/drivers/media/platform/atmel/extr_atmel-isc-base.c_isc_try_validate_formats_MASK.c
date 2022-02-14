
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fourcc; TYPE_1__* sd_format; } ;
struct isc_device {int v4l2_dev; TYPE_2__ try_config; } ;
struct TYPE_3__ {int mbus_code; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int *,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct isc_device *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;


 switch (VAR_2->try_config.fourcc) {
 case 141:
 case 138:
 case 135:
 case 132:
 case 143:
 case 140:
 case 137:
 case 134:
 case 142:
 case 139:
 case 136:
 case 133:
  VAR_3 = 0;
  VAR_4 = 1;
  break;

 case 130:
 case 129:
 case 128:
  VAR_3 = 0;
  VAR_5 = 1;
  break;

 case 144:
 case 148:
 case 131:
 case 147:
 case 146:
  VAR_3 = 0;
  VAR_6 = 1;
  break;
 case 145:
  VAR_3 = 0;
  VAR_7 = 1;
  break;
 default:

  VAR_3 = -VAR_0;
 }


 if ((VAR_4 || VAR_7) &&
     !FUNC_0(VAR_2->try_config.sd_format->mbus_code))
  return -VAR_0;

 FUNC_1(1, VAR_1, &VAR_2->v4l2_dev,
   "Format validation, requested rgb=%u, yuv=%u, grey=%u, bayer=%u\n",
   VAR_6, VAR_5, VAR_7, VAR_4);

 return VAR_3;
}
