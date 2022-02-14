
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int field; int height; int width; } ;
struct TYPE_5__ {int height; int width; int top; int left; } ;
struct TYPE_4__ {int height; int width; } ;
struct rvin_dev {TYPE_3__ format; TYPE_2__ crop; TYPE_1__ compose; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rvin_dev*,int) ;
 int FUNC_1 (struct rvin_dev*,int,int ) ;
 int FUNC_2 (struct rvin_dev*,char*,int,int,int ,int ,int,int,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rvin_dev *VAR_6)
{
 u32 VAR_7, VAR_8;


 VAR_8 = 0;
 if (VAR_6->crop.height != VAR_6->compose.height)
  VAR_8 = (4096 * VAR_6->crop.height) / VAR_6->compose.height;
 FUNC_1(VAR_6, VAR_8, VAR_5);

 VAR_7 = 0;
 if (VAR_6->crop.width != VAR_6->compose.width)
  VAR_7 = (4096 * VAR_6->crop.width) / VAR_6->compose.width;


 if (VAR_7 > 0 && VAR_7 < 2048)
  VAR_7 = 2048;

 FUNC_1(VAR_6, VAR_7, VAR_4);


 if (VAR_7 < 4096)
  VAR_7 *= 2;

 FUNC_0(VAR_6, VAR_7);


 FUNC_1(VAR_6, 0, VAR_3);
 FUNC_1(VAR_6, 0, VAR_2);
 FUNC_1(VAR_6, VAR_6->format.width - 1, VAR_1);
 switch (VAR_6->format.field) {
 case 130:
 case 128:
 case 129:
  FUNC_1(VAR_6, VAR_6->format.height / 2 - 1, VAR_0);
  break;
 default:
  FUNC_1(VAR_6, VAR_6->format.height - 1, VAR_0);
  break;
 }

 FUNC_2(VAR_6,
  "Pre-Clip: %ux%u@%u:%u YS: %d XS: %d Post-Clip: %ux%u@%u:%u\n",
  VAR_6->crop.width, VAR_6->crop.height, VAR_6->crop.left,
  VAR_6->crop.top, VAR_8, VAR_7, VAR_6->format.width, VAR_6->format.height,
  0, 0);
}
