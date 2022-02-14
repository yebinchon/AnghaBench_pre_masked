
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct deinterlace_dev {int busy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct deinterlace_ctx {struct deinterlace_dev* dev; TYPE_1__ fh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct deinterlace_dev*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct deinterlace_ctx *VAR_1 = VAR_0;
 struct deinterlace_dev *VAR_2 = VAR_1->dev;

 if (FUNC_3(VAR_1->fh.m2m_ctx) > 0 &&
     FUNC_2(VAR_1->fh.m2m_ctx) > 0 &&
     !FUNC_0(&VAR_1->dev->busy)) {
  FUNC_1(VAR_2, "Task ready\n");
  return 1;
 }

 FUNC_1(VAR_2, "Task not ready to run\n");

 return 0;
}
