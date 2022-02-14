
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_ctx; } ;
struct vim2m_ctx {scalar_t__ translen; int dev; TYPE_1__ fh; } ;


 int FUNC_0 (int ,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct vim2m_ctx *VAR_1 = VAR_0;

 if (FUNC_2(VAR_1->fh.m2m_ctx) < VAR_1->translen
     || FUNC_1(VAR_1->fh.m2m_ctx) < VAR_1->translen) {
  FUNC_0(VAR_1->dev, 1, "Not enough buffers available\n");
  return 0;
 }

 return 1;
}
