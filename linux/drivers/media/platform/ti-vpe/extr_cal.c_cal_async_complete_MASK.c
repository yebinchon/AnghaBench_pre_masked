
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int code; } ;
struct v4l2_async_notifier {int dummy; } ;
struct cal_fmt {int fourcc; } ;
struct TYPE_5__ {int pixelformat; } ;
struct TYPE_4__ {TYPE_2__ pix; } ;
struct TYPE_6__ {TYPE_1__ fmt; int type; } ;
struct cal_ctx {struct v4l2_mbus_framefmt m_fmt; struct cal_fmt const* fmt; TYPE_3__ v_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cal_ctx*,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (struct cal_ctx*,struct cal_fmt const*,TYPE_3__*) ;
 int FUNC_2 (int,struct cal_ctx*,char*,int ) ;
 struct cal_fmt* FUNC_3 (struct cal_ctx*,int ) ;
 struct cal_ctx* FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (TYPE_2__*,struct v4l2_mbus_framefmt*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_async_notifier *VAR_2)
{
 struct cal_ctx *VAR_3 = FUNC_4(VAR_2);
 const struct cal_fmt *VAR_4;
 struct v4l2_mbus_framefmt VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_3(VAR_3, VAR_5.code);
 if (!VAR_4) {
  FUNC_2(3, VAR_3, "mbus code format (0x%08x) not found.\n",
   VAR_5.code);
  return -VAR_0;
 }


 FUNC_5(&VAR_3->v_fmt.fmt.pix, &VAR_5);
 VAR_3->v_fmt.type = VAR_1;
 VAR_3->v_fmt.fmt.pix.pixelformat = VAR_4->fourcc;
 FUNC_1(VAR_3, VAR_4, &VAR_3->v_fmt);
 VAR_3->fmt = VAR_4;
 VAR_3->m_fmt = VAR_5;

 return 0;
}
