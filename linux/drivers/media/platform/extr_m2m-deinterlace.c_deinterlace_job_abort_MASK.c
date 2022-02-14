
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct deinterlace_dev {int m2m_dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct deinterlace_ctx {int aborting; TYPE_1__ fh; struct deinterlace_dev* dev; } ;


 int FUNC_0 (struct deinterlace_dev*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct deinterlace_ctx *VAR_1 = VAR_0;
 struct deinterlace_dev *VAR_2 = VAR_1->dev;

 VAR_1->aborting = 1;

 FUNC_0(VAR_2, "Aborting task\n");

 FUNC_1(VAR_2->m2m_dev, VAR_1->fh.m2m_ctx);
}
