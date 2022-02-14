
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlist {int reg; int val; } ;
struct cx88_core {int dummy; } ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct cx88_core *VAR_0, const struct rlist *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].reg; VAR_2++) {
  switch (VAR_1[VAR_2].reg) {
  case 131:
  case 132:
  case 133:
  case 128:
  case 129:
  case 130:
   FUNC_1(VAR_1[VAR_2].reg, VAR_1[VAR_2].val);
   break;
  default:
   FUNC_0(VAR_1[VAR_2].reg, VAR_1[VAR_2].val);
   break;
  }
 }
}
