
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct kfifo {int dummy; } ;
struct anybuss_host {int dummy; } ;
struct ab_task {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ab_task*,struct anybuss_host*) ;
 int FUNC_2 (struct ab_task*) ;
 int FUNC_3 (struct kfifo*,struct ab_task**,int) ;

__attribute__((used)) static void
FUNC_4(struct kfifo *VAR_0, struct anybuss_host *VAR_1)
{
 int VAR_2;
 struct ab_task *VAR_3;

 VAR_2 = FUNC_3(VAR_0, &VAR_3, sizeof(VAR_3));
 FUNC_0(!VAR_2);
 FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_3);
}
