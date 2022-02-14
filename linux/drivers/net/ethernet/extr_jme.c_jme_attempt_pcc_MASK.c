
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynpcc_info {int cur; int attempt; scalar_t__ cnt; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct dynpcc_info *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_1 == VAR_0->cur)) {
  VAR_0->cnt = 0;
  return;
 }

 if (VAR_0->attempt == VAR_1) {
  ++(VAR_0->cnt);
 } else {
  VAR_0->attempt = VAR_1;
  VAR_0->cnt = 0;
 }

}
