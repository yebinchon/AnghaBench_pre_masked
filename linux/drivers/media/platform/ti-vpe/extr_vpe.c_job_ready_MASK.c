
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct vpe_ctx {TYPE_1__ fh; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct vpe_ctx *VAR_1 = VAR_0;






 if (FUNC_1(VAR_1->fh.m2m_ctx) <= 0 ||
  FUNC_0(VAR_1->fh.m2m_ctx) <= 0)
  return 0;

 return 1;
}
