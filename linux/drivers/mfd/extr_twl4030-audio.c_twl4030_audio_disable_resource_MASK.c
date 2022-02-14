
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twl4030_audio {int mutex; TYPE_1__* resource; } ;
typedef enum twl4030_audio_res { ____Placeholder_twl4030_audio_res } twl4030_audio_res ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int request_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct twl4030_audio* FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

int FUNC_6(enum twl4030_audio_res VAR_4)
{
 struct twl4030_audio *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if (VAR_4 >= VAR_2) {
  FUNC_0(&VAR_3->dev,
    "Invalid resource ID (%u)\n", VAR_4);
  return -VAR_0;
 }

 FUNC_1(&VAR_5->mutex);
 if (!VAR_5->resource[VAR_4].request_count) {
  FUNC_0(&VAR_3->dev,
   "Resource has been disabled already (%u)\n", VAR_4);
  FUNC_2(&VAR_5->mutex);
  return -VAR_1;
 }
 VAR_5->resource[VAR_4].request_count--;

 if (!VAR_5->resource[VAR_4].request_count)

  VAR_6 = FUNC_5(VAR_4, 0);
 else
  VAR_6 = FUNC_4(VAR_4);

 FUNC_2(&VAR_5->mutex);

 return VAR_6;
}
