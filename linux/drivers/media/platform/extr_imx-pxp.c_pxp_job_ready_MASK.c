
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct pxp_ctx {int dev; TYPE_1__ fh; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct pxp_ctx *VAR_1 = VAR_0;

 if (FUNC_2(VAR_1->fh.m2m_ctx) < 1 ||
     FUNC_1(VAR_1->fh.m2m_ctx) < 1) {
  FUNC_0(VAR_1->dev, "Not enough buffers available\n");
  return 0;
 }

 return 1;
}
