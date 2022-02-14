
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct kfifo {int dummy; } ;
struct ab_task {int result; } ;


 int VAR_0 ;
 int FUNC_0 (struct kfifo*,struct ab_task**,int) ;

__attribute__((used)) static bool FUNC_1(struct kfifo *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 struct ab_task *VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_1++) {
  VAR_5 = FUNC_0(VAR_1, &VAR_4, sizeof(VAR_4));
  if (VAR_5 && (VAR_4->result != -VAR_0))
   return 1;
 }
 return 0;
}
