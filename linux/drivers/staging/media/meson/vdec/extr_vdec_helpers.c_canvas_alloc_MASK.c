
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amvdec_session {scalar_t__ canvas_num; int * canvas_alloc; TYPE_1__* core; } ;
struct TYPE_2__ {int canvas; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct amvdec_session *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 if (VAR_2->canvas_num >= VAR_1) {
  FUNC_0(VAR_2->core->dev, "Reached max number of canvas\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2->core->canvas, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->canvas_alloc[VAR_2->canvas_num++] = *VAR_3;
 return 0;
}
