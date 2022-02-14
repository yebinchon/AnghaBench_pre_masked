
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rvin_video_format {scalar_t__ fourcc; } ;
struct rvin_dev {TYPE_1__* info; } ;
struct TYPE_2__ {scalar_t__ model; } ;


 int FUNC_0 (struct rvin_video_format const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rvin_video_format const* VAR_2 ;

const struct rvin_video_format *FUNC_1(struct rvin_dev *VAR_3,
             u32 VAR_4)
{
 int VAR_5;

 if (VAR_3->info->model == VAR_0 && VAR_4 == VAR_1)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_2[VAR_5].fourcc == VAR_4)
   return VAR_2 + VAR_5;

 return ((void*)0);
}
