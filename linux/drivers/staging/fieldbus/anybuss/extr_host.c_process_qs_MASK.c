
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int dummy; } ;
struct anybuss_host {struct kfifo* qs; } ;


 size_t FUNC_0 (struct kfifo*) ;
 int FUNC_1 (struct anybuss_host*,struct kfifo*) ;

__attribute__((used)) static void FUNC_2(struct anybuss_host *VAR_0)
{
 size_t VAR_1;
 struct kfifo *VAR_2 = VAR_0->qs;
 size_t VAR_3 = FUNC_0(VAR_0->qs);

 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++, VAR_2++)
  FUNC_1(VAR_0, VAR_2);
}
