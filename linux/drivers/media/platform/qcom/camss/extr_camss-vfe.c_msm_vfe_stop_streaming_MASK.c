
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_device {TYPE_1__* line; } ;
struct TYPE_2__ {int video_out; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vfe_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->line); VAR_1++)
  FUNC_1(&VAR_0->line[VAR_1].video_out);
}
