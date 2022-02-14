
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ time64_t ;
struct fmeter {scalar_t__ time; int val; int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fmeter *VAR_3)
{
 time64_t VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0();
 VAR_5 = VAR_4 - VAR_3->time;

 if (VAR_5 == 0)
  return;

 VAR_5 = FUNC_1(VAR_1, VAR_5);
 while (VAR_5-- > 0)
  VAR_3->val = (VAR_0 * VAR_3->val) / VAR_2;
 VAR_3->time = VAR_4;

 VAR_3->val += ((VAR_2 - VAR_0) * VAR_3->cnt) / VAR_2;
 VAR_3->cnt = 0;
}
