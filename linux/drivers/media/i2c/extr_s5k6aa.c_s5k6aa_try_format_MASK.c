
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int code; int colorspace; int height; int width; } ;
struct s5k6aa {int dummy; } ;
struct TYPE_2__ {int code; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned int FUNC_0 (struct s5k6aa*,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (int *,int ,int ,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct s5k6aa *VAR_8,
         struct v4l2_mbus_framefmt *VAR_9)
{
 unsigned int VAR_10;

 FUNC_1(&VAR_9->width, VAR_3,
         VAR_2, 1,
         &VAR_9->height, VAR_1,
         VAR_0, 1, 0);

 if (VAR_9->colorspace != VAR_4 &&
     VAR_9->colorspace != VAR_5)
  VAR_9->colorspace = VAR_4;

 VAR_10 = FUNC_0(VAR_8, VAR_9);

 VAR_9->colorspace = VAR_7[VAR_10].colorspace;
 VAR_9->code = VAR_7[VAR_10].code;
 VAR_9->field = VAR_6;
}
