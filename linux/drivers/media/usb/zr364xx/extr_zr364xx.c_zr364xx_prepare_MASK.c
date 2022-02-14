
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* frame; } ;
struct zr364xx_camera {size_t method; int skip; int last_frame; int ctrl_handler; TYPE_2__ buffer; scalar_t__ frame_count; scalar_t__ cur_frame; TYPE_3__* udev; } ;
struct TYPE_8__ {int size; int bytes; int value; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {scalar_t__ cur_size; int ulState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_4__** VAR_2 ;
 int FUNC_1 (TYPE_3__*,int,int ,int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct zr364xx_camera *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_2[VAR_3->method][VAR_5].size != -1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3->udev, 1, VAR_2[VAR_3->method][VAR_5].value,
         0, VAR_2[VAR_3->method][VAR_5].bytes,
         VAR_2[VAR_3->method][VAR_5].size);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_3->udev->dev,
    "error during open sequence: %d\n", VAR_5);
   return VAR_4;
  }
 }

 VAR_3->skip = 2;
 VAR_3->last_frame = -1;
 VAR_3->cur_frame = 0;
 VAR_3->frame_count = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3->buffer.frame[VAR_6].ulState = VAR_1;
  VAR_3->buffer.frame[VAR_6].cur_size = 0;
 }
 FUNC_2(&VAR_3->ctrl_handler);
 return 0;
}
