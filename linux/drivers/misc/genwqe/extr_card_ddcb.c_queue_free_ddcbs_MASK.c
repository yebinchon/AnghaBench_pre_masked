
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_queue {int ddcb_max; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ddcb_queue*) ;

__attribute__((used)) static int FUNC_2(struct ddcb_queue *VAR_0)
{
 int VAR_1 = VAR_0->ddcb_max - FUNC_1(VAR_0) - 1;

 if (FUNC_0(VAR_1 < 0)) {
  return 0;
 }
 return VAR_1;
}
