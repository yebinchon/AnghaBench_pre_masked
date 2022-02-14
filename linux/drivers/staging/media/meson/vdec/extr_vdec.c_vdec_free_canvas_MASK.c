
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amvdec_session {int canvas_num; int * canvas_alloc; TYPE_1__* core; } ;
struct TYPE_2__ {int canvas; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct amvdec_session *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->canvas_num; ++VAR_1)
  FUNC_0(VAR_0->core->canvas, VAR_0->canvas_alloc[VAR_1]);

 VAR_0->canvas_num = 0;
}
