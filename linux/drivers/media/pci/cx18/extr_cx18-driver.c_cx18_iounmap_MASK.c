
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int * enc_mem; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cx18 *VAR_0)
{
 if (!VAR_0)
  return;


 if (VAR_0->enc_mem) {
  FUNC_0("releasing enc_mem\n");
  FUNC_1(VAR_0->enc_mem);
  VAR_0->enc_mem = ((void*)0);
 }
}
