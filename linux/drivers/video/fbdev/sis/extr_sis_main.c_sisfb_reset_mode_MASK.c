
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_video_info {int current_base; } ;


 int FUNC_0 (struct sis_video_info*,int ) ;
 int FUNC_1 (struct sis_video_info*,int ) ;
 scalar_t__ FUNC_2 (struct sis_video_info*,int ) ;
 int FUNC_3 (struct sis_video_info*) ;

__attribute__((used)) static int
FUNC_4(struct sis_video_info *VAR_0)
{
 if(FUNC_2(VAR_0, 0))
  return 1;

 FUNC_3(VAR_0);
 FUNC_0(VAR_0, VAR_0->current_base);
 FUNC_1(VAR_0, VAR_0->current_base);

 return 0;
}
