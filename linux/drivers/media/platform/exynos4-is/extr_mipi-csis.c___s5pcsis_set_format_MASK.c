
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int width; int height; int code; } ;
struct csis_state {TYPE_1__* csis_fmt; int sd; struct v4l2_mbus_framefmt format; } ;
struct TYPE_2__ {int fmt_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csis_state*,int ) ;
 int FUNC_1 (struct csis_state*,int ,int) ;
 int FUNC_2 (int,int ,int *,char*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct csis_state *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_4->format;
 u32 VAR_6;

 FUNC_2(1, VAR_3, &VAR_4->sd, "fmt: %#x, %d x %d\n",
   VAR_5->code, VAR_5->width, VAR_5->height);


 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = (VAR_6 & ~VAR_0) | VAR_4->csis_fmt->fmt_reg;
 FUNC_1(VAR_4, VAR_1, VAR_6);


 VAR_6 = (VAR_5->width << 16) | VAR_5->height;
 FUNC_1(VAR_4, VAR_2, VAR_6);
}
