
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; } ;
struct fdp1_q_data {TYPE_1__ format; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct fdp1_ctx {int fdp1; TYPE_2__ fh; struct fdp1_q_data out_q; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct fdp1_ctx *VAR_1 = VAR_0;
 struct fdp1_q_data *VAR_2 = &VAR_1->out_q;
 int VAR_3 = 1;
 int VAR_4 = 1;

 FUNC_1(VAR_1->fdp1, "+ Src: %d : Dst: %d\n",
  FUNC_3(VAR_1->fh.m2m_ctx),
  FUNC_2(VAR_1->fh.m2m_ctx));


 if (FUNC_0(VAR_2->format.field))
  VAR_4 = 2;

 if (FUNC_3(VAR_1->fh.m2m_ctx) < VAR_3
     || FUNC_2(VAR_1->fh.m2m_ctx) < VAR_4) {
  FUNC_1(VAR_1->fdp1, "Not enough buffers available\n");
  return 0;
 }

 return 1;
}
