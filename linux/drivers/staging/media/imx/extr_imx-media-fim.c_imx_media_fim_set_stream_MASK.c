
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int dummy; } ;
struct imx_media_fim {int stream_on; int * ctrl; int lock; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct imx_media_fim*) ;
 int FUNC_1 (struct imx_media_fim*) ;
 int FUNC_2 (struct imx_media_fim*) ;
 scalar_t__ FUNC_3 (struct imx_media_fim*) ;
 int FUNC_4 (struct imx_media_fim*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct imx_media_fim*,struct v4l2_fract const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct imx_media_fim *VAR_1,
        const struct v4l2_fract *VAR_2,
        bool VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_8(VAR_1->ctrl[VAR_0]);

 if (VAR_1->stream_on == VAR_3)
  goto out;

 if (VAR_3) {
  FUNC_5(&VAR_1->lock, VAR_4);
  FUNC_4(VAR_1, 1);
  FUNC_7(VAR_1, VAR_2);
  FUNC_6(&VAR_1->lock, VAR_4);

  if (FUNC_3(VAR_1)) {
   VAR_5 = FUNC_2(VAR_1);
   if (VAR_5)
    goto out;
   FUNC_0(VAR_1);
  }
 } else {
  if (FUNC_3(VAR_1))
   FUNC_1(VAR_1);
 }

 VAR_1->stream_on = VAR_3;
out:
 FUNC_9(VAR_1->ctrl[VAR_0]);
 return VAR_5;
}
