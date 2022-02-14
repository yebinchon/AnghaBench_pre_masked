
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_output {int pending_bufs; int ** buf; int state; } ;
struct vfe_device {TYPE_1__* line; } ;
struct TYPE_2__ {struct vfe_output output; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->line); VAR_2++) {
  struct vfe_output *VAR_3 = &VAR_1->line[VAR_2].output;

  VAR_3->state = VAR_0;
  VAR_3->buf[0] = ((void*)0);
  VAR_3->buf[1] = ((void*)0);
  FUNC_1(&VAR_3->pending_bufs);
 }
}
