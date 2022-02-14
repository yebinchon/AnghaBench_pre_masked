
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_video_format {unsigned int code; } ;


 unsigned int FUNC_0 (struct xvip_video_format*) ;
 int VAR_0 ;
 struct xvip_video_format const* FUNC_1 (int ) ;
 struct xvip_video_format* VAR_1 ;

const struct xvip_video_format *FUNC_2(unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  const struct xvip_video_format *VAR_4 = &VAR_1[VAR_3];

  if (VAR_4->code == VAR_2)
   return VAR_4;
 }

 return FUNC_1(-VAR_0);
}
