
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int code; int colorspace; int height; int width; } ;
struct TYPE_2__ {int code; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,int ,int ,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_mbus_framefmt *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_6->width, VAR_3,
         VAR_1, 1,
         &VAR_6->height, VAR_2,
         VAR_0, 1, 0);

 VAR_7 = FUNC_0(VAR_6);

 VAR_6->colorspace = VAR_5[VAR_7].colorspace;
 VAR_6->code = VAR_5[VAR_7].code;
 VAR_6->field = VAR_4;

 return VAR_7;
}
