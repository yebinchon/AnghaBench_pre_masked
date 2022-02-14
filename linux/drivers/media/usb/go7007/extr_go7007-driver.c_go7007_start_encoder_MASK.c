
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct go7007 {int modet_enable; size_t* modet_map; int height; int width; int v4l2_dev; scalar_t__ seen_frame; scalar_t__ parse_length; int state; scalar_t__ dvd_mode; TYPE_1__* modet; int modet_mode; } ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct go7007*,int **,int*) ;
 scalar_t__ FUNC_1 (struct go7007*,int *,int *) ;
 scalar_t__ FUNC_2 (struct go7007*,int *,int) ;
 scalar_t__ FUNC_3 (struct go7007*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (size_t*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;

int FUNC_8(struct go7007 *VAR_1)
{
 u8 *VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5, VAR_6, VAR_7;
 u16 VAR_8, VAR_9;

 VAR_1->modet_enable = 0;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_1->modet[VAR_5].enable = 0;

 switch (FUNC_6(VAR_1->modet_mode)) {
 case 129:
  FUNC_5(VAR_1->modet_map, 0, sizeof(VAR_1->modet_map));
  VAR_1->modet[0].enable = 1;
  VAR_1->modet_enable = 1;
  break;
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_1->height / 16; VAR_7++) {
   for (VAR_6 = 0; VAR_6 < VAR_1->width / 16; VAR_6++) {
    int VAR_10 = VAR_7 * VAR_1->width / 16 + VAR_6;

    VAR_1->modet[VAR_1->modet_map[VAR_10]].enable = 1;
   }
  }
  VAR_1->modet_enable = 1;
  break;
 }

 if (VAR_1->dvd_mode)
  VAR_1->modet_enable = 0;

 if (FUNC_0(VAR_1, &VAR_2, &VAR_3) < 0)
  return -1;

 if (FUNC_2(VAR_1, VAR_2, VAR_3) < 0 ||
   FUNC_1(VAR_1, &VAR_8, &VAR_9) < 0) {
  FUNC_7(&VAR_1->v4l2_dev, "error transferring firmware\n");
  VAR_4 = -1;
  goto start_error;
 }

 VAR_1->state = VAR_0;
 VAR_1->parse_length = 0;
 VAR_1->seen_frame = 0;
 if (FUNC_3(VAR_1) < 0) {
  FUNC_7(&VAR_1->v4l2_dev, "error starting stream transfer\n");
  VAR_4 = -1;
  goto start_error;
 }

start_error:
 FUNC_4(VAR_2);
 return VAR_4;
}
