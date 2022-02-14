
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_config {int dummy; } ;
struct omap_video_timings {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,struct omap_video_timings*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct venc_config const VAR_2 ;
 struct venc_config const VAR_3 ;

__attribute__((used)) static const struct venc_config *FUNC_2(
  struct omap_video_timings *VAR_4)
{
 if (FUNC_1(&VAR_1, VAR_4, sizeof(*VAR_4)) == 0)
  return &VAR_3;

 if (FUNC_1(&VAR_0, VAR_4, sizeof(*VAR_4)) == 0)
  return &VAR_2;

 FUNC_0();
 return ((void*)0);
}
